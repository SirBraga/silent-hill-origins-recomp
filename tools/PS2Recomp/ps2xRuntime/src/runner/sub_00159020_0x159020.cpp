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

// Function: sub_00159020
// Address: 0x159020 - 0x1590c0
void sub_00159020_0x159020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159020_0x159020");
#endif

    switch (ctx->pc) {
        case 0x15905cu: goto label_15905c;
        case 0x159074u: goto label_159074;
        case 0x15907cu: goto label_15907c;
        default: break;
    }

    ctx->pc = 0x159020u;

    // 0x159020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159024: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159028: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x159028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15902c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x159030: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x159030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x159034: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x159034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x159038: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x159038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15903c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15903cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159040: 0x2c4200ff  sltiu       $v0, $v0, 0xFF
    ctx->pc = 0x159040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x159044: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x159044u;
    {
        const bool branch_taken_0x159044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159044u;
        // 0x159048: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159044) {
            ctx->pc = 0x1590A0u;
            goto label_1590a0;
        }
    }
    ctx->pc = 0x15904Cu;
    // 0x15904c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x15904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x159050: 0x2428818  mult        $s1, $s2, $v0
    ctx->pc = 0x159050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x159054: 0xc080888  jal         func_202220
    ctx->pc = 0x159054u;
    SET_GPR_U32(ctx, 31, 0x15905Cu);
    ctx->pc = 0x159058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159054u;
    // 0x159058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x159054u, 0x15905Cu)) {
        return;
    }
    ctx->pc = 0x15905Cu;
label_15905c:
    // 0x15905c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159060: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x159060u;
    {
        const bool branch_taken_0x159060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x159064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159060u;
        // 0x159064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159060) {
            ctx->pc = 0x1590A0u;
            goto label_1590a0;
        }
    }
    ctx->pc = 0x159068u;
    // 0x159068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x159068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15906c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15906Cu;
    SET_GPR_U32(ctx, 31, 0x159074u);
    ctx->pc = 0x159070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15906Cu;
    // 0x159070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15906Cu, 0x159074u)) {
        return;
    }
    ctx->pc = 0x159074u;
label_159074:
    // 0x159074: 0xc080858  jal         func_202160
    ctx->pc = 0x159074u;
    SET_GPR_U32(ctx, 31, 0x15907Cu);
    ctx->pc = 0x159078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159074u;
    // 0x159078: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x159074u, 0x15907Cu)) {
        return;
    }
    ctx->pc = 0x15907Cu;
label_15907c:
    // 0x15907c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x15907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x159080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x159080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159084: 0x8c658620  lw          $a1, -0x79E0($v1)
    ctx->pc = 0x159084u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338620u));
    // 0x159088: 0xac93000c  sw          $s3, 0xC($a0)
    ctx->pc = 0x159088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 19));
    // 0x15908c: 0xac900008  sw          $s0, 0x8($a0)
    ctx->pc = 0x15908cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 16));
    // 0x159090: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x159090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
    // 0x159094: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x159094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x159098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159098u;
    {
        const bool branch_taken_0x159098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159098u;
        // 0x15909c: 0xac648620  sw          $a0, -0x79E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159098) {
            ctx->pc = 0x1590A4u;
            goto label_1590a4;
        }
    }
    ctx->pc = 0x1590A0u;
label_1590a0:
    // 0x1590a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1590a4:
    // 0x1590a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1590a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1590a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1590a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1590ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1590acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1590b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1590b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1590b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1590b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1590b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1590B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1590BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1590B8u;
        // 0x1590bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1590B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1590C0u;
}
