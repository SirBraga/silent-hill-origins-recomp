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

// Function: sub_00255728
// Address: 0x255728 - 0x2557e0
void sub_00255728_0x255728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255728_0x255728");
#endif

    switch (ctx->pc) {
        case 0x255728u: goto label_255728;
        case 0x25572cu: goto label_25572c;
        case 0x255730u: goto label_255730;
        case 0x255734u: goto label_255734;
        case 0x255738u: goto label_255738;
        case 0x25573cu: goto label_25573c;
        case 0x255740u: goto label_255740;
        case 0x255744u: goto label_255744;
        case 0x255748u: goto label_255748;
        case 0x25574cu: goto label_25574c;
        case 0x255750u: goto label_255750;
        case 0x255754u: goto label_255754;
        case 0x255758u: goto label_255758;
        case 0x25575cu: goto label_25575c;
        case 0x255760u: goto label_255760;
        case 0x255764u: goto label_255764;
        case 0x255768u: goto label_255768;
        case 0x25576cu: goto label_25576c;
        case 0x255770u: goto label_255770;
        case 0x255774u: goto label_255774;
        case 0x255778u: goto label_255778;
        case 0x25577cu: goto label_25577c;
        case 0x255780u: goto label_255780;
        case 0x255784u: goto label_255784;
        case 0x255788u: goto label_255788;
        case 0x25578cu: goto label_25578c;
        case 0x255790u: goto label_255790;
        case 0x255794u: goto label_255794;
        case 0x255798u: goto label_255798;
        case 0x25579cu: goto label_25579c;
        case 0x2557a0u: goto label_2557a0;
        case 0x2557a4u: goto label_2557a4;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557acu: goto label_2557ac;
        case 0x2557b0u: goto label_2557b0;
        case 0x2557b4u: goto label_2557b4;
        case 0x2557b8u: goto label_2557b8;
        case 0x2557bcu: goto label_2557bc;
        case 0x2557c0u: goto label_2557c0;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557c8u: goto label_2557c8;
        case 0x2557ccu: goto label_2557cc;
        case 0x2557d0u: goto label_2557d0;
        case 0x2557d4u: goto label_2557d4;
        case 0x2557d8u: goto label_2557d8;
        case 0x2557dcu: goto label_2557dc;
        default: break;
    }

    ctx->pc = 0x255728u;

label_255728:
    // 0x255728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25572c:
    // 0x25572c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_255730:
    // 0x255730: 0x8c633fa8  lw          $v1, 0x3FA8($v1)
    ctx->pc = 0x255730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16296)));
label_255734:
    // 0x255734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x255734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_255738:
    // 0x255738: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x255738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_25573c:
    // 0x25573c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_255740:
    // 0x255740: 0x24840fc8  addiu       $a0, $a0, 0xFC8
    ctx->pc = 0x255740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_255744:
    // 0x255744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x255744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_255748:
    // 0x255748: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x255748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25574c:
    // 0x25574c: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x25574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_255750:
    // 0x255750: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x255750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
label_255754:
    // 0x255754: 0x40f809  jalr        $v0
label_255758:
    if (ctx->pc == 0x255758u) {
        ctx->pc = 0x255758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255754u;
        // 0x255758: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25575Cu;
        goto label_25575c;
    }
    ctx->pc = 0x255754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25575Cu);
        ctx->pc = 0x255758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255754u;
        // 0x255758: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255754u, 0x25575Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25575Cu;
label_25575c:
    // 0x25575c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_255760:
    // 0x255760: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_255764:
    if (ctx->pc == 0x255764u) {
        ctx->pc = 0x255764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255760u;
        // 0x255764: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255768u;
        goto label_255768;
    }
    ctx->pc = 0x255760u;
    {
        const bool branch_taken_0x255760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x255764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255760u;
        // 0x255764: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255760) {
            ctx->pc = 0x2557CCu;
            goto label_2557cc;
        }
    }
    ctx->pc = 0x255768u;
label_255768:
    // 0x255768: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x255768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_25576c:
    // 0x25576c: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x25576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_255770:
    // 0x255770: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_255774:
    // 0x255774: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x255774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_255778:
    // 0x255778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25577c:
    // 0x25577c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x25577cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_255780:
    // 0x255780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x255780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_255784:
    // 0x255784: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x255784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_255788:
    // 0x255788: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x255788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_25578c:
    // 0x25578c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x25578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_255790:
    // 0x255790: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x255790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_255794:
    // 0x255794: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x255794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_255798:
    // 0x255798: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x255798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_25579c:
    // 0x25579c: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x25579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_2557a0:
    // 0x2557a0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2557a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2557a4:
    // 0x2557a4: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2557a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2557a8:
    // 0x2557a8: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x2557a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_2557ac:
    // 0x2557ac: 0xc0955c2  jal         func_255708
label_2557b0:
    if (ctx->pc == 0x2557B0u) {
        ctx->pc = 0x2557B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557ACu;
        // 0x2557b0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557B4u;
        goto label_2557b4;
    }
    ctx->pc = 0x2557ACu;
    SET_GPR_U32(ctx, 31, 0x2557B4u);
    ctx->pc = 0x2557B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557ACu;
    // 0x2557b0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255708u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255708u, 0x2557ACu, 0x2557B4u)) {
        return;
    }
    ctx->pc = 0x2557B4u;
label_2557b4:
    // 0x2557b4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2557b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_2557b8:
    // 0x2557b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2557b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2557bc:
    // 0x2557bc: 0xc093958  jal         func_24E560
label_2557c0:
    if (ctx->pc == 0x2557C0u) {
        ctx->pc = 0x2557C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557BCu;
        // 0x2557c0: 0x248411f8  addiu       $a0, $a0, 0x11F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557C4u;
        goto label_2557c4;
    }
    ctx->pc = 0x2557BCu;
    SET_GPR_U32(ctx, 31, 0x2557C4u);
    ctx->pc = 0x2557C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557BCu;
    // 0x2557c0: 0x248411f8  addiu       $a0, $a0, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x2557BCu, 0x2557C4u)) {
        return;
    }
    ctx->pc = 0x2557C4u;
label_2557c4:
    // 0x2557c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2557c8:
    if (ctx->pc == 0x2557C8u) {
        ctx->pc = 0x2557C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557C4u;
        // 0x2557c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557CCu;
        goto label_2557cc;
    }
    ctx->pc = 0x2557C4u;
    {
        const bool branch_taken_0x2557c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2557C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557C4u;
        // 0x2557c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557c4) {
            ctx->pc = 0x2557D0u;
            goto label_2557d0;
        }
    }
    ctx->pc = 0x2557CCu;
label_2557cc:
    // 0x2557cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2557ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2557d0:
    // 0x2557d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2557d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2557d4:
    // 0x2557d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2557d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2557d8:
    // 0x2557d8: 0x3e00008  jr          $ra
label_2557dc:
    if (ctx->pc == 0x2557DCu) {
        ctx->pc = 0x2557DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D8u;
        // 0x2557dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2557E0u;
        goto label_fallthrough_0x2557d8;
    }
    ctx->pc = 0x2557D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2557DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557D8u;
        // 0x2557dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2557D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2557d8:
    ctx->pc = 0x2557E0u;
}
