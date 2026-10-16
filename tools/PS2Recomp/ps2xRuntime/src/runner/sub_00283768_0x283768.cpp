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

// Function: sub_00283768
// Address: 0x283768 - 0x283940
void sub_00283768_0x283768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283768_0x283768");
#endif

    switch (ctx->pc) {
        case 0x283768u: goto label_283768;
        case 0x28376cu: goto label_28376c;
        case 0x283770u: goto label_283770;
        case 0x283774u: goto label_283774;
        case 0x283778u: goto label_283778;
        case 0x28377cu: goto label_28377c;
        case 0x283780u: goto label_283780;
        case 0x283784u: goto label_283784;
        case 0x283788u: goto label_283788;
        case 0x28378cu: goto label_28378c;
        case 0x283790u: goto label_283790;
        case 0x283794u: goto label_283794;
        case 0x283798u: goto label_283798;
        case 0x28379cu: goto label_28379c;
        case 0x2837a0u: goto label_2837a0;
        case 0x2837a4u: goto label_2837a4;
        case 0x2837a8u: goto label_2837a8;
        case 0x2837acu: goto label_2837ac;
        case 0x2837b0u: goto label_2837b0;
        case 0x2837b4u: goto label_2837b4;
        case 0x2837b8u: goto label_2837b8;
        case 0x2837bcu: goto label_2837bc;
        case 0x2837c0u: goto label_2837c0;
        case 0x2837c4u: goto label_2837c4;
        case 0x2837c8u: goto label_2837c8;
        case 0x2837ccu: goto label_2837cc;
        case 0x2837d0u: goto label_2837d0;
        case 0x2837d4u: goto label_2837d4;
        case 0x2837d8u: goto label_2837d8;
        case 0x2837dcu: goto label_2837dc;
        case 0x2837e0u: goto label_2837e0;
        case 0x2837e4u: goto label_2837e4;
        case 0x2837e8u: goto label_2837e8;
        case 0x2837ecu: goto label_2837ec;
        case 0x2837f0u: goto label_2837f0;
        case 0x2837f4u: goto label_2837f4;
        case 0x2837f8u: goto label_2837f8;
        case 0x2837fcu: goto label_2837fc;
        case 0x283800u: goto label_283800;
        case 0x283804u: goto label_283804;
        case 0x283808u: goto label_283808;
        case 0x28380cu: goto label_28380c;
        case 0x283810u: goto label_283810;
        case 0x283814u: goto label_283814;
        case 0x283818u: goto label_283818;
        case 0x28381cu: goto label_28381c;
        case 0x283820u: goto label_283820;
        case 0x283824u: goto label_283824;
        case 0x283828u: goto label_283828;
        case 0x28382cu: goto label_28382c;
        case 0x283830u: goto label_283830;
        case 0x283834u: goto label_283834;
        case 0x283838u: goto label_283838;
        case 0x28383cu: goto label_28383c;
        case 0x283840u: goto label_283840;
        case 0x283844u: goto label_283844;
        case 0x283848u: goto label_283848;
        case 0x28384cu: goto label_28384c;
        case 0x283850u: goto label_283850;
        case 0x283854u: goto label_283854;
        case 0x283858u: goto label_283858;
        case 0x28385cu: goto label_28385c;
        case 0x283860u: goto label_283860;
        case 0x283864u: goto label_283864;
        case 0x283868u: goto label_283868;
        case 0x28386cu: goto label_28386c;
        case 0x283870u: goto label_283870;
        case 0x283874u: goto label_283874;
        case 0x283878u: goto label_283878;
        case 0x28387cu: goto label_28387c;
        case 0x283880u: goto label_283880;
        case 0x283884u: goto label_283884;
        case 0x283888u: goto label_283888;
        case 0x28388cu: goto label_28388c;
        case 0x283890u: goto label_283890;
        case 0x283894u: goto label_283894;
        case 0x283898u: goto label_283898;
        case 0x28389cu: goto label_28389c;
        case 0x2838a0u: goto label_2838a0;
        case 0x2838a4u: goto label_2838a4;
        case 0x2838a8u: goto label_2838a8;
        case 0x2838acu: goto label_2838ac;
        case 0x2838b0u: goto label_2838b0;
        case 0x2838b4u: goto label_2838b4;
        case 0x2838b8u: goto label_2838b8;
        case 0x2838bcu: goto label_2838bc;
        case 0x2838c0u: goto label_2838c0;
        case 0x2838c4u: goto label_2838c4;
        case 0x2838c8u: goto label_2838c8;
        case 0x2838ccu: goto label_2838cc;
        case 0x2838d0u: goto label_2838d0;
        case 0x2838d4u: goto label_2838d4;
        case 0x2838d8u: goto label_2838d8;
        case 0x2838dcu: goto label_2838dc;
        case 0x2838e0u: goto label_2838e0;
        case 0x2838e4u: goto label_2838e4;
        case 0x2838e8u: goto label_2838e8;
        case 0x2838ecu: goto label_2838ec;
        case 0x2838f0u: goto label_2838f0;
        case 0x2838f4u: goto label_2838f4;
        case 0x2838f8u: goto label_2838f8;
        case 0x2838fcu: goto label_2838fc;
        case 0x283900u: goto label_283900;
        case 0x283904u: goto label_283904;
        case 0x283908u: goto label_283908;
        case 0x28390cu: goto label_28390c;
        case 0x283910u: goto label_283910;
        case 0x283914u: goto label_283914;
        case 0x283918u: goto label_283918;
        case 0x28391cu: goto label_28391c;
        case 0x283920u: goto label_283920;
        case 0x283924u: goto label_283924;
        case 0x283928u: goto label_283928;
        case 0x28392cu: goto label_28392c;
        case 0x283930u: goto label_283930;
        case 0x283934u: goto label_283934;
        case 0x283938u: goto label_283938;
        case 0x28393cu: goto label_28393c;
        default: break;
    }

    ctx->pc = 0x283768u;

