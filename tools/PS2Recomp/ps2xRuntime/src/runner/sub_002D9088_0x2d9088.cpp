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

// Function: sub_002D9088
// Address: 0x2d9088 - 0x2d9390
void sub_002D9088_0x2d9088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9088_0x2d9088");
#endif

    switch (ctx->pc) {
        case 0x2d9088u: goto label_2d9088;
        case 0x2d908cu: goto label_2d908c;
        case 0x2d9090u: goto label_2d9090;
        case 0x2d9094u: goto label_2d9094;
        case 0x2d9098u: goto label_2d9098;
        case 0x2d909cu: goto label_2d909c;
        case 0x2d90a0u: goto label_2d90a0;
        case 0x2d90a4u: goto label_2d90a4;
        case 0x2d90a8u: goto label_2d90a8;
        case 0x2d90acu: goto label_2d90ac;
        case 0x2d90b0u: goto label_2d90b0;
        case 0x2d90b4u: goto label_2d90b4;
        case 0x2d90b8u: goto label_2d90b8;
        case 0x2d90bcu: goto label_2d90bc;
        case 0x2d90c0u: goto label_2d90c0;
        case 0x2d90c4u: goto label_2d90c4;
        case 0x2d90c8u: goto label_2d90c8;
        case 0x2d90ccu: goto label_2d90cc;
        case 0x2d90d0u: goto label_2d90d0;
        case 0x2d90d4u: goto label_2d90d4;
        case 0x2d90d8u: goto label_2d90d8;
        case 0x2d90dcu: goto label_2d90dc;
        case 0x2d90e0u: goto label_2d90e0;
        case 0x2d90e4u: goto label_2d90e4;
        case 0x2d90e8u: goto label_2d90e8;
        case 0x2d90ecu: goto label_2d90ec;
        case 0x2d90f0u: goto label_2d90f0;
        case 0x2d90f4u: goto label_2d90f4;
        case 0x2d90f8u: goto label_2d90f8;
        case 0x2d90fcu: goto label_2d90fc;
        case 0x2d9100u: goto label_2d9100;
        case 0x2d9104u: goto label_2d9104;
        case 0x2d9108u: goto label_2d9108;
        case 0x2d910cu: goto label_2d910c;
        case 0x2d9110u: goto label_2d9110;
        case 0x2d9114u: goto label_2d9114;
        case 0x2d9118u: goto label_2d9118;
        case 0x2d911cu: goto label_2d911c;
        case 0x2d9120u: goto label_2d9120;
        case 0x2d9124u: goto label_2d9124;
        case 0x2d9128u: goto label_2d9128;
        case 0x2d912cu: goto label_2d912c;
        case 0x2d9130u: goto label_2d9130;
        case 0x2d9134u: goto label_2d9134;
        case 0x2d9138u: goto label_2d9138;
        case 0x2d913cu: goto label_2d913c;
        case 0x2d9140u: goto label_2d9140;
        case 0x2d9144u: goto label_2d9144;
        case 0x2d9148u: goto label_2d9148;
        case 0x2d914cu: goto label_2d914c;
        case 0x2d9150u: goto label_2d9150;
        case 0x2d9154u: goto label_2d9154;
        case 0x2d9158u: goto label_2d9158;
        case 0x2d915cu: goto label_2d915c;
        case 0x2d9160u: goto label_2d9160;
        case 0x2d9164u: goto label_2d9164;
        case 0x2d9168u: goto label_2d9168;
        case 0x2d916cu: goto label_2d916c;
        case 0x2d9170u: goto label_2d9170;
        case 0x2d9174u: goto label_2d9174;
        case 0x2d9178u: goto label_2d9178;
        case 0x2d917cu: goto label_2d917c;
        case 0x2d9180u: goto label_2d9180;
        case 0x2d9184u: goto label_2d9184;
        case 0x2d9188u: goto label_2d9188;
        case 0x2d918cu: goto label_2d918c;
        case 0x2d9190u: goto label_2d9190;
        case 0x2d9194u: goto label_2d9194;
        case 0x2d9198u: goto label_2d9198;
        case 0x2d919cu: goto label_2d919c;
        case 0x2d91a0u: goto label_2d91a0;
        case 0x2d91a4u: goto label_2d91a4;
        case 0x2d91a8u: goto label_2d91a8;
        case 0x2d91acu: goto label_2d91ac;
        case 0x2d91b0u: goto label_2d91b0;
        case 0x2d91b4u: goto label_2d91b4;
        case 0x2d91b8u: goto label_2d91b8;
        case 0x2d91bcu: goto label_2d91bc;
        case 0x2d91c0u: goto label_2d91c0;
        case 0x2d91c4u: goto label_2d91c4;
        case 0x2d91c8u: goto label_2d91c8;
        case 0x2d91ccu: goto label_2d91cc;
        case 0x2d91d0u: goto label_2d91d0;
        case 0x2d91d4u: goto label_2d91d4;
        case 0x2d91d8u: goto label_2d91d8;
        case 0x2d91dcu: goto label_2d91dc;
        case 0x2d91e0u: goto label_2d91e0;
        case 0x2d91e4u: goto label_2d91e4;
        case 0x2d91e8u: goto label_2d91e8;
        case 0x2d91ecu: goto label_2d91ec;
        case 0x2d91f0u: goto label_2d91f0;
        case 0x2d91f4u: goto label_2d91f4;
        case 0x2d91f8u: goto label_2d91f8;
        case 0x2d91fcu: goto label_2d91fc;
        case 0x2d9200u: goto label_2d9200;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9208u: goto label_2d9208;
        case 0x2d920cu: goto label_2d920c;
        case 0x2d9210u: goto label_2d9210;
        case 0x2d9214u: goto label_2d9214;
        case 0x2d9218u: goto label_2d9218;
        case 0x2d921cu: goto label_2d921c;
        case 0x2d9220u: goto label_2d9220;
        case 0x2d9224u: goto label_2d9224;
        case 0x2d9228u: goto label_2d9228;
        case 0x2d922cu: goto label_2d922c;
        case 0x2d9230u: goto label_2d9230;
        case 0x2d9234u: goto label_2d9234;
        case 0x2d9238u: goto label_2d9238;
        case 0x2d923cu: goto label_2d923c;
        case 0x2d9240u: goto label_2d9240;
        case 0x2d9244u: goto label_2d9244;
        case 0x2d9248u: goto label_2d9248;
        case 0x2d924cu: goto label_2d924c;
        case 0x2d9250u: goto label_2d9250;
        case 0x2d9254u: goto label_2d9254;
        case 0x2d9258u: goto label_2d9258;
        case 0x2d925cu: goto label_2d925c;
        case 0x2d9260u: goto label_2d9260;
        case 0x2d9264u: goto label_2d9264;
        case 0x2d9268u: goto label_2d9268;
        case 0x2d926cu: goto label_2d926c;
        case 0x2d9270u: goto label_2d9270;
        case 0x2d9274u: goto label_2d9274;
        case 0x2d9278u: goto label_2d9278;
        case 0x2d927cu: goto label_2d927c;
        case 0x2d9280u: goto label_2d9280;
        case 0x2d9284u: goto label_2d9284;
        case 0x2d9288u: goto label_2d9288;
        case 0x2d928cu: goto label_2d928c;
        case 0x2d9290u: goto label_2d9290;
        case 0x2d9294u: goto label_2d9294;
        case 0x2d9298u: goto label_2d9298;
        case 0x2d929cu: goto label_2d929c;
        case 0x2d92a0u: goto label_2d92a0;
        case 0x2d92a4u: goto label_2d92a4;
        case 0x2d92a8u: goto label_2d92a8;
        case 0x2d92acu: goto label_2d92ac;
        case 0x2d92b0u: goto label_2d92b0;
        case 0x2d92b4u: goto label_2d92b4;
        case 0x2d92b8u: goto label_2d92b8;
        case 0x2d92bcu: goto label_2d92bc;
        case 0x2d92c0u: goto label_2d92c0;
        case 0x2d92c4u: goto label_2d92c4;
        case 0x2d92c8u: goto label_2d92c8;
        case 0x2d92ccu: goto label_2d92cc;
        case 0x2d92d0u: goto label_2d92d0;
        case 0x2d92d4u: goto label_2d92d4;
        case 0x2d92d8u: goto label_2d92d8;
        case 0x2d92dcu: goto label_2d92dc;
        case 0x2d92e0u: goto label_2d92e0;
        case 0x2d92e4u: goto label_2d92e4;
        case 0x2d92e8u: goto label_2d92e8;
        case 0x2d92ecu: goto label_2d92ec;
        case 0x2d92f0u: goto label_2d92f0;
        case 0x2d92f4u: goto label_2d92f4;
        case 0x2d92f8u: goto label_2d92f8;
        case 0x2d92fcu: goto label_2d92fc;
        case 0x2d9300u: goto label_2d9300;
        case 0x2d9304u: goto label_2d9304;
        case 0x2d9308u: goto label_2d9308;
        case 0x2d930cu: goto label_2d930c;
        case 0x2d9310u: goto label_2d9310;
        case 0x2d9314u: goto label_2d9314;
        case 0x2d9318u: goto label_2d9318;
        case 0x2d931cu: goto label_2d931c;
        case 0x2d9320u: goto label_2d9320;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9328u: goto label_2d9328;
        case 0x2d932cu: goto label_2d932c;
        case 0x2d9330u: goto label_2d9330;
        case 0x2d9334u: goto label_2d9334;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d933cu: goto label_2d933c;
        case 0x2d9340u: goto label_2d9340;
        case 0x2d9344u: goto label_2d9344;
        case 0x2d9348u: goto label_2d9348;
        case 0x2d934cu: goto label_2d934c;
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9354u: goto label_2d9354;
        case 0x2d9358u: goto label_2d9358;
        case 0x2d935cu: goto label_2d935c;
        case 0x2d9360u: goto label_2d9360;
        case 0x2d9364u: goto label_2d9364;
        case 0x2d9368u: goto label_2d9368;
        case 0x2d936cu: goto label_2d936c;
        case 0x2d9370u: goto label_2d9370;
        case 0x2d9374u: goto label_2d9374;
        case 0x2d9378u: goto label_2d9378;
        case 0x2d937cu: goto label_2d937c;
        case 0x2d9380u: goto label_2d9380;
        case 0x2d9384u: goto label_2d9384;
        case 0x2d9388u: goto label_2d9388;
        case 0x2d938cu: goto label_2d938c;
        default: break;
    }

    ctx->pc = 0x2d9088u;

