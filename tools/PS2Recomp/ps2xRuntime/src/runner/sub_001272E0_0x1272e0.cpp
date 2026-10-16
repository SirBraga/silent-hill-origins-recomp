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

// Function: sub_001272E0
// Address: 0x1272e0 - 0x127638
void sub_001272E0_0x1272e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001272E0_0x1272e0");
#endif

    switch (ctx->pc) {
        case 0x1272e0u: goto label_1272e0;
        case 0x1272e4u: goto label_1272e4;
        case 0x1272e8u: goto label_1272e8;
        case 0x1272ecu: goto label_1272ec;
        case 0x1272f0u: goto label_1272f0;
        case 0x1272f4u: goto label_1272f4;
        case 0x1272f8u: goto label_1272f8;
        case 0x1272fcu: goto label_1272fc;
        case 0x127300u: goto label_127300;
        case 0x127304u: goto label_127304;
        case 0x127308u: goto label_127308;
        case 0x12730cu: goto label_12730c;
        case 0x127310u: goto label_127310;
        case 0x127314u: goto label_127314;
        case 0x127318u: goto label_127318;
        case 0x12731cu: goto label_12731c;
        case 0x127320u: goto label_127320;
        case 0x127324u: goto label_127324;
        case 0x127328u: goto label_127328;
        case 0x12732cu: goto label_12732c;
        case 0x127330u: goto label_127330;
        case 0x127334u: goto label_127334;
        case 0x127338u: goto label_127338;
        case 0x12733cu: goto label_12733c;
        case 0x127340u: goto label_127340;
        case 0x127344u: goto label_127344;
        case 0x127348u: goto label_127348;
        case 0x12734cu: goto label_12734c;
        case 0x127350u: goto label_127350;
        case 0x127354u: goto label_127354;
        case 0x127358u: goto label_127358;
        case 0x12735cu: goto label_12735c;
        case 0x127360u: goto label_127360;
        case 0x127364u: goto label_127364;
        case 0x127368u: goto label_127368;
        case 0x12736cu: goto label_12736c;
        case 0x127370u: goto label_127370;
        case 0x127374u: goto label_127374;
        case 0x127378u: goto label_127378;
        case 0x12737cu: goto label_12737c;
        case 0x127380u: goto label_127380;
        case 0x127384u: goto label_127384;
        case 0x127388u: goto label_127388;
        case 0x12738cu: goto label_12738c;
        case 0x127390u: goto label_127390;
        case 0x127394u: goto label_127394;
        case 0x127398u: goto label_127398;
        case 0x12739cu: goto label_12739c;
        case 0x1273a0u: goto label_1273a0;
        case 0x1273a4u: goto label_1273a4;
        case 0x1273a8u: goto label_1273a8;
        case 0x1273acu: goto label_1273ac;
        case 0x1273b0u: goto label_1273b0;
        case 0x1273b4u: goto label_1273b4;
        case 0x1273b8u: goto label_1273b8;
        case 0x1273bcu: goto label_1273bc;
        case 0x1273c0u: goto label_1273c0;
        case 0x1273c4u: goto label_1273c4;
        case 0x1273c8u: goto label_1273c8;
        case 0x1273ccu: goto label_1273cc;
        case 0x1273d0u: goto label_1273d0;
        case 0x1273d4u: goto label_1273d4;
        case 0x1273d8u: goto label_1273d8;
        case 0x1273dcu: goto label_1273dc;
        case 0x1273e0u: goto label_1273e0;
        case 0x1273e4u: goto label_1273e4;
        case 0x1273e8u: goto label_1273e8;
        case 0x1273ecu: goto label_1273ec;
        case 0x1273f0u: goto label_1273f0;
        case 0x1273f4u: goto label_1273f4;
        case 0x1273f8u: goto label_1273f8;
        case 0x1273fcu: goto label_1273fc;
        case 0x127400u: goto label_127400;
        case 0x127404u: goto label_127404;
        case 0x127408u: goto label_127408;
        case 0x12740cu: goto label_12740c;
        case 0x127410u: goto label_127410;
        case 0x127414u: goto label_127414;
        case 0x127418u: goto label_127418;
        case 0x12741cu: goto label_12741c;
        case 0x127420u: goto label_127420;
        case 0x127424u: goto label_127424;
        case 0x127428u: goto label_127428;
        case 0x12742cu: goto label_12742c;
        case 0x127430u: goto label_127430;
        case 0x127434u: goto label_127434;
        case 0x127438u: goto label_127438;
        case 0x12743cu: goto label_12743c;
        case 0x127440u: goto label_127440;
        case 0x127444u: goto label_127444;
        case 0x127448u: goto label_127448;
        case 0x12744cu: goto label_12744c;
        case 0x127450u: goto label_127450;
        case 0x127454u: goto label_127454;
        case 0x127458u: goto label_127458;
        case 0x12745cu: goto label_12745c;
        case 0x127460u: goto label_127460;
        case 0x127464u: goto label_127464;
        case 0x127468u: goto label_127468;
        case 0x12746cu: goto label_12746c;
        case 0x127470u: goto label_127470;
        case 0x127474u: goto label_127474;
        case 0x127478u: goto label_127478;
        case 0x12747cu: goto label_12747c;
        case 0x127480u: goto label_127480;
        case 0x127484u: goto label_127484;
        case 0x127488u: goto label_127488;
        case 0x12748cu: goto label_12748c;
        case 0x127490u: goto label_127490;
        case 0x127494u: goto label_127494;
        case 0x127498u: goto label_127498;
        case 0x12749cu: goto label_12749c;
        case 0x1274a0u: goto label_1274a0;
        case 0x1274a4u: goto label_1274a4;
        case 0x1274a8u: goto label_1274a8;
        case 0x1274acu: goto label_1274ac;
        case 0x1274b0u: goto label_1274b0;
        case 0x1274b4u: goto label_1274b4;
        case 0x1274b8u: goto label_1274b8;
        case 0x1274bcu: goto label_1274bc;
        case 0x1274c0u: goto label_1274c0;
        case 0x1274c4u: goto label_1274c4;
        case 0x1274c8u: goto label_1274c8;
        case 0x1274ccu: goto label_1274cc;
        case 0x1274d0u: goto label_1274d0;
        case 0x1274d4u: goto label_1274d4;
        case 0x1274d8u: goto label_1274d8;
        case 0x1274dcu: goto label_1274dc;
        case 0x1274e0u: goto label_1274e0;
        case 0x1274e4u: goto label_1274e4;
        case 0x1274e8u: goto label_1274e8;
        case 0x1274ecu: goto label_1274ec;
        case 0x1274f0u: goto label_1274f0;
        case 0x1274f4u: goto label_1274f4;
        case 0x1274f8u: goto label_1274f8;
        case 0x1274fcu: goto label_1274fc;
        case 0x127500u: goto label_127500;
        case 0x127504u: goto label_127504;
        case 0x127508u: goto label_127508;
        case 0x12750cu: goto label_12750c;
        case 0x127510u: goto label_127510;
        case 0x127514u: goto label_127514;
        case 0x127518u: goto label_127518;
        case 0x12751cu: goto label_12751c;
        case 0x127520u: goto label_127520;
        case 0x127524u: goto label_127524;
        case 0x127528u: goto label_127528;
        case 0x12752cu: goto label_12752c;
        case 0x127530u: goto label_127530;
        case 0x127534u: goto label_127534;
        case 0x127538u: goto label_127538;
        case 0x12753cu: goto label_12753c;
        case 0x127540u: goto label_127540;
        case 0x127544u: goto label_127544;
        case 0x127548u: goto label_127548;
        case 0x12754cu: goto label_12754c;
        case 0x127550u: goto label_127550;
        case 0x127554u: goto label_127554;
        case 0x127558u: goto label_127558;
        case 0x12755cu: goto label_12755c;
        case 0x127560u: goto label_127560;
        case 0x127564u: goto label_127564;
        case 0x127568u: goto label_127568;
        case 0x12756cu: goto label_12756c;
        case 0x127570u: goto label_127570;
        case 0x127574u: goto label_127574;
        case 0x127578u: goto label_127578;
        case 0x12757cu: goto label_12757c;
        case 0x127580u: goto label_127580;
        case 0x127584u: goto label_127584;
        case 0x127588u: goto label_127588;
        case 0x12758cu: goto label_12758c;
        case 0x127590u: goto label_127590;
        case 0x127594u: goto label_127594;
        case 0x127598u: goto label_127598;
        case 0x12759cu: goto label_12759c;
        case 0x1275a0u: goto label_1275a0;
        case 0x1275a4u: goto label_1275a4;
        case 0x1275a8u: goto label_1275a8;
        case 0x1275acu: goto label_1275ac;
        case 0x1275b0u: goto label_1275b0;
        case 0x1275b4u: goto label_1275b4;
        case 0x1275b8u: goto label_1275b8;
        case 0x1275bcu: goto label_1275bc;
        case 0x1275c0u: goto label_1275c0;
        case 0x1275c4u: goto label_1275c4;
        case 0x1275c8u: goto label_1275c8;
        case 0x1275ccu: goto label_1275cc;
        case 0x1275d0u: goto label_1275d0;
        case 0x1275d4u: goto label_1275d4;
        case 0x1275d8u: goto label_1275d8;
        case 0x1275dcu: goto label_1275dc;
        case 0x1275e0u: goto label_1275e0;
        case 0x1275e4u: goto label_1275e4;
        case 0x1275e8u: goto label_1275e8;
        case 0x1275ecu: goto label_1275ec;
        case 0x1275f0u: goto label_1275f0;
        case 0x1275f4u: goto label_1275f4;
        case 0x1275f8u: goto label_1275f8;
        case 0x1275fcu: goto label_1275fc;
        case 0x127600u: goto label_127600;
        case 0x127604u: goto label_127604;
        case 0x127608u: goto label_127608;
        case 0x12760cu: goto label_12760c;
        case 0x127610u: goto label_127610;
        case 0x127614u: goto label_127614;
        case 0x127618u: goto label_127618;
        case 0x12761cu: goto label_12761c;
        case 0x127620u: goto label_127620;
        case 0x127624u: goto label_127624;
        case 0x127628u: goto label_127628;
        case 0x12762cu: goto label_12762c;
        case 0x127630u: goto label_127630;
        case 0x127634u: goto label_127634;
        default: break;
    }

    ctx->pc = 0x1272e0u;

