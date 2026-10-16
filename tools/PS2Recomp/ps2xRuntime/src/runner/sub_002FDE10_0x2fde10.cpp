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

// Function: sub_002FDE10
// Address: 0x2fde10 - 0x2fdf98
void sub_002FDE10_0x2fde10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDE10_0x2fde10");
#endif

    switch (ctx->pc) {
        case 0x2fdea4u: goto label_2fdea4;
        case 0x2fdea8u: goto label_2fdea8;
        default: break;
    }

    ctx->pc = 0x2fde10u;

    // 0x2fde10: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x2fde10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x2fde14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fde14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fde18: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2FDE18u;
    {
        const bool branch_taken_0x2fde18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fde18) {
            ctx->pc = 0x2FDF30u;
            goto label_2fdf30;
        }
    }
    ctx->pc = 0x2FDE20u;
    // 0x2fde20: 0x8c820188  lw          $v0, 0x188($a0)
    ctx->pc = 0x2fde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x2fde24: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2FDE24u;
    {
        const bool branch_taken_0x2fde24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fde24) {
            ctx->pc = 0x2FDE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDE24u;
            // 0x2fde28: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDEB8u;
            goto label_2fdeb8;
        }
    }
    ctx->pc = 0x2FDE2Cu;
    // 0x2fde2c: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDE2Cu;
    {
        const bool branch_taken_0x2fde2c = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2FDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE2Cu;
        // 0x2fde30: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde2c) {
            ctx->pc = 0x2FDE40u;
            goto label_2fde40;
        }
    }
    ctx->pc = 0x2FDE34u;
    // 0x2fde34: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2fde34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fde38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDE38u;
    {
        const bool branch_taken_0x2fde38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE38u;
        // 0x2fde3c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde38) {
            ctx->pc = 0x2FDE44u;
            goto label_2fde44;
        }
    }
    ctx->pc = 0x2FDE40u;
label_2fde40:
    // 0x2fde40: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x2fde40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_2fde44:
    // 0x2fde44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fde44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fde48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fde48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2fde4c: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDE4Cu;
    {
        const bool branch_taken_0x2fde4c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2FDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE4Cu;
        // 0x2fde50: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde4c) {
            ctx->pc = 0x2FDE60u;
            goto label_2fde60;
        }
    }
    ctx->pc = 0x2FDE54u;
    // 0x2fde54: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2fde54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fde58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDE58u;
    {
        const bool branch_taken_0x2fde58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE58u;
        // 0x2fde5c: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde58) {
            ctx->pc = 0x2FDE64u;
            goto label_2fde64;
        }
    }
    ctx->pc = 0x2FDE60u;
label_2fde60:
    // 0x2fde60: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_2fde64:
    // 0x2fde64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fde64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fde68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fde68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fde6c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2fde6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2fde70: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2fde70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2fde74: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2fde74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fde78: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDE78u;
    {
        const bool branch_taken_0x2fde78 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2FDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE78u;
        // 0x2fde7c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde78) {
            ctx->pc = 0x2FDE84u;
            goto label_2fde84;
        }
    }
    ctx->pc = 0x2FDE80u;
    // 0x2fde80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fde80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fde84:
    // 0x2fde84: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fde84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fde88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fde88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fde8c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2fde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2fde90: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2fde90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2fde94: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2fde94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fde98: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDE98u;
    {
        const bool branch_taken_0x2fde98 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2FDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDE98u;
        // 0x2fde9c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fde98) {
            ctx->pc = 0x2FDEA4u;
            goto label_2fdea4;
        }
    }
    ctx->pc = 0x2FDEA0u;
    // 0x2fdea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fdea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fdea4:
    // 0x2fdea4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fdea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2fdea8:
    // 0x2fdea8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2fdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fdeac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fdeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fdeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEB0u;
        // 0x2fdeb4: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDEB8u;