label_2d9088:
    // 0x2d9088: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d9088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2d908c:
    // 0x2d908c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2d908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2d9090:
    // 0x2d9090: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2d9090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2d9094:
    // 0x2d9094: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d9094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d9098:
    // 0x2d9098: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2d9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_2d909c:
    // 0x2d909c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d909cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d90a0:
    // 0x2d90a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2d90a4:
    // 0x2d90a4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2d90a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d90a8:
    // 0x2d90a8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2d90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_2d90ac:
    // 0x2d90ac: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2d90acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2d90b0:
    // 0x2d90b0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2d90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_2d90b4:
    // 0x2d90b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d90b8:
    // 0x2d90b8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2d90b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2d90bc:
    // 0x2d90bc: 0x34a50900  ori         $a1, $a1, 0x900
    ctx->pc = 0x2d90bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
label_2d90c0:
    // 0x2d90c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2d90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2d90c4:
    // 0x2d90c4: 0x24140120  addiu       $s4, $zero, 0x120
    ctx->pc = 0x2d90c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_2d90c8:
    // 0x2d90c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2d90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2d90cc:
    // 0x2d90cc: 0x241500e4  addiu       $s5, $zero, 0xE4
    ctx->pc = 0x2d90ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_2d90d0:
    // 0x2d90d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2d90d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2d90d4:
    // 0x2d90d4: 0x24160007  addiu       $s6, $zero, 0x7
    ctx->pc = 0x2d90d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2d90d8:
    // 0x2d90d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d90d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d90dc:
    // 0x2d90dc: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2d90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2d90e0:
    // 0x2d90e0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2d90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d90e4:
    // 0x2d90e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d90e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d90e8:
    // 0x2d90e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d90e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2d90ec:
    // 0x2d90ec: 0x40f809  jalr        $v0