label_1272e0:
    // 0x1272e0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1272e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1272e4:
    // 0x1272e4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1272e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_1272e8:
    // 0x1272e8: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1272e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_1272ec:
    // 0x1272ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1272ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1272f0:
    // 0x1272f0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1272f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_1272f4:
    // 0x1272f4: 0x8e220bc8  lw          $v0, 0xBC8($s1)
    ctx->pc = 0x1272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_1272f8:
    // 0x1272f8: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_1272fc:
    if (ctx->pc == 0x1272FCu) {
        ctx->pc = 0x1272FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F8u;
        // 0x1272fc: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127300u;
        goto label_127300;
    }
    ctx->pc = 0x1272F8u;
    {
        const bool branch_taken_0x1272f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1272FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1272F8u;
        // 0x1272fc: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1272f8) {
            ctx->pc = 0x127620u;
            goto label_127620;
        }
    }
    ctx->pc = 0x127300u;
label_127300:
    // 0x127300: 0xc04f0c2  jal         func_13C308
label_127304:
    if (ctx->pc == 0x127304u) {
        ctx->pc = 0x127304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127300u;
        // 0x127304: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127308u;
        goto label_127308;
    }
    ctx->pc = 0x127300u;
    SET_GPR_U32(ctx, 31, 0x127308u);
    ctx->pc = 0x127304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127300u;
    // 0x127304: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x127300u, 0x127308u)) {
        return;
    }
    ctx->pc = 0x127308u;