label_283768:
    // 0x283768: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x283768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_28376c:
    // 0x28376c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x28376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_283770:
    // 0x283770: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x283770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_283774:
    // 0x283774: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x283774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_283778:
    // 0x283778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28377c:
    // 0x28377c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28377cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_283780:
    // 0x283780: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x283780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_283784:
    // 0x283784: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x283784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_283788:
    // 0x283788: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x283788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28378c:
    // 0x28378c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_283790:
    // 0x283790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x283790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_283794:
    // 0x283794: 0xc09270a  jal         func_249C28
label_283798:
    if (ctx->pc == 0x283798u) {
        ctx->pc = 0x283798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283794u;
        // 0x283798: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28379Cu;
        goto label_28379c;
    }
    ctx->pc = 0x283794u;
    SET_GPR_U32(ctx, 31, 0x28379Cu);
    ctx->pc = 0x283798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283794u;
    // 0x283798: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x283794u, 0x28379Cu)) {
        return;
    }
    ctx->pc = 0x28379Cu;
label_28379c:
    // 0x28379c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_2837a0:
    if (ctx->pc == 0x2837A0u) {
        ctx->pc = 0x2837A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28379Cu;
        // 0x2837a0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837A4u;
        goto label_2837a4;
    }
    ctx->pc = 0x28379Cu;
    {
        const bool branch_taken_0x28379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28379Cu;
        // 0x2837a0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28379c) {
            ctx->pc = 0x28391Cu;
            goto label_28391c;
        }
    }
    ctx->pc = 0x2837A4u;
label_2837a4:
    // 0x2837a4: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2837a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_2837a8:
    // 0x2837a8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2837a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_2837ac:
    // 0x2837ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2837acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2837b0:
    // 0x2837b0: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x2837b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_2837b4:
    // 0x2837b4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2837b8:
    if (ctx->pc == 0x2837B8u) {
        ctx->pc = 0x2837B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837B4u;
        // 0x2837b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837BCu;
        goto label_2837bc;
    }
    ctx->pc = 0x2837B4u;
    {
        const bool branch_taken_0x2837b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2837B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837B4u;
        // 0x2837b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837b4) {
            ctx->pc = 0x2837E8u;
            goto label_2837e8;
        }
    }
    ctx->pc = 0x2837BCu;
label_2837bc:
    // 0x2837bc: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x2837bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
label_2837c0:
    // 0x2837c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2837c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2837c4:
    // 0x2837c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2837c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2837c8:
    // 0x2837c8: 0xc092848  jal         func_24A120
label_2837cc:
    if (ctx->pc == 0x2837CCu) {
        ctx->pc = 0x2837CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837C8u;
        // 0x2837cc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837D0u;
        goto label_2837d0;
    }
    ctx->pc = 0x2837C8u;
    SET_GPR_U32(ctx, 31, 0x2837D0u);
    ctx->pc = 0x2837CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837C8u;
    // 0x2837cc: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2837C8u, 0x2837D0u)) {
        return;
    }
    ctx->pc = 0x2837D0u;