label_2d90f0:
    if (ctx->pc == 0x2D90F0u) {
        ctx->pc = 0x2D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90ECu;
        // 0x2d90f0: 0x24040344  addiu       $a0, $zero, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D90F4u;
        goto label_2d90f4;
    }
    ctx->pc = 0x2D90ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D90F4u);
        ctx->pc = 0x2D90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D90ECu;
        // 0x2d90f0: 0x24040344  addiu       $a0, $zero, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D90ECu, 0x2D90F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D90F4u;
label_2d90f4:
    // 0x2d90f4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2d90f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2d90f8:
    // 0x2d90f8: 0x24040420  addiu       $a0, $zero, 0x420
    ctx->pc = 0x2d90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
label_2d90fc:
    // 0x2d90fc: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2d90fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
label_2d9100:
    // 0x2d9100: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d9100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2d9104:
    // 0x2d9104: 0xc0ad2b4  jal         func_2B4AD0
label_2d9108:
    if (ctx->pc == 0x2D9108u) {
        ctx->pc = 0x2D9108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9104u;
        // 0x2d9108: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D910Cu;
        goto label_2d910c;
    }
    ctx->pc = 0x2D9104u;
    SET_GPR_U32(ctx, 31, 0x2D910Cu);
    ctx->pc = 0x2D9108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9104u;
    // 0x2d9108: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2D9104u, 0x2D910Cu)) {
        return;
    }
    ctx->pc = 0x2D910Cu;
label_2d910c:
    // 0x2d910c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2d910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d9110:
    // 0x2d9110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d9110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9114:
    // 0x2d9114: 0xc0acb28  jal         func_2B2CA0
label_2d9118:
    if (ctx->pc == 0x2D9118u) {
        ctx->pc = 0x2D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9114u;
        // 0x2d9118: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D911Cu;
        goto label_2d911c;
    }
    ctx->pc = 0x2D9114u;
    SET_GPR_U32(ctx, 31, 0x2D911Cu);
    ctx->pc = 0x2D9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9114u;
    // 0x2d9118: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D9114u, 0x2D911Cu)) {
        return;
    }
    ctx->pc = 0x2D911Cu;
label_2d911c:
    // 0x2d911c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9120:
    // 0x2d9120: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9124:
    // 0x2d9124: 0xc0aa2ce  jal         func_2A8B38