label_127308:
    // 0x127308: 0x8e240bc8  lw          $a0, 0xBC8($s1)
    ctx->pc = 0x127308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_12730c:
    // 0x12730c: 0xc04f0fe  jal         func_13C3F8
label_127310:
    if (ctx->pc == 0x127310u) {
        ctx->pc = 0x127310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12730Cu;
        // 0x127310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127314u;
        goto label_127314;
    }
    ctx->pc = 0x12730Cu;
    SET_GPR_U32(ctx, 31, 0x127314u);
    ctx->pc = 0x127310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12730Cu;
    // 0x127310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x12730Cu, 0x127314u)) {
        return;
    }
    ctx->pc = 0x127314u;
label_127314:
    // 0x127314: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x127314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127318:
    // 0x127318: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x127318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12731c:
    // 0x12731c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x12731cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127320:
    // 0x127320: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x127320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127324:
    // 0x127324: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x127324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_127328:
    // 0x127328: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x127328u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_12732c:
    // 0x12732c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x12732cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_127330:
    // 0x127330: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x127330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_127334:
    // 0x127334: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x127334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_127338:
    // 0x127338: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x127338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12733c:
    // 0x12733c: 0xc093aa8  jal         func_24EAA0
label_127340:
    if (ctx->pc == 0x127340u) {
        ctx->pc = 0x127340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12733Cu;
        // 0x127340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127344u;
        goto label_127344;
    }
    ctx->pc = 0x12733Cu;
    SET_GPR_U32(ctx, 31, 0x127344u);
    ctx->pc = 0x127340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12733Cu;
    // 0x127340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAA0u, 0x12733Cu, 0x127344u)) {
        return;
    }
    ctx->pc = 0x127344u;
