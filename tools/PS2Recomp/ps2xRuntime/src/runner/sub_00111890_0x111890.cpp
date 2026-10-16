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

// Function: sub_00111890
// Address: 0x111890 - 0x111978
void sub_00111890_0x111890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111890_0x111890");
#endif

    switch (ctx->pc) {
        case 0x1118acu: goto label_1118ac;
        case 0x1118e4u: goto label_1118e4;
        case 0x1118ecu: goto label_1118ec;
        case 0x1118f4u: goto label_1118f4;
        case 0x111938u: goto label_111938;
        case 0x111948u: goto label_111948;
        case 0x11195cu: goto label_11195c;
        default: break;
    }

    ctx->pc = 0x111890u;

    // 0x111890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x111894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11189c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1118a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1118a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1118a4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x1118A4u;
    SET_GPR_U32(ctx, 31, 0x1118ACu);
    ctx->pc = 0x1118A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118A4u;
    // 0x1118a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x1118A4u, 0x1118ACu)) {
        return;
    }
    ctx->pc = 0x1118ACu;
label_1118ac:
    // 0x1118ac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1118acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1118b0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1118b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1118b4: 0x2463a7f8  addiu       $v1, $v1, -0x5808
    ctx->pc = 0x1118b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944760));
    // 0x1118b8: 0x2442a818  addiu       $v0, $v0, -0x57E8
    ctx->pc = 0x1118b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944792));
    // 0x1118bc: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1118bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1118c0: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x1118c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1118c4: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1118c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1118c8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1118c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1118cc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1118ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1118d0: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1118d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1118d4: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1118d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1118d8: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x1118d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x1118dc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1118DCu;
    SET_GPR_U32(ctx, 31, 0x1118E4u);
    ctx->pc = 0x1118E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118DCu;
    // 0x1118e0: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1118DCu, 0x1118E4u)) {
        return;
    }
    ctx->pc = 0x1118E4u;
label_1118e4:
    // 0x1118e4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1118E4u;
    SET_GPR_U32(ctx, 31, 0x1118ECu);
    ctx->pc = 0x1118E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118E4u;
    // 0x1118e8: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1118E4u, 0x1118ECu)) {
        return;
    }
    ctx->pc = 0x1118ECu;
label_1118ec:
    // 0x1118ec: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1118ECu;
    SET_GPR_U32(ctx, 31, 0x1118F4u);
    ctx->pc = 0x1118F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1118ECu;
    // 0x1118f0: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1118ECu, 0x1118F4u)) {
        return;
    }
    ctx->pc = 0x1118F4u;
label_1118f4:
    // 0x1118f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1118f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1118f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1118f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1118fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111900: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x111904: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11190c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x11190cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x111910: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x111910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
    // 0x111914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111918: 0xe6210080  swc1        $f1, 0x80($s1)
    ctx->pc = 0x111918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    // 0x11191c: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x11191cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
    // 0x111920: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x111920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x111924: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x111924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x111928: 0x8c82830c  lw          $v0, -0x7CF4($a0)
    ctx->pc = 0x111928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33830Cu));
    // 0x11192c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11192cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111930: 0xc044ed2  jal         func_113B48
    ctx->pc = 0x111930u;
    SET_GPR_U32(ctx, 31, 0x111938u);
    ctx->pc = 0x111934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111930u;
    // 0x111934: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113B48u, 0x111930u, 0x111938u)) {
        return;
    }
    ctx->pc = 0x111938u;
label_111938:
    // 0x111938: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x111938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x11193c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111940: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x111940u;
    SET_GPR_U32(ctx, 31, 0x111948u);
    ctx->pc = 0x111944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111940u;
    // 0x111944: 0x24a5a7a0  addiu       $a1, $a1, -0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x111940u, 0x111948u)) {
        return;
    }
    ctx->pc = 0x111948u;
label_111948:
    // 0x111948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111948u;
    {
        const bool branch_taken_0x111948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111948u;
        // 0x11194c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111948) {
            ctx->pc = 0x111960u;
            goto label_111960;
        }
    }
    ctx->pc = 0x111950u;
    // 0x111950: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x111950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x111954: 0xc041e86  jal         func_107A18
    ctx->pc = 0x111954u;
    SET_GPR_U32(ctx, 31, 0x11195Cu);
    ctx->pc = 0x111958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111954u;
    // 0x111958: 0x2484a7b0  addiu       $a0, $a0, -0x5850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x111954u, 0x11195Cu)) {
        return;
    }
    ctx->pc = 0x11195Cu;
label_11195c:
    // 0x11195c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x11195cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111960:
    // 0x111960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x111960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x111964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11196c: 0x3e00008  jr          $ra
    ctx->pc = 0x11196Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11196Cu;
        // 0x111970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11196Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111974u;
    // 0x111974: 0x0  nop
    ctx->pc = 0x111974u;
    // NOP
    ctx->pc = 0x111978u;
}