label_2d9128:
    if (ctx->pc == 0x2D9128u) {
        ctx->pc = 0x2D9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9124u;
        // 0x2d9128: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D912Cu;
        goto label_2d912c;
    }
    ctx->pc = 0x2D9124u;
    SET_GPR_U32(ctx, 31, 0x2D912Cu);
    ctx->pc = 0x2D9128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9124u;
    // 0x2d9128: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D9124u, 0x2D912Cu)) {
        return;
    }
    ctx->pc = 0x2D912Cu;
label_2d912c:
    // 0x2d912c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d9130:
    // 0x2d9130: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9134:
    // 0x2d9134: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2d9134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_2d9138:
    // 0x2d9138: 0xc0acb28  jal         func_2B2CA0
label_2d913c:
    if (ctx->pc == 0x2D913Cu) {
        ctx->pc = 0x2D913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9138u;
        // 0x2d913c: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9140u;
        goto label_2d9140;
    }
    ctx->pc = 0x2D9138u;
    SET_GPR_U32(ctx, 31, 0x2D9140u);
    ctx->pc = 0x2D913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9138u;
    // 0x2d913c: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D9138u, 0x2D9140u)) {
        return;
    }
    ctx->pc = 0x2D9140u;
label_2d9140:
    // 0x2d9140: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9144:
    // 0x2d9144: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9148:
    // 0x2d9148: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d9148u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d914c:
    // 0x2d914c: 0xc0aa2ce  jal         func_2A8B38
label_2d9150:
    if (ctx->pc == 0x2D9150u) {
        ctx->pc = 0x2D9150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D914Cu;
        // 0x2d9150: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9154u;
        goto label_2d9154;
    }
    ctx->pc = 0x2D914Cu;
    SET_GPR_U32(ctx, 31, 0x2D9154u);
    ctx->pc = 0x2D9150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D914Cu;
    // 0x2d9150: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D914Cu, 0x2D9154u)) {
        return;
    }
    ctx->pc = 0x2D9154u;
label_2d9154:
    // 0x2d9154: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d9154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d9158:
    // 0x2d9158: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d9158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d915c:
    // 0x2d915c: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x2d915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_2d9160:
    // 0x2d9160: 0xc0acb28  jal         func_2B2CA0
label_2d9164:
    if (ctx->pc == 0x2D9164u) {
        ctx->pc = 0x2D9164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9160u;
        // 0x2d9164: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9168u;
        goto label_2d9168;
    }
    ctx->pc = 0x2D9160u;
    SET_GPR_U32(ctx, 31, 0x2D9168u);
    ctx->pc = 0x2D9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9160u;
    // 0x2d9164: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D9160u, 0x2D9168u)) {
        return;
    }
    ctx->pc = 0x2D9168u;
label_2d9168:
    // 0x2d9168: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d9168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d916c:
    // 0x2d916c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d916cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9170:
    // 0x2d9170: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d9170u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d9174:
    // 0x2d9174: 0xc0aa2ce  jal         func_2A8B38
label_2d9178:
    if (ctx->pc == 0x2D9178u) {
        ctx->pc = 0x2D9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9174u;
        // 0x2d9178: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D917Cu;
        goto label_2d917c;
    }
    ctx->pc = 0x2D9174u;
    SET_GPR_U32(ctx, 31, 0x2D917Cu);
    ctx->pc = 0x2D9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9174u;
    // 0x2d9178: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D9174u, 0x2D917Cu)) {
        return;
    }
    ctx->pc = 0x2D917Cu;
label_2d917c:
    // 0x2d917c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d9180:
    // 0x2d9180: 0x26900060  addiu       $s0, $s4, 0x60
    ctx->pc = 0x2d9180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_2d9184:
    // 0x2d9184: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d9184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9188:
    // 0x2d9188: 0x269100c0  addiu       $s1, $s4, 0xC0
    ctx->pc = 0x2d9188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_2d918c:
    // 0x2d918c: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x2d918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2d9190:
    // 0x2d9190: 0x26920120  addiu       $s2, $s4, 0x120
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 288));
label_2d9194:
    // 0x2d9194: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d9194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d9198:
    // 0x2d9198: 0xc0acb28  jal         func_2B2CA0
label_2d919c:
    if (ctx->pc == 0x2D919Cu) {
        ctx->pc = 0x2D919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9198u;
        // 0x2d919c: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91A0u;
        goto label_2d91a0;
    }
    ctx->pc = 0x2D9198u;
    SET_GPR_U32(ctx, 31, 0x2D91A0u);
    ctx->pc = 0x2D919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9198u;
    // 0x2d919c: 0x26d6fffc  addiu       $s6, $s6, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D9198u, 0x2D91A0u)) {
        return;
    }
    ctx->pc = 0x2D91A0u;
label_2d91a0:
    // 0x2d91a0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d91a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d91a4:
    // 0x2d91a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d91a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d91a8:
    // 0x2d91a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d91a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d91ac:
    // 0x2d91ac: 0xc0aa2ce  jal         func_2A8B38