label_127344:
    // 0x127344: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x127344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_127348:
    // 0x127348: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x127348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_12734c:
    // 0x12734c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12734cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_127350:
    // 0x127350: 0x0  nop
    ctx->pc = 0x127350u;
    // NOP
label_127354:
    // 0x127354: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x127354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_127358:
    // 0x127358: 0x0  nop
    ctx->pc = 0x127358u;
    // NOP
label_12735c:
    // 0x12735c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_127360:
    if (ctx->pc == 0x127360u) {
        ctx->pc = 0x127360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12735Cu;
        // 0x127360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127364u;
        goto label_127364;
    }
    ctx->pc = 0x12735Cu;
    {
        const bool branch_taken_0x12735c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12735c) {
            ctx->pc = 0x127360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12735Cu;
            // 0x127360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127378u;
            goto label_127378;
        }
    }
    ctx->pc = 0x127364u;
label_127364:
    // 0x127364: 0x8e240bc8  lw          $a0, 0xBC8($s1)
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_127368:
    // 0x127368: 0xc04f0f4  jal         func_13C3D0
label_12736c:
    if (ctx->pc == 0x12736Cu) {
        ctx->pc = 0x12736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127368u;
        // 0x12736c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127370u;
        goto label_127370;
    }
    ctx->pc = 0x127368u;
    SET_GPR_U32(ctx, 31, 0x127370u);
    ctx->pc = 0x12736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127368u;
    // 0x12736c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x127368u, 0x127370u)) {
        return;
    }
    ctx->pc = 0x127370u;
label_127370:
    // 0x127370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x127370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127374:
    // 0x127374: 0x0  nop
    ctx->pc = 0x127374u;
    // NOP
label_127378:
    // 0x127378: 0xc093a88  jal         func_24EA20
label_12737c:
    if (ctx->pc == 0x12737Cu) {
        ctx->pc = 0x12737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127378u;
        // 0x12737c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127380u;
        goto label_127380;
    }
    ctx->pc = 0x127378u;
    SET_GPR_U32(ctx, 31, 0x127380u);
    ctx->pc = 0x12737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127378u;
    // 0x12737c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x127378u, 0x127380u)) {
        return;
    }
    ctx->pc = 0x127380u;
