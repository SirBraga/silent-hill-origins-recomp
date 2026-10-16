#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD1E8
// Address: 0x2dd1e8 - 0x2dd280
void sub_002DD1E8_0x2dd1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD1E8_0x2dd1e8");
#endif

    switch (ctx->pc) {
        case 0x2dd218u: goto label_2dd218;
        case 0x2dd22cu: goto label_2dd22c;
        default: break;
    }

    ctx->pc = 0x2dd1e8u;

    // 0x2dd1e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dd1ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dd1f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2dd1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2dd1f4: 0x2492000c  addiu       $s2, $a0, 0xC
    ctx->pc = 0x2dd1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2dd1f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2dd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2dd1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd200: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2dd200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2dd204: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2dd204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2dd208: 0x1212000e  beq         $s0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2DD208u;
    {
        const bool branch_taken_0x2dd208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD208u;
        // 0x2dd20c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd208) {
            ctx->pc = 0x2DD244u;
            goto label_2dd244;
        }
    }
    ctx->pc = 0x2DD210u;
    // 0x2dd210: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2dd214: 0x0  nop
    ctx->pc = 0x2dd214u;
    // NOP
label_2dd218:
    // 0x2dd218: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2dd218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2dd21c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD21Cu;
    {
        const bool branch_taken_0x2dd21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd21c) {
            ctx->pc = 0x2DD220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD21Cu;
            // 0x2dd220: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD23Cu;
            goto label_2dd23c;
        }
    }
    ctx->pc = 0x2DD224u;
    // 0x2dd224: 0xc0b7d20  jal         func_2DF480
    ctx->pc = 0x2DD224u;
    SET_GPR_U32(ctx, 31, 0x2DD22Cu);
    ctx->pc = 0x2DD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD224u;
    // 0x2dd228: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF480u, 0x2DD224u, 0x2DD22Cu)) {
        return;
    }
    ctx->pc = 0x2DD22Cu;
label_2dd22c:
    // 0x2dd22c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD22Cu;
    {
        const bool branch_taken_0x2dd22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd22c) {
            ctx->pc = 0x2DD230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD22Cu;
            // 0x2dd230: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD23Cu;
            goto label_2dd23c;
        }
    }
    ctx->pc = 0x2DD234u;
    // 0x2dd234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD234u;
    {
        const bool branch_taken_0x2dd234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD234u;
        // 0x2dd238: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd234) {
            ctx->pc = 0x2DD248u;
            goto label_2dd248;
        }
    }
    ctx->pc = 0x2DD23Cu;
label_2dd23c:
    // 0x2dd23c: 0x5612fff6  bnel        $s0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DD23Cu;
    {
        const bool branch_taken_0x2dd23c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2dd23c) {
            ctx->pc = 0x2DD240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD23Cu;
            // 0x2dd240: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dd218;
        }
    }
    ctx->pc = 0x2DD244u;
label_2dd244:
    // 0x2dd244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd248:
    // 0x2dd248: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dd248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dd24c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dd24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dd250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd254: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2dd254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd25c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD25Cu;
        // 0x2dd260: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD264u;
    // 0x2dd264: 0x0  nop
    ctx->pc = 0x2dd264u;
    // NOP
    // 0x2dd268: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dd268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dd26c: 0x0  nop
    ctx->pc = 0x2dd26cu;
    // NOP
    // 0x2dd270: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dd274: 0x0  nop
    ctx->pc = 0x2dd274u;
    // NOP
    // 0x2dd278: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2dd278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dd27c: 0x0  nop
    ctx->pc = 0x2dd27cu;
    // NOP
    ctx->pc = 0x2dd280u;
}