label_2d91b0:
    if (ctx->pc == 0x2D91B0u) {
        ctx->pc = 0x2D91B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91ACu;
        // 0x2d91b0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91B4u;
        goto label_2d91b4;
    }
    ctx->pc = 0x2D91ACu;
    SET_GPR_U32(ctx, 31, 0x2D91B4u);
    ctx->pc = 0x2D91B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91ACu;
    // 0x2d91b0: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D91ACu, 0x2D91B4u)) {
        return;
    }
    ctx->pc = 0x2D91B4u;
label_2d91b4:
    // 0x2d91b4: 0x26940180  addiu       $s4, $s4, 0x180
    ctx->pc = 0x2d91b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
label_2d91b8:
    // 0x2d91b8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d91bc:
    // 0x2d91bc: 0x26a4004c  addiu       $a0, $s5, 0x4C
    ctx->pc = 0x2d91bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
label_2d91c0:
    // 0x2d91c0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d91c4:
    // 0x2d91c4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d91c8:
    // 0x2d91c8: 0xc0acb28  jal         func_2B2CA0
label_2d91cc:
    if (ctx->pc == 0x2D91CCu) {
        ctx->pc = 0x2D91CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91C8u;
        // 0x2d91cc: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91D0u;
        goto label_2d91d0;
    }
    ctx->pc = 0x2D91C8u;
    SET_GPR_U32(ctx, 31, 0x2D91D0u);
    ctx->pc = 0x2D91CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91C8u;
    // 0x2d91cc: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D91C8u, 0x2D91D0u)) {
        return;
    }
    ctx->pc = 0x2D91D0u;
label_2d91d0:
    // 0x2d91d0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d91d4:
    // 0x2d91d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d91d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d91d8:
    // 0x2d91d8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d91d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d91dc:
    // 0x2d91dc: 0xc0aa2ce  jal         func_2A8B38
label_2d91e0:
    if (ctx->pc == 0x2D91E0u) {
        ctx->pc = 0x2D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91DCu;
        // 0x2d91e0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91E4u;
        goto label_2d91e4;
    }
    ctx->pc = 0x2D91DCu;
    SET_GPR_U32(ctx, 31, 0x2D91E4u);
    ctx->pc = 0x2D91E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91DCu;
    // 0x2d91e0: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D91DCu, 0x2D91E4u)) {
        return;
    }
    ctx->pc = 0x2D91E4u;
label_2d91e4:
    // 0x2d91e4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d91e8:
    // 0x2d91e8: 0x26a40098  addiu       $a0, $s5, 0x98
    ctx->pc = 0x2d91e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
label_2d91ec:
    // 0x2d91ec: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d91f0:
    // 0x2d91f0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d91f4:
    // 0x2d91f4: 0xc0acb28  jal         func_2B2CA0
label_2d91f8:
    if (ctx->pc == 0x2D91F8u) {
        ctx->pc = 0x2D91F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D91F4u;
        // 0x2d91f8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D91FCu;
        goto label_2d91fc;
    }
    ctx->pc = 0x2D91F4u;
    SET_GPR_U32(ctx, 31, 0x2D91FCu);
    ctx->pc = 0x2D91F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D91F4u;
    // 0x2d91f8: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D91F4u, 0x2D91FCu)) {
        return;
    }
    ctx->pc = 0x2D91FCu;
label_2d91fc:
    // 0x2d91fc: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9200:
    // 0x2d9200: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9200u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9204:
    // 0x2d9204: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d9204u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d9208:
    // 0x2d9208: 0xc0aa2ce  jal         func_2A8B38
label_2d920c:
    if (ctx->pc == 0x2D920Cu) {
        ctx->pc = 0x2D920Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9208u;
        // 0x2d920c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9210u;
        goto label_2d9210;
    }
    ctx->pc = 0x2D9208u;
    SET_GPR_U32(ctx, 31, 0x2D9210u);
    ctx->pc = 0x2D920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9208u;
    // 0x2d920c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D9208u, 0x2D9210u)) {
        return;
    }
    ctx->pc = 0x2D9210u;
label_2d9210:
    // 0x2d9210: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2d9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2d9214:
    // 0x2d9214: 0x26a400e4  addiu       $a0, $s5, 0xE4
    ctx->pc = 0x2d9214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 228));
label_2d9218:
    // 0x2d9218: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x2d9218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d921c:
    // 0x2d921c: 0x26b50130  addiu       $s5, $s5, 0x130
    ctx->pc = 0x2d921cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
label_2d9220:
    // 0x2d9220: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2d9220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d9224:
    // 0x2d9224: 0xc0acb28  jal         func_2B2CA0
label_2d9228:
    if (ctx->pc == 0x2D9228u) {
        ctx->pc = 0x2D9228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9224u;
        // 0x2d9228: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D922Cu;
        goto label_2d922c;
    }
    ctx->pc = 0x2D9224u;
    SET_GPR_U32(ctx, 31, 0x2D922Cu);
    ctx->pc = 0x2D9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9224u;
    // 0x2d9228: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2CA0u, 0x2D9224u, 0x2D922Cu)) {
        return;
    }
    ctx->pc = 0x2D922Cu;
