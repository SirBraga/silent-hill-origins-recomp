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

// Function: sub_002EDD38
// Address: 0x2edd38 - 0x2ede10
void sub_002EDD38_0x2edd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDD38_0x2edd38");
#endif

    switch (ctx->pc) {
        case 0x2edd88u: goto label_2edd88;
        default: break;
    }

    ctx->pc = 0x2edd38u;

    // 0x2edd38: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2edd38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd3c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x2edd3cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd40: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2edd40u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd44: 0x24180004  addiu       $t8, $zero, 0x4
    ctx->pc = 0x2edd44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2edd48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2edd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2edd4c: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDD4Cu;
    {
        const bool branch_taken_0x2edd4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD4Cu;
        // 0x2edd50: 0x8cab0008  lw          $t3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd4c) {
            ctx->pc = 0x2EDD5Cu;
            goto label_2edd5c;
        }
    }
    ctx->pc = 0x2EDD54u;
    // 0x2edd54: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2edd54u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd58: 0x25eb0001  addiu       $t3, $t7, 0x1
    ctx->pc = 0x2edd58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_2edd5c:
    // 0x2edd5c: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDD5Cu;
    {
        const bool branch_taken_0x2edd5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD5Cu;
        // 0x2edd60: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd5c) {
            ctx->pc = 0x2EDD6Cu;
            goto label_2edd6c;
        }
    }
    ctx->pc = 0x2EDD64u;
    // 0x2edd64: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x2edd64u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd68: 0x25180001  addiu       $t8, $t0, 0x1
    ctx->pc = 0x2edd68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2edd6c:
    // 0x2edd6c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2EDD6Cu;
    {
        const bool branch_taken_0x2edd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD6Cu;
        // 0x2edd70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd6c) {
            ctx->pc = 0x2EDE00u;
            goto label_2ede00;
        }
    }
    ctx->pc = 0x2EDD74u;
    // 0x2edd74: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x2edd74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x2edd78: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x2edd78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
    // 0x2edd7c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x2edd7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x2edd80: 0x25a80018  addiu       $t0, $t5, 0x18
    ctx->pc = 0x2edd80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x2edd84: 0x0  nop
    ctx->pc = 0x2edd84u;
    // NOP
label_2edd88:
    // 0x2edd88: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2edd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2edd8c: 0xcc1024  and         $v0, $a2, $t4
    ctx->pc = 0x2edd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x2edd90: 0xca1824  and         $v1, $a2, $t2
    ctx->pc = 0x2edd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x2edd94: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2edd94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x2edd98: 0xcf202a  slt         $a0, $a2, $t7
    ctx->pc = 0x2edd98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x2edd9c: 0x54800014  bnel        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EDD9Cu;
    {
        const bool branch_taken_0x2edd9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edd9c) {
            ctx->pc = 0x2EDDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDD9Cu;
            // 0x2edda0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDA4u;
    // 0x2edda4: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x2edda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2edda8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EDDA8u;
    {
        const bool branch_taken_0x2edda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edda8) {
            ctx->pc = 0x2EDDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDA8u;
            // 0x2eddac: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDB0u;
    // 0x2eddb0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2eddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2eddb4: 0x6e102a  slt         $v0, $v1, $t6
    ctx->pc = 0x2eddb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x2eddb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EDDB8u;
    {
        const bool branch_taken_0x2eddb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eddb8) {
            ctx->pc = 0x2EDDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDB8u;
            // 0x2eddbc: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDC0u;
    // 0x2eddc0: 0x78102a  slt         $v0, $v1, $t8
    ctx->pc = 0x2eddc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x2eddc4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDDC4u;
    {
        const bool branch_taken_0x2eddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eddc4) {
            ctx->pc = 0x2EDDC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDC4u;
            // 0x2eddc8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDCCu;
    // 0x2eddcc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2eddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2eddd0: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDDD0u;
    {
        const bool branch_taken_0x2eddd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2EDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDD0u;
        // 0x2eddd4: 0xcc1025  or          $v0, $a2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddd0) {
            ctx->pc = 0x2EDDE4u;
            goto label_2edde4;
        }
    }
    ctx->pc = 0x2EDDD8u;
    // 0x2eddd8: 0x4e30005  bgezl       $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDDD8u;
    {
        const bool branch_taken_0x2eddd8 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x2eddd8) {
            ctx->pc = 0x2EDDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDDD8u;
            // 0x2edddc: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDDF0u;
            goto label_2eddf0;
        }
    }
    ctx->pc = 0x2EDDE0u;
    // 0x2edde0: 0xcc1025  or          $v0, $a2, $t4
    ctx->pc = 0x2edde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_2edde4:
    // 0x2edde4: 0xe50c000c  swc1        $f12, 0xC($t0)
    ctx->pc = 0x2edde4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2edde8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2edde8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2eddec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2eddf0:
    // 0x2eddf0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2eddf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2eddf4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x2eddf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2eddf8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2EDDF8u;
    {
        const bool branch_taken_0x2eddf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDF8u;
        // 0x2eddfc: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddf8) {
            ctx->pc = 0x2EDD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edd88;
        }
    }
    ctx->pc = 0x2EDE00u;
label_2ede00:
    // 0x2ede00: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2ede04: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2ede04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2ede08: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE08u;
        // 0x2ede0c: 0xada20000  sw          $v0, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDE10u;
}