label_2fdeb8:
    // 0x2fdeb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fdeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fdebc: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDEBCu;
    {
        const bool branch_taken_0x2fdebc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2FDEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEBCu;
        // 0x2fdec0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdebc) {
            ctx->pc = 0x2FDEC8u;
            goto label_2fdec8;
        }
    }
    ctx->pc = 0x2FDEC4u;
    // 0x2fdec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fdec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fdec8:
    // 0x2fdec8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fdec8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fdecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fded0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fded0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2fded4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2fded4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2fded8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2fded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fdedc: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDEDCu;
    {
        const bool branch_taken_0x2fdedc = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2FDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEDCu;
        // 0x2fdee0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdedc) {
            ctx->pc = 0x2FDEE8u;
            goto label_2fdee8;
        }
    }
    ctx->pc = 0x2FDEE4u;
    // 0x2fdee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fdee8:
    // 0x2fdee8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2fdee8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2fdeec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fdef0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fdef4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2fdef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2fdef8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDEF8u;
    {
        const bool branch_taken_0x2fdef8 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2FDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEF8u;
        // 0x2fdefc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdef8) {
            ctx->pc = 0x2FDF0Cu;
            goto label_2fdf0c;
        }
    }
    ctx->pc = 0x2FDF00u;
    // 0x2fdf00: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fdf04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDF04u;
    {
        const bool branch_taken_0x2fdf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF04u;
        // 0x2fdf08: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf04) {
            ctx->pc = 0x2FDF10u;
            goto label_2fdf10;
        }
    }
    ctx->pc = 0x2FDF0Cu;
label_2fdf0c:
    // 0x2fdf0c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x2fdf0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_2fdf10:
    // 0x2fdf10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fdf14: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2fdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2fdf18: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDF18u;
    {
        const bool branch_taken_0x2fdf18 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2FDF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF18u;
        // 0x2fdf1c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf18) {
            ctx->pc = 0x2FDF28u;
            goto label_2fdf28;
        }
    }
    ctx->pc = 0x2FDF20u;
    // 0x2fdf20: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FDF20u;
    {
        const bool branch_taken_0x2fdf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF20u;
        // 0x2fdf24: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf20) {
            ctx->pc = 0x2FDEA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdea4;
        }
    }
    ctx->pc = 0x2FDF28u;
label_2fdf28:
    // 0x2fdf28: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x2FDF28u;
    {
        const bool branch_taken_0x2fdf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF28u;
        // 0x2fdf2c: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf28) {
            ctx->pc = 0x2FDEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdea8;
        }
    }
    ctx->pc = 0x2FDF30u;
label_2fdf30:
    // 0x2fdf30: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF30u;
    {
        const bool branch_taken_0x2fdf30 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x2FDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF30u;
        // 0x2fdf34: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf30) {
            ctx->pc = 0x2FDF44u;
            goto label_2fdf44;
        }
    }
    ctx->pc = 0x2FDF38u;
    // 0x2fdf38: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x2fdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fdf3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDF3Cu;
    {
        const bool branch_taken_0x2fdf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF3Cu;
        // 0x2fdf40: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf3c) {
            ctx->pc = 0x2FDF48u;
            goto label_2fdf48;
        }
    }
    ctx->pc = 0x2FDF44u;
label_2fdf44:
    // 0x2fdf44: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x2fdf44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_2fdf48:
    // 0x2fdf48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fdf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fdf4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fdf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2fdf50: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF50u;
    {
        const bool branch_taken_0x2fdf50 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x2FDF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF50u;
        // 0x2fdf54: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf50) {
            ctx->pc = 0x2FDF64u;
            goto label_2fdf64;
        }
    }
    ctx->pc = 0x2FDF58u;
    // 0x2fdf58: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2fdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fdf5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FDF5Cu;
    {
        const bool branch_taken_0x2fdf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF5Cu;
        // 0x2fdf60: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf5c) {
            ctx->pc = 0x2FDF68u;
            goto label_2fdf68;
        }
    }
    ctx->pc = 0x2FDF64u;
label_2fdf64:
    // 0x2fdf64: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x2fdf64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_2fdf68:
    // 0x2fdf68: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2fdf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fdf6c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2fdf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x2fdf70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdf74: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x2fdf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x2fdf78: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDF78u;
    {
        const bool branch_taken_0x2fdf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF78u;
        // 0x2fdf7c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf78) {
            ctx->pc = 0x2FDF8Cu;
            goto label_2fdf8c;
        }
    }
    ctx->pc = 0x2FDF80u;
    // 0x2fdf80: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2fdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2fdf84: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF84u;
        // 0x2fdf88: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF8Cu;
label_2fdf8c:
    // 0x2fdf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF8Cu;
        // 0x2fdf90: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDF94u;
    // 0x2fdf94: 0x0  nop
    ctx->pc = 0x2fdf94u;
    // NOP
    ctx->pc = 0x2fdf98u;
}