label_2d922c:
    // 0x2d922c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2d922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2d9230:
    // 0x2d9230: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d9230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d9234:
    // 0x2d9234: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2d9234u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2d9238:
    // 0x2d9238: 0xc0aa2ce  jal         func_2A8B38
label_2d923c:
    if (ctx->pc == 0x2D923Cu) {
        ctx->pc = 0x2D923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9238u;
        // 0x2d923c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9240u;
        goto label_2d9240;
    }
    ctx->pc = 0x2D9238u;
    SET_GPR_U32(ctx, 31, 0x2D9240u);
    ctx->pc = 0x2D923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9238u;
    // 0x2d923c: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2D9238u, 0x2D9240u)) {
        return;
    }
    ctx->pc = 0x2D9240u;
label_2d9240:
    // 0x2d9240: 0x6c3ffcf  bgezl       $s6, . + 4 + (-0x31 << 2)
label_2d9244:
    if (ctx->pc == 0x2D9244u) {
        ctx->pc = 0x2D9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9240u;
        // 0x2d9244: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9248u;
        goto label_2d9248;
    }
    ctx->pc = 0x2D9240u;
    {
        const bool branch_taken_0x2d9240 = (GPR_S64(ctx, 22) >= 0);
        if (branch_taken_0x2d9240) {
            ctx->pc = 0x2D9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9240u;
            // 0x2d9244: 0x8e620014  lw          $v0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9180;
        }
    }
    ctx->pc = 0x2D9248u;
label_2d9248:
    // 0x2d9248: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2d9248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2d924c:
    // 0x2d924c: 0xc0ad26a  jal         func_2B49A8
label_2d9250:
    if (ctx->pc == 0x2D9250u) {
        ctx->pc = 0x2D9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D924Cu;
        // 0x2d9250: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9254u;
        goto label_2d9254;
    }
    ctx->pc = 0x2D924Cu;
    SET_GPR_U32(ctx, 31, 0x2D9254u);
    ctx->pc = 0x2D9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D924Cu;
    // 0x2d9250: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B49A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B49A8u, 0x2D924Cu, 0x2D9254u)) {
        return;
    }
    ctx->pc = 0x2D9254u;
label_2d9254:
    // 0x2d9254: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x2d9254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_2d9258:
    // 0x2d9258: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d9258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d925c:
    // 0x2d925c: 0x8c660108  lw          $a2, 0x108($v1)
    ctx->pc = 0x2d925cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2d9260:
    // 0x2d9260: 0x24040708  addiu       $a0, $zero, 0x708
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
label_2d9264:
    // 0x2d9264: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2d9264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2d9268:
    // 0x2d9268: 0xc0f809  jalr        $a2
label_2d926c:
    if (ctx->pc == 0x2D926Cu) {
        ctx->pc = 0x2D926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9268u;
        // 0x2d926c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9270u;
        goto label_2d9270;
    }
    ctx->pc = 0x2D9268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D9270u);
        ctx->pc = 0x2D926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9268u;
        // 0x2d926c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9268u, 0x2D9270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9270u;
label_2d9270:
    // 0x2d9270: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x2d9270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_2d9274:
    // 0x2d9274: 0xc0c2620  jal         func_309880
label_2d9278:
    if (ctx->pc == 0x2D9278u) {
        ctx->pc = 0x2D9278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9274u;
        // 0x2d9278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D927Cu;
        goto label_2d927c;
    }
    ctx->pc = 0x2D9274u;
    SET_GPR_U32(ctx, 31, 0x2D927Cu);
    ctx->pc = 0x2D9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9274u;
    // 0x2d9278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D9274u, 0x2D927Cu)) {
        return;
    }
    ctx->pc = 0x2D927Cu;
label_2d927c:
    // 0x2d927c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d9280:
    // 0x2d9280: 0xc0c2620  jal         func_309880
label_2d9284:
    if (ctx->pc == 0x2D9284u) {
        ctx->pc = 0x2D9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9280u;
        // 0x2d9284: 0x248400b4  addiu       $a0, $a0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9288u;
        goto label_2d9288;
    }
    ctx->pc = 0x2D9280u;
    SET_GPR_U32(ctx, 31, 0x2D9288u);
    ctx->pc = 0x2D9284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9280u;
    // 0x2d9284: 0x248400b4  addiu       $a0, $a0, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D9280u, 0x2D9288u)) {
        return;
    }
    ctx->pc = 0x2D9288u;
label_2d9288:
    // 0x2d9288: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d9288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d928c:
    // 0x2d928c: 0xc0c2620  jal         func_309880
label_2d9290:
    if (ctx->pc == 0x2D9290u) {
        ctx->pc = 0x2D9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D928Cu;
        // 0x2d9290: 0x24840168  addiu       $a0, $a0, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9294u;
        goto label_2d9294;
    }
    ctx->pc = 0x2D928Cu;
    SET_GPR_U32(ctx, 31, 0x2D9294u);
    ctx->pc = 0x2D9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D928Cu;
    // 0x2d9290: 0x24840168  addiu       $a0, $a0, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D928Cu, 0x2D9294u)) {
        return;
    }
    ctx->pc = 0x2D9294u;