label_2837d0:
    // 0x2837d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2837d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2837d4:
    // 0x2837d4: 0xc09281a  jal         func_24A068
label_2837d8:
    if (ctx->pc == 0x2837D8u) {
        ctx->pc = 0x2837D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837D4u;
        // 0x2837d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837DCu;
        goto label_2837dc;
    }
    ctx->pc = 0x2837D4u;
    SET_GPR_U32(ctx, 31, 0x2837DCu);
    ctx->pc = 0x2837D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837D4u;
    // 0x2837d8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2837D4u, 0x2837DCu)) {
        return;
    }
    ctx->pc = 0x2837DCu;
label_2837dc:
    // 0x2837dc: 0x10000050  b           . + 4 + (0x50 << 2)
label_2837e0:
    if (ctx->pc == 0x2837E0u) {
        ctx->pc = 0x2837E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837DCu;
        // 0x2837e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837E4u;
        goto label_2837e4;
    }
    ctx->pc = 0x2837DCu;
    {
        const bool branch_taken_0x2837dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837DCu;
        // 0x2837e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837dc) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x2837E4u;
label_2837e4:
    // 0x2837e4: 0x0  nop
    ctx->pc = 0x2837e4u;
    // NOP
label_2837e8:
    // 0x2837e8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2837e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2837ec:
    // 0x2837ec: 0xc0927be  jal         func_249EF8
label_2837f0:
    if (ctx->pc == 0x2837F0u) {
        ctx->pc = 0x2837F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837ECu;
        // 0x2837f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837F4u;
        goto label_2837f4;
    }
    ctx->pc = 0x2837ECu;
    SET_GPR_U32(ctx, 31, 0x2837F4u);
    ctx->pc = 0x2837F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2837ECu;
    // 0x2837f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2837ECu, 0x2837F4u)) {
        return;
    }
    ctx->pc = 0x2837F4u;
label_2837f4:
    // 0x2837f4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2837f8:
    if (ctx->pc == 0x2837F8u) {
        ctx->pc = 0x2837F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837F4u;
        // 0x2837f8: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2837FCu;
        goto label_2837fc;
    }
    ctx->pc = 0x2837F4u;
    {
        const bool branch_taken_0x2837f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837F4u;
        // 0x2837f8: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837f4) {
            ctx->pc = 0x28391Cu;
            goto label_28391c;
        }
    }
    ctx->pc = 0x2837FCu;
label_2837fc:
    // 0x2837fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2837fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_283800:
    // 0x283800: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
label_283804:
    if (ctx->pc == 0x283804u) {
        ctx->pc = 0x283804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283800u;
        // 0x283804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283808u;
        goto label_283808;
    }
    ctx->pc = 0x283800u;
    {
        const bool branch_taken_0x283800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x283804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283800u;
        // 0x283804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283800) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x283808u;
label_283808:
    // 0x283808: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x283808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28380c:
    // 0x28380c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x28380cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_283810:
    // 0x283810: 0x24500fc8  addiu       $s0, $v0, 0xFC8
    ctx->pc = 0x283810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_283814:
    // 0x283814: 0x8c64e6f8  lw          $a0, -0x1908($v1)
    ctx->pc = 0x283814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960888)));
label_283818:
    // 0x283818: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x283818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_28381c:
    // 0x28381c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28381cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_283820:
    // 0x283820: 0x40f809  jalr        $v0
label_283824:
    if (ctx->pc == 0x283824u) {
        ctx->pc = 0x283824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283820u;
        // 0x283824: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = 0x283828u;
        goto label_283828;
    }
    ctx->pc = 0x283820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283828u);
        ctx->pc = 0x283824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283820u;
        // 0x283824: 0x34a50116  ori         $a1, $a1, 0x116 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283820u, 0x283828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283828u;
label_283828:
    // 0x283828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x283828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28382c:
    // 0x28382c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28382cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283830:
    // 0x283830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x283830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_283834:
    // 0x283834: 0xc0c493d  jal         func_3124F4
label_283838:
    if (ctx->pc == 0x283838u) {
        ctx->pc = 0x283838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283834u;
        // 0x283838: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28383Cu;
        goto label_28383c;
    }
    ctx->pc = 0x283834u;
    SET_GPR_U32(ctx, 31, 0x28383Cu);
    ctx->pc = 0x283838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283834u;
    // 0x283838: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x283834u, 0x28383Cu)) {
        return;
    }
    ctx->pc = 0x28383Cu;
label_28383c:
    // 0x28383c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_283840:
    // 0x283840: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_283844:
    // 0x283844: 0xc0927be  jal         func_249EF8
