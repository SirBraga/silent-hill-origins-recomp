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

// Function: sub_001590D0
// Address: 0x1590d0 - 0x159238
void sub_001590D0_0x1590d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001590D0_0x1590d0");
#endif

    switch (ctx->pc) {
        case 0x1590ecu: goto label_1590ec;
        case 0x159124u: goto label_159124;
        case 0x15913cu: goto label_15913c;
        case 0x15914cu: goto label_15914c;
        case 0x1591fcu: goto label_1591fc;
        case 0x159210u: goto label_159210;
        case 0x159218u: goto label_159218;
        default: break;
    }

    ctx->pc = 0x1590d0u;

    // 0x1590d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1590d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1590d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1590d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1590d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1590d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1590dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1590dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1590e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1590e4: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x1590E4u;
    SET_GPR_U32(ctx, 31, 0x1590ECu);
    ctx->pc = 0x1590E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590E4u;
    // 0x1590e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x1590E4u, 0x1590ECu)) {
        return;
    }
    ctx->pc = 0x1590ECu;
label_1590ec:
    // 0x1590ec: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1590f0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1590f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1590f4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1590f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1590f8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x1590f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x1590fc: 0x24632e40  addiu       $v1, $v1, 0x2E40
    ctx->pc = 0x1590fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11840));
    // 0x159100: 0x24a52ce0  addiu       $a1, $a1, 0x2CE0
    ctx->pc = 0x159100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11488));
    // 0x159104: 0x24c62e60  addiu       $a2, $a2, 0x2E60
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11872));
    // 0x159108: 0x24422d20  addiu       $v0, $v0, 0x2D20
    ctx->pc = 0x159108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11552));
    // 0x15910c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x15910cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x159110: 0x262400d8  addiu       $a0, $s1, 0xD8
    ctx->pc = 0x159110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x159114: 0xae250084  sw          $a1, 0x84($s1)
    ctx->pc = 0x159114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 5));
    // 0x159118: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x159118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x15911c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15911Cu;
    SET_GPR_U32(ctx, 31, 0x159124u);
    ctx->pc = 0x159120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15911Cu;
    // 0x159120: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15911Cu, 0x159124u)) {
        return;
    }
    ctx->pc = 0x159124u;
label_159124:
    // 0x159124: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x159124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x159128: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x159128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15912c: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x159130: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x159134: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x159134u;
    SET_GPR_U32(ctx, 31, 0x15913Cu);
    ctx->pc = 0x159138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159134u;
    // 0x159138: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x159134u, 0x15913Cu)) {
        return;
    }
    ctx->pc = 0x15913Cu;
label_15913c:
    // 0x15913c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x15913cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x159140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159144: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x159144u;
    SET_GPR_U32(ctx, 31, 0x15914Cu);
    ctx->pc = 0x159148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159144u;
    // 0x159148: 0x24a52c60  addiu       $a1, $a1, 0x2C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x159144u, 0x15914Cu)) {
        return;
    }
    ctx->pc = 0x15914Cu;
label_15914c:
    // 0x15914c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15914cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159150: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x159150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x159154: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x159154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x159158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x159158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15915c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159160: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x159160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
    // 0x159164: 0xe6200368  swc1        $f0, 0x368($s1)
    ctx->pc = 0x159164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 872), bits); }
    // 0x159168: 0xae22026c  sw          $v0, 0x26C($s1)
    ctx->pc = 0x159168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
    // 0x15916c: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x15916cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
    // 0x159170: 0xae200394  sw          $zero, 0x394($s1)
    ctx->pc = 0x159170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 916), GPR_U32(ctx, 0));
    // 0x159174: 0xae200398  sw          $zero, 0x398($s1)
    ctx->pc = 0x159174u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 0));
    // 0x159178: 0xae20039c  sw          $zero, 0x39C($s1)
    ctx->pc = 0x159178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 924), GPR_U32(ctx, 0));
    // 0x15917c: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x15917cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x159180: 0xae2002a0  sw          $zero, 0x2A0($s1)
    ctx->pc = 0x159180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 0));
    // 0x159184: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x159184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x159188: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x159188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x15918c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x159190: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x159190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159194: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x159194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x159198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15919c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x15919cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1591a0: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x1591a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1591a4: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x1591a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1591a8: 0xe6210220  swc1        $f1, 0x220($s1)
    ctx->pc = 0x1591a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x1591ac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1591acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1591b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1591b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1591b4: 0xe6200224  swc1        $f0, 0x224($s1)
    ctx->pc = 0x1591b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x1591b8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1591b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1591bc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1591bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1591c0: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x1591c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    // 0x1591c4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1591c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1591c8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1591c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1591cc: 0xe6200250  swc1        $f0, 0x250($s1)
    ctx->pc = 0x1591ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 592), bits); }
    // 0x1591d0: 0x8e22022c  lw          $v0, 0x22C($s1)
    ctx->pc = 0x1591d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x1591d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1591d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1591d8: 0xae22022c  sw          $v0, 0x22C($s1)
    ctx->pc = 0x1591d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 2));
    // 0x1591dc: 0xe62002d0  swc1        $f0, 0x2D0($s1)
    ctx->pc = 0x1591dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    // 0x1591e0: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x1591e4: 0xe62002d8  swc1        $f0, 0x2D8($s1)
    ctx->pc = 0x1591e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x1591e8: 0x24a5a468  addiu       $a1, $a1, -0x5B98
    ctx->pc = 0x1591e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943848));
    // 0x1591ec: 0xe62002d4  swc1        $f0, 0x2D4($s1)
    ctx->pc = 0x1591ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 724), bits); }
    // 0x1591f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1591f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591f4: 0xc09545a  jal         func_255168
    ctx->pc = 0x1591F4u;
    SET_GPR_U32(ctx, 31, 0x1591FCu);
    ctx->pc = 0x1591F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1591F4u;
    // 0x1591f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1591F4u, 0x1591FCu)) {
        return;
    }
    ctx->pc = 0x1591FCu;
label_1591fc:
    // 0x1591fc: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x1591fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x159200: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159200u;
    {
        const bool branch_taken_0x159200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159200) {
            ctx->pc = 0x159210u;
            goto label_159210;
        }
    }
    ctx->pc = 0x159208u;
    // 0x159208: 0xc05648e  jal         func_159238
    ctx->pc = 0x159208u;
    SET_GPR_U32(ctx, 31, 0x159210u);
    ctx->pc = 0x15920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159208u;
    // 0x15920c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x159238u, 0x159208u, 0x159210u)) {
        return;
    }
    ctx->pc = 0x159210u;
label_159210:
    // 0x159210: 0xc0778da  jal         func_1DE368
    ctx->pc = 0x159210u;
    SET_GPR_U32(ctx, 31, 0x159218u);
    ctx->pc = 0x159214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159210u;
    // 0x159214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DE368u, 0x159210u, 0x159218u)) {
        return;
    }
    ctx->pc = 0x159218u;
label_159218:
    // 0x159218: 0xae22027c  sw          $v0, 0x27C($s1)
    ctx->pc = 0x159218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
    // 0x15921c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15921cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159220: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x159220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15922c: 0x3e00008  jr          $ra
    ctx->pc = 0x15922Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15922Cu;
        // 0x159230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15922Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159234u;
    // 0x159234: 0x0  nop
    ctx->pc = 0x159234u;
    // NOP
    ctx->pc = 0x159238u;
}
