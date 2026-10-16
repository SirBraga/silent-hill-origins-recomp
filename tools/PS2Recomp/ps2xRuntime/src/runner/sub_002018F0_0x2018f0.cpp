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

// Function: sub_002018F0
// Address: 0x2018f0 - 0x2019d0
void sub_002018F0_0x2018f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018F0_0x2018f0");
#endif

    switch (ctx->pc) {
        case 0x201938u: goto label_201938;
        default: break;
    }

    ctx->pc = 0x2018f0u;

    // 0x2018f0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2018f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018f4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2018f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2018f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2018fc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x201900: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x201900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x201904: 0x24840170  addiu       $a0, $a0, 0x170
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x201908: 0x8d250008  lw          $a1, 0x8($t1)
    ctx->pc = 0x201908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x20190c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x201910: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x201914: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x201914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x201918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x201918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20191c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x20191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x201920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x201920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x201924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x201924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201928: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x201928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20192c: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x20192Cu;
    {
        const bool branch_taken_0x20192c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x201930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20192Cu;
        // 0x201930: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20192c) {
            ctx->pc = 0x2019C4u;
            goto label_2019c4;
        }
    }
    ctx->pc = 0x201934u;
    // 0x201934: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x201934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_201938:
    // 0x201938: 0x24850028  addiu       $a1, $a0, 0x28
    ctx->pc = 0x201938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x20193c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x20193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x201940: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201940u;
    {
        const bool branch_taken_0x201940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x201944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201940u;
        // 0x201944: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201940) {
            ctx->pc = 0x20197Cu;
            goto label_20197c;
        }
    }
    ctx->pc = 0x201948u;
    // 0x201948: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x201948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20194c: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x20194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x201950: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x201950u;
    {
        const bool branch_taken_0x201950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201950) {
            ctx->pc = 0x20197Cu;
            goto label_20197c;
        }
    }
    ctx->pc = 0x201958u;
    // 0x201958: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x201958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20195c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x20195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x201960: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201960u;
    {
        const bool branch_taken_0x201960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201960) {
            ctx->pc = 0x20197Cu;
            goto label_20197c;
        }
    }
    ctx->pc = 0x201968u;
    // 0x201968: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x201968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20196c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x20196cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201970: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x201974: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x201974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x201978: 0x3400b  movn        $t0, $zero, $v1
    ctx->pc = 0x201978u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
label_20197c:
    // 0x20197c: 0x5100000f  beql        $t0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20197Cu;
    {
        const bool branch_taken_0x20197c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x20197c) {
            ctx->pc = 0x201980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20197Cu;
            // 0x201980: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2019BCu;
            goto label_2019bc;
        }
    }
    ctx->pc = 0x201984u;
    // 0x201984: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x201984u;
    {
        const bool branch_taken_0x201984 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x201984) {
            ctx->pc = 0x201994u;
            goto label_201994;
        }
    }
    ctx->pc = 0x20198Cu;
    // 0x20198c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x20198cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x201990: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x201990u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_201994:
    // 0x201994: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x201994u;
    {
        const bool branch_taken_0x201994 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x201994) {
            ctx->pc = 0x2019A4u;
            goto label_2019a4;
        }
    }
    ctx->pc = 0x20199Cu;
    // 0x20199c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x20199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2019a0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2019a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2019a4:
    // 0x2019a4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2019A4u;
    {
        const bool branch_taken_0x2019a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2019a4) {
            ctx->pc = 0x2019B4u;
            goto label_2019b4;
        }
    }
    ctx->pc = 0x2019ACu;
    // 0x2019ac: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2019acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2019b0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2019b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2019b4:
    // 0x2019b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2019B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019B4u;
        // 0x2019b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019BCu;
label_2019bc:
    // 0x2019bc: 0x5480ffde  bnel        $a0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2019BCu;
    {
        const bool branch_taken_0x2019bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2019bc) {
            ctx->pc = 0x2019C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2019BCu;
            // 0x2019c0: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201938;
        }
    }
    ctx->pc = 0x2019C4u;
label_2019c4:
    // 0x2019c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2019C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019C4u;
        // 0x2019c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019CCu;
    // 0x2019cc: 0x0  nop
    ctx->pc = 0x2019ccu;
    // NOP
    ctx->pc = 0x2019d0u;
}