label_127380:
    // 0x127380: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x127380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_127384:
    // 0x127384: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x127384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127388:
    // 0x127388: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x127388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12738c:
    // 0x12738c: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x12738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_127390:
    // 0x127390: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x127390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127394:
    // 0x127394: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x127394u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_127398:
    // 0x127398: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x127398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12739c:
    // 0x12739c: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x12739cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
label_1273a0:
    // 0x1273a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1273a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1273a4:
    // 0x1273a4: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1273a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_1273a8:
    // 0x1273a8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1273a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1273ac:
    // 0x1273ac: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1273acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1273b0:
    // 0x1273b0: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1273b0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_1273b4:
    // 0x1273b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1273b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_1273b8:
    // 0x1273b8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1273b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1273bc:
    // 0x1273bc: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x1273bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1273c0:
    // 0x1273c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1273c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1273c4:
    // 0x1273c4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1273c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1273c8:
    // 0x1273c8: 0xc092d94  jal         func_24B650
label_1273cc:
    if (ctx->pc == 0x1273CCu) {
        ctx->pc = 0x1273CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273C8u;
        // 0x1273cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273D0u;
        goto label_1273d0;
    }
    ctx->pc = 0x1273C8u;
    SET_GPR_U32(ctx, 31, 0x1273D0u);
    ctx->pc = 0x1273CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273C8u;
    // 0x1273cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x1273C8u, 0x1273D0u)) {
        return;
    }
    ctx->pc = 0x1273D0u;
label_1273d0:
    // 0x1273d0: 0x8e260bc8  lw          $a2, 0xBC8($s1)
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_1273d4:
    // 0x1273d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1273d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1273d8:
    // 0x1273d8: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1273d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1273dc:
    // 0x1273dc: 0x844401c0  lh          $a0, 0x1C0($v0)
    ctx->pc = 0x1273dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
label_1273e0:
    // 0x1273e0: 0x8c4301c4  lw          $v1, 0x1C4($v0)
    ctx->pc = 0x1273e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
label_1273e4:
    // 0x1273e4: 0x60f809  jalr        $v1
label_1273e8:
    if (ctx->pc == 0x1273E8u) {
        ctx->pc = 0x1273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273E4u;
        // 0x1273e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273ECu;
        goto label_1273ec;
    }
    ctx->pc = 0x1273E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1273ECu);
        ctx->pc = 0x1273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273E4u;
        // 0x1273e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1273E4u, 0x1273ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1273ECu;
label_1273ec:
    // 0x1273ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1273ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1273f0:
    // 0x1273f0: 0xc040688  jal         func_101A20
label_1273f4:
    if (ctx->pc == 0x1273F4u) {
        ctx->pc = 0x1273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273F0u;
        // 0x1273f4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1273F8u;
        goto label_1273f8;
    }
    ctx->pc = 0x1273F0u;
    SET_GPR_U32(ctx, 31, 0x1273F8u);
    ctx->pc = 0x1273F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273F0u;
    // 0x1273f4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1273F0u, 0x1273F8u)) {
        return;
    }
    ctx->pc = 0x1273F8u;
label_1273f8:
    // 0x1273f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1273f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1273fc:
    // 0x1273fc: 0xc040698  jal         func_101A60
label_127400:
    if (ctx->pc == 0x127400u) {
        ctx->pc = 0x127400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273FCu;
        // 0x127400: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127404u;
        goto label_127404;
    }
    ctx->pc = 0x1273FCu;
    SET_GPR_U32(ctx, 31, 0x127404u);
    ctx->pc = 0x127400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1273FCu;
    // 0x127400: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1273FCu, 0x127404u)) {
        return;
    }
    ctx->pc = 0x127404u;
