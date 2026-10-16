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

// Function: sub_0025FD80
// Address: 0x25fd80 - 0x25fe40
void sub_0025FD80_0x25fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FD80_0x25fd80");
#endif

    switch (ctx->pc) {
        case 0x25fe28u: goto label_25fe28;
        default: break;
    }

    ctx->pc = 0x25fd80u;

    // 0x25fd80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fd84: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25fd84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25fd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fd90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25fd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd94: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x25fd98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fd9c: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x25fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x25fda0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x25fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x25fda4: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x25fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x25fda8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25FDA8u;
    {
        const bool branch_taken_0x25fda8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDA8u;
        // 0x25fdac: 0x8f829148  lw          $v0, -0x6EB8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fda8) {
            ctx->pc = 0x25FDE4u;
            goto label_25fde4;
        }
    }
    ctx->pc = 0x25FDB0u;
    // 0x25fdb0: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x25fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x25fdb4: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x25fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x25fdb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fdbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25FDBCu;
    {
        const bool branch_taken_0x25fdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDBCu;
        // 0x25fdc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdbc) {
            ctx->pc = 0x25FDD8u;
            goto label_25fdd8;
        }
    }
    ctx->pc = 0x25FDC4u;
    // 0x25fdc4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fdc8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x25fdc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fdcc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x25FDCCu;
    {
        const bool branch_taken_0x25fdcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDCCu;
        // 0x25fdd0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdcc) {
            ctx->pc = 0x25FE28u;
            goto label_25fe28;
        }
    }
    ctx->pc = 0x25FDD4u;
    // 0x25fdd4: 0x0  nop
    ctx->pc = 0x25fdd4u;
    // NOP
label_25fdd8:
    // 0x25fdd8: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x25fdd8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fddc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25FDDCu;
    {
        const bool branch_taken_0x25fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDDCu;
        // 0x25fde0: 0xe62021  addu        $a0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fddc) {
            ctx->pc = 0x25FE20u;
            goto label_25fe20;
        }
    }
    ctx->pc = 0x25FDE4u;
label_25fde4:
    // 0x25fde4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x25fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x25fde8: 0x8c4241b0  lw          $v0, 0x41B0($v0)
    ctx->pc = 0x25fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B41B0u));
    // 0x25fdec: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x25fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x25fdf0: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25fdf4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x25fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25fdf8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FDF8u;
    {
        const bool branch_taken_0x25fdf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FDF8u;
        // 0x25fdfc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fdf8) {
            ctx->pc = 0x25FE18u;
            goto label_25fe18;
        }
    }
    ctx->pc = 0x25FE00u;
    // 0x25fe00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fe04: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x25fe04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25fe08: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FE08u;
    {
        const bool branch_taken_0x25fe08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25fe08) {
            ctx->pc = 0x25FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25FE08u;
            // 0x25fe0c: 0x94850004  lhu         $a1, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25FE1Cu;
            goto label_25fe1c;
        }
    }
    ctx->pc = 0x25FE10u;
    // 0x25fe10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25FE10u;
    {
        const bool branch_taken_0x25fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE10u;
        // 0x25fe14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe10) {
            ctx->pc = 0x25FE28u;
            goto label_25fe28;
        }
    }
    ctx->pc = 0x25FE18u;
label_25fe18:
    // 0x25fe18: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x25fe18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_25fe1c:
    // 0x25fe1c: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x25fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_25fe20:
    // 0x25fe20: 0xc0993a4  jal         func_264E90
    ctx->pc = 0x25FE20u;
    SET_GPR_U32(ctx, 31, 0x25FE28u);
    ctx->pc = 0x264E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x264E90u, 0x25FE20u, 0x25FE28u)) {
        return;
    }
    ctx->pc = 0x25FE28u;
label_25fe28:
    // 0x25fe28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fe2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x25fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x25fe30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25fe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fe38: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FE38u;
        // 0x25fe3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FE40u;
}
