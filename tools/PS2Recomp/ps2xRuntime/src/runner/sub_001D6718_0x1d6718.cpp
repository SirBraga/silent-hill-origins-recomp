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

// Function: sub_001D6718
// Address: 0x1d6718 - 0x1d67e0
void sub_001D6718_0x1d6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6718_0x1d6718");
#endif

    switch (ctx->pc) {
        case 0x1d6738u: goto label_1d6738;
        case 0x1d6744u: goto label_1d6744;
        case 0x1d6758u: goto label_1d6758;
        case 0x1d6770u: goto label_1d6770;
        case 0x1d6788u: goto label_1d6788;
        case 0x1d67a8u: goto label_1d67a8;
        case 0x1d67ccu: goto label_1d67cc;
        default: break;
    }

    ctx->pc = 0x1d6718u;

    // 0x1d6718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d671c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d6720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d6724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d6724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d672c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d672cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d6730: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x1D6730u;
    SET_GPR_U32(ctx, 31, 0x1D6738u);
    ctx->pc = 0x1D6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6730u;
    // 0x1d6734: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x1D6730u, 0x1D6738u)) {
        return;
    }
    ctx->pc = 0x1D6738u;
label_1d6738:
    // 0x1d6738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d673c: 0xc061fca  jal         func_187F28
    ctx->pc = 0x1D673Cu;
    SET_GPR_U32(ctx, 31, 0x1D6744u);
    ctx->pc = 0x1D6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673Cu;
    // 0x1d6740: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x187F28u, 0x1D673Cu, 0x1D6744u)) {
        return;
    }
    ctx->pc = 0x1D6744u;
label_1d6744:
    // 0x1d6744: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d6748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674c: 0x8c468840  lw          $a2, -0x77C0($v0)
    ctx->pc = 0x1d674cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6F8840u));
    // 0x1d6750: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x1D6750u;
    SET_GPR_U32(ctx, 31, 0x1D6758u);
    ctx->pc = 0x1D6754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6750u;
    // 0x1d6754: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x1D6750u, 0x1D6758u)) {
        return;
    }
    ctx->pc = 0x1D6758u;
label_1d6758:
    // 0x1d6758: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d6758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d675c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6760: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6760u;
    {
        const bool branch_taken_0x1d6760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6760) {
            ctx->pc = 0x1D6764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6760u;
            // 0x1d6764: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D67BCu;
            goto label_1d67bc;
        }
    }
    ctx->pc = 0x1D6768u;
    // 0x1d6768: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1d6768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d676c: 0x0  nop
    ctx->pc = 0x1d676cu;
    // NOP
label_1d6770:
    // 0x1d6770: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1d6770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d6774: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6774u;
    {
        const bool branch_taken_0x1d6774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6774u;
        // 0x1d6778: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6774) {
            ctx->pc = 0x1D6790u;
            goto label_1d6790;
        }
    }
    ctx->pc = 0x1D677Cu;
    // 0x1d677c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d6780: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1D6780u;
    SET_GPR_U32(ctx, 31, 0x1D6788u);
    ctx->pc = 0x1D6784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6780u;
    // 0x1d6784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1D6780u, 0x1D6788u)) {
        return;
    }
    ctx->pc = 0x1D6788u;
label_1d6788:
    // 0x1d6788: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x1d6788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x1d678c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d678cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6790:
    // 0x1d6790: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d6790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6798: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d6798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d679c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d679cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d67a0: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1D67A0u;
    SET_GPR_U32(ctx, 31, 0x1D67A8u);
    ctx->pc = 0x1D67A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A0u;
    // 0x1d67a4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1D67A0u, 0x1D67A8u)) {
        return;
    }
    ctx->pc = 0x1D67A8u;
label_1d67a8:
    // 0x1d67a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d67b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D67B0u;
    {
        const bool branch_taken_0x1d67b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B0u;
        // 0x1d67b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b0) {
            ctx->pc = 0x1D6770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6770;
        }
    }
    ctx->pc = 0x1D67B8u;
    // 0x1d67b8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1d67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_1d67bc:
    // 0x1d67bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d67c4: 0xc062104  jal         func_188410
    ctx->pc = 0x1D67C4u;
    SET_GPR_U32(ctx, 31, 0x1D67CCu);
    ctx->pc = 0x1D67C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67C4u;
    // 0x1d67c8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188410u, 0x1D67C4u, 0x1D67CCu)) {
        return;
    }
    ctx->pc = 0x1D67CCu;
label_1d67cc:
    // 0x1d67cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d67ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d67d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d67d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d67d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d67d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67D8u;
        // 0x1d67dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67E0u;
}