label_127404:
    // 0x127404: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x127404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_127408:
    // 0x127408: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x127408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_12740c:
    // 0x12740c: 0x68440037  ldl         $a0, 0x37($v0)
    ctx->pc = 0x12740cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_127410:
    // 0x127410: 0x6c440030  ldr         $a0, 0x30($v0)
    ctx->pc = 0x127410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_127414:
    // 0x127414: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x127414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_127418:
    // 0x127418: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x127418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12741c:
    // 0x12741c: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x12741cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_127420:
    // 0x127420: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x127420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_127424:
    // 0x127424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127428:
    // 0x127428: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x127428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_12742c:
    // 0x12742c: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x12742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_127430:
    // 0x127430: 0x40f809  jalr        $v0
label_127434:
    if (ctx->pc == 0x127434u) {
        ctx->pc = 0x127434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127430u;
        // 0x127434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127438u;
        goto label_127438;
    }
    ctx->pc = 0x127430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x127438u);
        ctx->pc = 0x127434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127430u;
        // 0x127434: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127430u, 0x127438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127438u;
label_127438:
    // 0x127438: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x127438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_12743c:
    // 0x12743c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12743cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_127440:
    // 0x127440: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x127440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_127444:
    // 0x127444: 0xc093aea  jal         func_24EBA8
label_127448:
    if (ctx->pc == 0x127448u) {
        ctx->pc = 0x127448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127444u;
        // 0x127448: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12744Cu;
        goto label_12744c;
    }
    ctx->pc = 0x127444u;
    SET_GPR_U32(ctx, 31, 0x12744Cu);
    ctx->pc = 0x127448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127444u;
    // 0x127448: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x127444u, 0x12744Cu)) {
        return;
    }
    ctx->pc = 0x12744Cu;
label_12744c:
    // 0x12744c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x12744cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_127450:
    // 0x127450: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x127450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_127454:
    // 0x127454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x127454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_127458:
    // 0x127458: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x127458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12745c:
    // 0x12745c: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x12745cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_127460:
    // 0x127460: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x127460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_127464:
    // 0x127464: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x127464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_127468:
    // 0x127468: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x127468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12746c:
    // 0x12746c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12746cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_127470:
    // 0x127470: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x127470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_127474:
    // 0x127474: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x127474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_127478:
    // 0x127478: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x127478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_12747c:
    // 0x12747c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x12747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127480:
    // 0x127480: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x127480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127484:
    // 0x127484: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x127484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127488:
    // 0x127488: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x127488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12748c:
    // 0x12748c: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x12748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_127490:
    // 0x127490: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x127490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_127494:
    // 0x127494: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x127494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_127498:
    // 0x127498: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x127498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_12749c:
    // 0x12749c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x12749cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_1274a0:
    // 0x1274a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1274a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1274a4:
    // 0x1274a4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1274a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1274a8:
    // 0x1274a8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x1274a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1274ac:
    // 0x1274ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1274acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1274b0:
    // 0x1274b0: 0xc04642c  jal         func_1190B0
label_1274b4:
    if (ctx->pc == 0x1274B4u) {
        ctx->pc = 0x1274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274B0u;
        // 0x1274b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274B8u;
        goto label_1274b8;
    }
    ctx->pc = 0x1274B0u;
    SET_GPR_U32(ctx, 31, 0x1274B8u);
    ctx->pc = 0x1274B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274B0u;
    // 0x1274b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1274B0u, 0x1274B8u)) {
        return;
    }
    ctx->pc = 0x1274B8u;
label_1274b8:
    // 0x1274b8: 0x0  nop
    ctx->pc = 0x1274b8u;
    // NOP
label_1274bc:
    // 0x1274bc: 0x0  nop
    ctx->pc = 0x1274bcu;
    // NOP
label_1274c0:
    // 0x1274c0: 0x46000044  c1          0x44
    ctx->pc = 0x1274c0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1274c4:
    // 0x1274c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1274c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1274c8:
    // 0x1274c8: 0x0  nop
    ctx->pc = 0x1274c8u;
    // NOP