label_283848:
    if (ctx->pc == 0x283848u) {
        ctx->pc = 0x283848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283844u;
        // 0x283848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28384Cu;
        goto label_28384c;
    }
    ctx->pc = 0x283844u;
    SET_GPR_U32(ctx, 31, 0x28384Cu);
    ctx->pc = 0x283848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283844u;
    // 0x283848: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x283844u, 0x28384Cu)) {
        return;
    }
    ctx->pc = 0x28384Cu;
label_28384c:
    // 0x28384c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_283850:
    if (ctx->pc == 0x283850u) {
        ctx->pc = 0x283850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28384Cu;
        // 0x283850: 0x93a3001c  lbu         $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283854u;
        goto label_283854;
    }
    ctx->pc = 0x28384Cu;
    {
        const bool branch_taken_0x28384c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28384Cu;
        // 0x283850: 0x93a3001c  lbu         $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28384c) {
            ctx->pc = 0x28391Cu;
            goto label_28391c;
        }
    }
    ctx->pc = 0x283854u;
label_283854:
    // 0x283854: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x283854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_283858:
    // 0x283858: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x283858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_28385c:
    // 0x28385c: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x28385cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_283860:
    // 0x283860: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x283860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_283864:
    // 0x283864: 0x39980  sll         $s3, $v1, 6
    ctx->pc = 0x283864u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_283868:
    // 0x283868: 0x93b0001d  lbu         $s0, 0x1D($sp)
    ctx->pc = 0x283868u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 29)));
label_28386c:
    // 0x28386c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x28386cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_283870:
    // 0x283870: 0x2703021  addu        $a2, $s3, $s0
    ctx->pc = 0x283870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_283874:
    // 0x283874: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x283874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_283878:
    // 0x283878: 0x93a3001e  lbu         $v1, 0x1E($sp)
    ctx->pc = 0x283878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 30)));
label_28387c:
    // 0x28387c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x28387cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_283880:
    // 0x283880: 0x40f809  jalr        $v0
label_283884:
    if (ctx->pc == 0x283884u) {
        ctx->pc = 0x283884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283880u;
        // 0x283884: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283888u;
        goto label_283888;
    }
    ctx->pc = 0x283880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283888u);
        ctx->pc = 0x283884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283880u;
        // 0x283884: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283880u, 0x283888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283888u;
label_283888:
    // 0x283888: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x283888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_28388c:
    // 0x28388c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x28388cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_283890:
    // 0x283890: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x283890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_283894:
    // 0x283894: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x283894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_283898:
    // 0x283898: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x283898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_28389c:
    // 0x28389c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x28389cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_2838a0:
    // 0x2838a0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2838a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2838a4:
    // 0x2838a4: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x2838a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_2838a8:
    // 0x2838a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2838a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2838ac:
    // 0x2838ac: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x2838acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_2838b0:
    // 0x2838b0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2838b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2838b4:
    // 0x2838b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2838b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2838b8:
    // 0x2838b8: 0xc093546  jal         func_24D518
label_2838bc:
    if (ctx->pc == 0x2838BCu) {
        ctx->pc = 0x2838BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838B8u;
        // 0x2838bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838C0u;
        goto label_2838c0;
    }
    ctx->pc = 0x2838B8u;
    SET_GPR_U32(ctx, 31, 0x2838C0u);
    ctx->pc = 0x2838BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838B8u;
    // 0x2838bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2838B8u, 0x2838C0u)) {
        return;
    }
    ctx->pc = 0x2838C0u;
label_2838c0:
    // 0x2838c0: 0x14500017  bne         $v0, $s0, . + 4 + (0x17 << 2)
label_2838c4:
    if (ctx->pc == 0x2838C4u) {
        ctx->pc = 0x2838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838C0u;
        // 0x2838c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838C8u;
        goto label_2838c8;
    }
    ctx->pc = 0x2838C0u;
    {
        const bool branch_taken_0x2838c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838C0u;
        // 0x2838c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838c0) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x2838C8u;
label_2838c8:
    // 0x2838c8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2838c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2838cc:
    // 0x2838cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2838ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2838d0:
    // 0x2838d0: 0xc093546  jal         func_24D518
label_2838d4:
    if (ctx->pc == 0x2838D4u) {
        ctx->pc = 0x2838D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D0u;
        // 0x2838d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838D8u;
        goto label_2838d8;
    }
    ctx->pc = 0x2838D0u;
    SET_GPR_U32(ctx, 31, 0x2838D8u);
    ctx->pc = 0x2838D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838D0u;
    // 0x2838d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2838D0u, 0x2838D8u)) {
        return;
    }
    ctx->pc = 0x2838D8u;
