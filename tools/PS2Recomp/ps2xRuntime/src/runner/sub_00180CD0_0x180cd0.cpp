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

// Function: sub_00180CD0
// Address: 0x180cd0 - 0x180d48
void sub_00180CD0_0x180cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CD0_0x180cd0");
#endif

    switch (ctx->pc) {
        case 0x180cf8u: goto label_180cf8;
        case 0x180d24u: goto label_180d24;
        case 0x180d34u: goto label_180d34;
        default: break;
    }

    ctx->pc = 0x180cd0u;

    // 0x180cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180cd4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x180cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x180cd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180ce0: 0x8c4388a8  lw          $v1, -0x7758($v0)
    ctx->pc = 0x180ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F88A8u));
    // 0x180ce4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x180ce8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180CE8u;
    {
        const bool branch_taken_0x180ce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x180CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CE8u;
        // 0x180cec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ce8) {
            ctx->pc = 0x180D00u;
            goto label_180d00;
        }
    }
    ctx->pc = 0x180CF0u;
    // 0x180cf0: 0xc060352  jal         func_180D48
    ctx->pc = 0x180CF0u;
    SET_GPR_U32(ctx, 31, 0x180CF8u);
    ctx->pc = 0x180D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180D48u, 0x180CF0u, 0x180CF8u)) {
        return;
    }
    ctx->pc = 0x180CF8u;
label_180cf8:
    // 0x180cf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x180CF8u;
    {
        const bool branch_taken_0x180cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CF8u;
        // 0x180cfc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cf8) {
            ctx->pc = 0x180D38u;
            goto label_180d38;
        }
    }
    ctx->pc = 0x180D00u;
label_180d00:
    // 0x180d00: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x180d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x180d04: 0x8c438910  lw          $v1, -0x76F0($v0)
    ctx->pc = 0x180d04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8910u));
    // 0x180d08: 0x54a3000b  bnel        $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x180D08u;
    {
        const bool branch_taken_0x180d08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x180d08) {
            ctx->pc = 0x180D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D08u;
            // 0x180d0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D38u;
            goto label_180d38;
        }
    }
    ctx->pc = 0x180D10u;
    // 0x180d10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x180d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x180d14: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x180D14u;
    {
        const bool branch_taken_0x180d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d14) {
            ctx->pc = 0x180D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D14u;
            // 0x180d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D38u;
            goto label_180d38;
        }
    }
    ctx->pc = 0x180D1Cu;
    // 0x180d1c: 0xc06095a  jal         func_182568
    ctx->pc = 0x180D1Cu;
    SET_GPR_U32(ctx, 31, 0x180D24u);
    ctx->pc = 0x180D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D1Cu;
    // 0x180d20: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182568u, 0x180D1Cu, 0x180D24u)) {
        return;
    }
    ctx->pc = 0x180D24u;
label_180d24:
    // 0x180d24: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180D24u;
    {
        const bool branch_taken_0x180d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180d24) {
            ctx->pc = 0x180D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180D24u;
            // 0x180d28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180D38u;
            goto label_180d38;
        }
    }
    ctx->pc = 0x180D2Cu;
    // 0x180d2c: 0xc06028e  jal         func_180A38
    ctx->pc = 0x180D2Cu;
    SET_GPR_U32(ctx, 31, 0x180D34u);
    ctx->pc = 0x180D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180D2Cu;
    // 0x180d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180A38u, 0x180D2Cu, 0x180D34u)) {
        return;
    }
    ctx->pc = 0x180D34u;
label_180d34:
    // 0x180d34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180d38:
    // 0x180d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x180D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180D3Cu;
        // 0x180d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180D44u;
    // 0x180d44: 0x0  nop
    ctx->pc = 0x180d44u;
    // NOP
    ctx->pc = 0x180d48u;
}