label_1274cc:
    // 0x1274cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1274ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1274d0:
    // 0x1274d0: 0x0  nop
    ctx->pc = 0x1274d0u;
    // NOP
label_1274d4:
    // 0x1274d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1274d8:
    if (ctx->pc == 0x1274D8u) {
        ctx->pc = 0x1274D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274D4u;
        // 0x1274d8: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274DCu;
        goto label_1274dc;
    }
    ctx->pc = 0x1274D4u;
    {
        const bool branch_taken_0x1274d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1274D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274D4u;
        // 0x1274d8: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274d4) {
            ctx->pc = 0x1274F8u;
            goto label_1274f8;
        }
    }
    ctx->pc = 0x1274DCu;
label_1274dc:
    // 0x1274dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1274dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1274e0:
    // 0x1274e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1274e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1274e4:
    // 0x1274e4: 0x0  nop
    ctx->pc = 0x1274e4u;
    // NOP
label_1274e8:
    // 0x1274e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1274e8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1274ec:
    // 0x1274ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1274f0:
    if (ctx->pc == 0x1274F0u) {
        ctx->pc = 0x1274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274ECu;
        // 0x1274f0: 0xc7a30084  lwc1        $f3, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1274F4u;
        goto label_1274f4;
    }
    ctx->pc = 0x1274ECu;
    {
        const bool branch_taken_0x1274ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1274F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1274ECu;
        // 0x1274f0: 0xc7a30084  lwc1        $f3, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1274ec) {
            ctx->pc = 0x127500u;
            goto label_127500;
        }
    }
    ctx->pc = 0x1274F4u;
label_1274f4:
    // 0x1274f4: 0x0  nop
    ctx->pc = 0x1274f4u;
    // NOP
label_1274f8:
    // 0x1274f8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1274f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1274fc:
    // 0x1274fc: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x1274fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_127500:
    // 0x127500: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x127500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127504:
    // 0x127504: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x127504u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_127508:
    // 0x127508: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x127508u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_12750c:
    // 0x12750c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12750cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_127510:
    // 0x127510: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_127514:
    // 0x127514: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x127514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_127518:
    // 0x127518: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x127518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12751c:
    // 0x12751c: 0x0  nop
    ctx->pc = 0x12751cu;
    // NOP
label_127520:
    // 0x127520: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x127520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_127524:
    // 0x127524: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x127524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_127528:
    // 0x127528: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x127528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_12752c:
    // 0x12752c: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x12752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_127530:
    // 0x127530: 0xc7a60068  lwc1        $f6, 0x68($sp)
    ctx->pc = 0x127530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_127534:
    // 0x127534: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x127534u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_127538:
    // 0x127538: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x127538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12753c:
    // 0x12753c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x12753cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_127540:
    // 0x127540: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x127540u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_127544:
    // 0x127544: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x127544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_127548:
    // 0x127548: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x127548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12754c:
    // 0x12754c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x12754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127550:
    // 0x127550: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x127550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_127554:
    // 0x127554: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x127554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_127558:
    // 0x127558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x127558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12755c:
    // 0x12755c: 0x0  nop
    ctx->pc = 0x12755cu;
    // NOP
label_127560:
    // 0x127560: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x127560u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_127564:
    // 0x127564: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x127564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_127568:
    // 0x127568: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x127568u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_12756c:
    // 0x12756c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x12756cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_127570:
    // 0x127570: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x127570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_127574:
    // 0x127574: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x127574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_127578:
    // 0x127578: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x127578u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_12757c:
    // 0x12757c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_127580:
    // 0x127580: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x127580u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_127584:
    // 0x127584: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x127584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_127588:
    // 0x127588: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x127588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_12758c:
    // 0x12758c: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x12758cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_127590:
    // 0x127590: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x127590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_127594:
    // 0x127594: 0x6ba400d7  ldl         $a0, 0xD7($sp)
    ctx->pc = 0x127594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_127598:
    // 0x127598: 0x6fa400d0  ldr         $a0, 0xD0($sp)
    ctx->pc = 0x127598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12759c:
    // 0x12759c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x12759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1275a0:
    // 0x1275a0: 0xb3a400c7  sdl         $a0, 0xC7($sp)
    ctx->pc = 0x1275a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1275a4:
    // 0x1275a4: 0xb7a400c0  sdr         $a0, 0xC0($sp)
    ctx->pc = 0x1275a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1275a8:
    // 0x1275a8: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x1275a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_1275ac:
    // 0x1275ac: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1275b0:
    // 0x1275b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1275b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1275b4:
    // 0x1275b4: 0xc04f0fe  jal         func_13C3F8