label_2838d8:
    // 0x2838d8: 0x14530011  bne         $v0, $s3, . + 4 + (0x11 << 2)
label_2838dc:
    if (ctx->pc == 0x2838DCu) {
        ctx->pc = 0x2838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D8u;
        // 0x2838dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838E0u;
        goto label_2838e0;
    }
    ctx->pc = 0x2838D8u;
    {
        const bool branch_taken_0x2838d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D8u;
        // 0x2838dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d8) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x2838E0u;
label_2838e0:
    // 0x2838e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2838e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2838e4:
    // 0x2838e4: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x2838e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2838e8:
    // 0x2838e8: 0xc0927be  jal         func_249EF8
label_2838ec:
    if (ctx->pc == 0x2838ECu) {
        ctx->pc = 0x2838ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838E8u;
        // 0x2838ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838F0u;
        goto label_2838f0;
    }
    ctx->pc = 0x2838E8u;
    SET_GPR_U32(ctx, 31, 0x2838F0u);
    ctx->pc = 0x2838ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838E8u;
    // 0x2838ec: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2838E8u, 0x2838F0u)) {
        return;
    }
    ctx->pc = 0x2838F0u;
label_2838f0:
    // 0x2838f0: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
label_2838f4:
    if (ctx->pc == 0x2838F4u) {
        ctx->pc = 0x2838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838F0u;
        // 0x2838f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2838F8u;
        goto label_2838f8;
    }
    ctx->pc = 0x2838F0u;
    {
        const bool branch_taken_0x2838f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838F0u;
        // 0x2838f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838f0) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x2838F8u;
label_2838f8:
    // 0x2838f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2838f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2838fc:
    // 0x2838fc: 0xc0a0e9e  jal         func_283A78
label_283900:
    if (ctx->pc == 0x283900u) {
        ctx->pc = 0x283900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838FCu;
        // 0x283900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283904u;
        goto label_283904;
    }
    ctx->pc = 0x2838FCu;
    SET_GPR_U32(ctx, 31, 0x283904u);
    ctx->pc = 0x283900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2838FCu;
    // 0x283900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283A78u, 0x2838FCu, 0x283904u)) {
        return;
    }
    ctx->pc = 0x283904u;
label_283904:
    // 0x283904: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_283908:
    if (ctx->pc == 0x283908u) {
        ctx->pc = 0x283908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283904u;
        // 0x283908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28390Cu;
        goto label_28390c;
    }
    ctx->pc = 0x283904u;
    {
        const bool branch_taken_0x283904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283904u;
        // 0x283908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283904) {
            ctx->pc = 0x28391Cu;
            goto label_28391c;
        }
    }
    ctx->pc = 0x28390Cu;
label_28390c:
    // 0x28390c: 0xc0a0b7a  jal         func_282DE8
label_283910:
    if (ctx->pc == 0x283910u) {
        ctx->pc = 0x283910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28390Cu;
        // 0x283910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283914u;
        goto label_283914;
    }
    ctx->pc = 0x28390Cu;
    SET_GPR_U32(ctx, 31, 0x283914u);
    ctx->pc = 0x283910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28390Cu;
    // 0x283910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DE8u, 0x28390Cu, 0x283914u)) {
        return;
    }
    ctx->pc = 0x283914u;
label_283914:
    // 0x283914: 0x10000002  b           . + 4 + (0x2 << 2)
label_283918:
    if (ctx->pc == 0x283918u) {
        ctx->pc = 0x283918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283914u;
        // 0x283918: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28391Cu;
        goto label_28391c;
    }
    ctx->pc = 0x283914u;
    {
        const bool branch_taken_0x283914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283914u;
        // 0x283918: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283914) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x28391Cu;
label_28391c:
    // 0x28391c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28391cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283920:
    // 0x283920: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x283920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_283924:
    // 0x283924: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x283924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_283928:
    // 0x283928: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x283928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28392c:
    // 0x28392c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28392cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_283930:
    // 0x283930: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x283930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_283934:
    // 0x283934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x283934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_283938:
    // 0x283938: 0x3e00008  jr          $ra
label_28393c:
    if (ctx->pc == 0x28393Cu) {
        ctx->pc = 0x28393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283938u;
        // 0x28393c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283940u;
        goto label_fallthrough_0x283938;
    }
    ctx->pc = 0x283938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283938u;
        // 0x28393c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x283938:
    ctx->pc = 0x283940u;
}