label_2d9294:
    // 0x2d9294: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d9294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d9298:
    // 0x2d9298: 0xc0c2620  jal         func_309880
label_2d929c:
    if (ctx->pc == 0x2D929Cu) {
        ctx->pc = 0x2D929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9298u;
        // 0x2d929c: 0x2484021c  addiu       $a0, $a0, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92A0u;
        goto label_2d92a0;
    }
    ctx->pc = 0x2D9298u;
    SET_GPR_U32(ctx, 31, 0x2D92A0u);
    ctx->pc = 0x2D929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9298u;
    // 0x2d929c: 0x2484021c  addiu       $a0, $a0, 0x21C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D9298u, 0x2D92A0u)) {
        return;
    }
    ctx->pc = 0x2D92A0u;
label_2d92a0:
    // 0x2d92a0: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92a4:
    // 0x2d92a4: 0xc0c2620  jal         func_309880
label_2d92a8:
    if (ctx->pc == 0x2D92A8u) {
        ctx->pc = 0x2D92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92A4u;
        // 0x2d92a8: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92ACu;
        goto label_2d92ac;
    }
    ctx->pc = 0x2D92A4u;
    SET_GPR_U32(ctx, 31, 0x2D92ACu);
    ctx->pc = 0x2D92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92A4u;
    // 0x2d92a8: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92A4u, 0x2D92ACu)) {
        return;
    }
    ctx->pc = 0x2D92ACu;
label_2d92ac:
    // 0x2d92ac: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92b0:
    // 0x2d92b0: 0xc0c2620  jal         func_309880
label_2d92b4:
    if (ctx->pc == 0x2D92B4u) {
        ctx->pc = 0x2D92B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92B0u;
        // 0x2d92b4: 0x24840384  addiu       $a0, $a0, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 900));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92B8u;
        goto label_2d92b8;
    }
    ctx->pc = 0x2D92B0u;
    SET_GPR_U32(ctx, 31, 0x2D92B8u);
    ctx->pc = 0x2D92B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92B0u;
    // 0x2d92b4: 0x24840384  addiu       $a0, $a0, 0x384 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 900));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92B0u, 0x2D92B8u)) {
        return;
    }
    ctx->pc = 0x2D92B8u;
label_2d92b8:
    // 0x2d92b8: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92bc:
    // 0x2d92bc: 0xc0c2620  jal         func_309880
label_2d92c0:
    if (ctx->pc == 0x2D92C0u) {
        ctx->pc = 0x2D92C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92BCu;
        // 0x2d92c0: 0x24840438  addiu       $a0, $a0, 0x438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92C4u;
        goto label_2d92c4;
    }
    ctx->pc = 0x2D92BCu;
    SET_GPR_U32(ctx, 31, 0x2D92C4u);
    ctx->pc = 0x2D92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92BCu;
    // 0x2d92c0: 0x24840438  addiu       $a0, $a0, 0x438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92BCu, 0x2D92C4u)) {
        return;
    }
    ctx->pc = 0x2D92C4u;
label_2d92c4:
    // 0x2d92c4: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92c8:
    // 0x2d92c8: 0xc0c2620  jal         func_309880
label_2d92cc:
    if (ctx->pc == 0x2D92CCu) {
        ctx->pc = 0x2D92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C8u;
        // 0x2d92cc: 0x248404ec  addiu       $a0, $a0, 0x4EC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1260));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92D0u;
        goto label_2d92d0;
    }
    ctx->pc = 0x2D92C8u;
    SET_GPR_U32(ctx, 31, 0x2D92D0u);
    ctx->pc = 0x2D92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92C8u;
    // 0x2d92cc: 0x248404ec  addiu       $a0, $a0, 0x4EC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92C8u, 0x2D92D0u)) {
        return;
    }
    ctx->pc = 0x2D92D0u;
label_2d92d0:
    // 0x2d92d0: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92d4:
    // 0x2d92d4: 0xc0c2620  jal         func_309880
label_2d92d8:
    if (ctx->pc == 0x2D92D8u) {
        ctx->pc = 0x2D92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92D4u;
        // 0x2d92d8: 0x248405a0  addiu       $a0, $a0, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92DCu;
        goto label_2d92dc;
    }
    ctx->pc = 0x2D92D4u;
    SET_GPR_U32(ctx, 31, 0x2D92DCu);
    ctx->pc = 0x2D92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92D4u;
    // 0x2d92d8: 0x248405a0  addiu       $a0, $a0, 0x5A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92D4u, 0x2D92DCu)) {
        return;
    }
    ctx->pc = 0x2D92DCu;
label_2d92dc:
    // 0x2d92dc: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x2d92dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2d92e0:
    // 0x2d92e0: 0xc0c2620  jal         func_309880