label_1275b8:
    if (ctx->pc == 0x1275B8u) {
        ctx->pc = 0x1275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1275B4u;
        // 0x1275b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1275BCu;
        goto label_1275bc;
    }
    ctx->pc = 0x1275B4u;
    SET_GPR_U32(ctx, 31, 0x1275BCu);
    ctx->pc = 0x1275B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1275B4u;
    // 0x1275b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3F8u, 0x1275B4u, 0x1275BCu)) {
        return;
    }
    ctx->pc = 0x1275BCu;
label_1275bc:
    // 0x1275bc: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1275bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_1275c0:
    // 0x1275c0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1275c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1275c4:
    // 0x1275c4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x1275c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1275c8:
    // 0x1275c8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x1275c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1275cc:
    // 0x1275cc: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x1275ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1275d0:
    // 0x1275d0: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1275d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1275d4:
    // 0x1275d4: 0xc7a500c8  lwc1        $f5, 0xC8($sp)
    ctx->pc = 0x1275d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1275d8:
    // 0x1275d8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1275d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1275dc:
    // 0x1275dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1275dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1275e0:
    // 0x1275e0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1275e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1275e4:
    // 0x1275e4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1275e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1275e8:
    // 0x1275e8: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x1275e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1275ec:
    // 0x1275ec: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x1275ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1275f0:
    // 0x1275f0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1275f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1275f4:
    // 0x1275f4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1275f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1275f8:
    // 0x1275f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1275f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1275fc:
    // 0x1275fc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1275fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_127600:
    // 0x127600: 0x60f809  jalr        $v1
label_127604:
    if (ctx->pc == 0x127604u) {
        ctx->pc = 0x127604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127600u;
        // 0x127604: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127608u;
        goto label_127608;
    }
    ctx->pc = 0x127600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x127608u);
        ctx->pc = 0x127604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127600u;
        // 0x127604: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127600u, 0x127608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127608u;
label_127608:
    // 0x127608: 0x8e240bc8  lw          $a0, 0xBC8($s1)
    ctx->pc = 0x127608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3016)));
label_12760c:
    // 0x12760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127610:
    // 0x127610: 0xac820cd8  sw          $v0, 0xCD8($a0)
    ctx->pc = 0x127610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3288), GPR_U32(ctx, 2));
label_127614:
    // 0x127614: 0xae220cd8  sw          $v0, 0xCD8($s1)
    ctx->pc = 0x127614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3288), GPR_U32(ctx, 2));
label_127618:
    // 0x127618: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x127618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12761c:
    // 0x12761c: 0x0  nop
    ctx->pc = 0x12761cu;
    // NOP
label_127620:
    // 0x127620: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x127620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_127624:
    // 0x127624: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x127624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_127628:
    // 0x127628: 0x3e00008  jr          $ra
label_12762c:
    if (ctx->pc == 0x12762Cu) {
        ctx->pc = 0x12762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127628u;
        // 0x12762c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127630u;
        goto label_127630;
    }
    ctx->pc = 0x127628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127628u;
        // 0x12762c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127630u;
label_127630:
    // 0x127630: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_127634:
    // 0x127634: 0x0  nop
    ctx->pc = 0x127634u;
    // NOP
    ctx->pc = 0x127638u;
}