label_2d92e4:
    if (ctx->pc == 0x2D92E4u) {
        ctx->pc = 0x2D92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92E0u;
        // 0x2d92e4: 0x24840654  addiu       $a0, $a0, 0x654 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1620));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92E8u;
        goto label_2d92e8;
    }
    ctx->pc = 0x2D92E0u;
    SET_GPR_U32(ctx, 31, 0x2D92E8u);
    ctx->pc = 0x2D92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92E0u;
    // 0x2d92e4: 0x24840654  addiu       $a0, $a0, 0x654 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x309880u, 0x2D92E0u, 0x2D92E8u)) {
        return;
    }
    ctx->pc = 0x2D92E8u;
label_2d92e8:
    // 0x2d92e8: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2d92ec:
    // 0x2d92ec: 0x26f00fc8  addiu       $s0, $s7, 0xFC8
    ctx->pc = 0x2d92ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_2d92f0:
    // 0x2d92f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d92f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d92f4:
    // 0x2d92f4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2d92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d92f8:
    // 0x2d92f8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2d92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2d92fc:
    // 0x2d92fc: 0x40f809  jalr        $v0
label_2d9300:
    if (ctx->pc == 0x2D9300u) {
        ctx->pc = 0x2D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92FCu;
        // 0x2d9300: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9304u;
        goto label_2d9304;
    }
    ctx->pc = 0x2D92FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9304u);
        ctx->pc = 0x2D9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92FCu;
        // 0x2d9300: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D92FCu, 0x2D9304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9304u;
label_2d9304:
    // 0x2d9304: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x2d9304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d9308:
    // 0x2d9308: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2d9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2d930c:
    // 0x2d930c: 0xa6760006  sh          $s6, 0x6($s3)
    ctx->pc = 0x2d930cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 22));
label_2d9310:
    // 0x2d9310: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d9310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d9314:
    // 0x2d9314: 0xa6630004  sh          $v1, 0x4($s3)
    ctx->pc = 0x2d9314u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 3));
label_2d9318:
    // 0x2d9318: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2d9318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2d931c:
    // 0x2d931c: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x2d931cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_2d9320:
    // 0x2d9320: 0xc0f809  jalr        $a2
label_2d9324:
    if (ctx->pc == 0x2D9324u) {
        ctx->pc = 0x2D9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9320u;
        // 0x2d9324: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9328u;
        goto label_2d9328;
    }
    ctx->pc = 0x2D9320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2D9328u);
        ctx->pc = 0x2D9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9320u;
        // 0x2d9324: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9320u, 0x2D9328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9328u;
label_2d9328:
    // 0x2d9328: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x2d9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2d932c:
    // 0x2d932c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2d932cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2d9330:
    // 0x2d9330: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2d9330u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_2d9334:
    // 0x2d9334: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2d9334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2d9338:
    // 0x2d9338: 0x60f809  jalr        $v1
label_2d933c:
    if (ctx->pc == 0x2D933Cu) {
        ctx->pc = 0x2D933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9338u;
        // 0x2d933c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9340u;
        goto label_2d9340;
    }
    ctx->pc = 0x2D9338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D9340u);
        ctx->pc = 0x2D933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9338u;
        // 0x2d933c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9338u, 0x2D9340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9340u;
label_2d9340:
    // 0x2d9340: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x2d9340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_2d9344:
    // 0x2d9344: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2d9344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d9348:
    // 0x2d9348: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x2d9348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_2d934c:
    // 0x2d934c: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x2d934cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_2d9350:
    // 0x2d9350: 0xa6600008  sh          $zero, 0x8($s3)
    ctx->pc = 0x2d9350u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 0));
label_2d9354:
    // 0x2d9354: 0xa660000a  sh          $zero, 0xA($s3)
    ctx->pc = 0x2d9354u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 10), (uint16_t)GPR_U32(ctx, 0));
label_2d9358:
    // 0x2d9358: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2d9358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d935c:
    // 0x2d935c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2d935cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2d9360:
    // 0x2d9360: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2d9360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d9364:
    // 0x2d9364: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2d9364u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d9368:
    // 0x2d9368: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d936c:
    // 0x2d936c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2d936cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9370:
    // 0x2d9370: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2d9370u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9374:
    // 0x2d9374: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2d9374u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9378:
    // 0x2d9378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d937c:
    // 0x2d937c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2d937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d9380:
    // 0x2d9380: 0x3e00008  jr          $ra
label_2d9384:
    if (ctx->pc == 0x2D9384u) {
        ctx->pc = 0x2D9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9380u;
        // 0x2d9384: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9388u;
        goto label_2d9388;
    }
    ctx->pc = 0x2D9380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9380u;
        // 0x2d9384: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9388u;
label_2d9388:
    // 0x2d9388: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d9388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2d938c:
    // 0x2d938c: 0x0  nop
    ctx->pc = 0x2d938cu;
    // NOP
    ctx->pc = 0x2d9390u;
}
