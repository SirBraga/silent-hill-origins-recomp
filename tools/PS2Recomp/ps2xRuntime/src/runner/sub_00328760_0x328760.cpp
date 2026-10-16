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

// Function: sub_00328760
// Address: 0x328760 - 0x328ae0
void sub_00328760_0x328760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328760_0x328760");
#endif

    switch (ctx->pc) {
        case 0x328760u: goto label_328760;
        case 0x328764u: goto label_328764;
        case 0x328768u: goto label_328768;
        case 0x32876cu: goto label_32876c;
        case 0x328770u: goto label_328770;
        case 0x328774u: goto label_328774;
        case 0x328778u: goto label_328778;
        case 0x32877cu: goto label_32877c;
        case 0x328780u: goto label_328780;
        case 0x328784u: goto label_328784;
        case 0x328788u: goto label_328788;
        case 0x32878cu: goto label_32878c;
        case 0x328790u: goto label_328790;
        case 0x328794u: goto label_328794;
        case 0x328798u: goto label_328798;
        case 0x32879cu: goto label_32879c;
        case 0x3287a0u: goto label_3287a0;
        case 0x3287a4u: goto label_3287a4;
        case 0x3287a8u: goto label_3287a8;
        case 0x3287acu: goto label_3287ac;
        case 0x3287b0u: goto label_3287b0;
        case 0x3287b4u: goto label_3287b4;
        case 0x3287b8u: goto label_3287b8;
        case 0x3287bcu: goto label_3287bc;
        case 0x3287c0u: goto label_3287c0;
        case 0x3287c4u: goto label_3287c4;
        case 0x3287c8u: goto label_3287c8;
        case 0x3287ccu: goto label_3287cc;
        case 0x3287d0u: goto label_3287d0;
        case 0x3287d4u: goto label_3287d4;
        case 0x3287d8u: goto label_3287d8;
        case 0x3287dcu: goto label_3287dc;
        case 0x3287e0u: goto label_3287e0;
        case 0x3287e4u: goto label_3287e4;
        case 0x3287e8u: goto label_3287e8;
        case 0x3287ecu: goto label_3287ec;
        case 0x3287f0u: goto label_3287f0;
        case 0x3287f4u: goto label_3287f4;
        case 0x3287f8u: goto label_3287f8;
        case 0x3287fcu: goto label_3287fc;
        case 0x328800u: goto label_328800;
        case 0x328804u: goto label_328804;
        case 0x328808u: goto label_328808;
        case 0x32880cu: goto label_32880c;
        case 0x328810u: goto label_328810;
        case 0x328814u: goto label_328814;
        case 0x328818u: goto label_328818;
        case 0x32881cu: goto label_32881c;
        case 0x328820u: goto label_328820;
        case 0x328824u: goto label_328824;
        case 0x328828u: goto label_328828;
        case 0x32882cu: goto label_32882c;
        case 0x328830u: goto label_328830;
        case 0x328834u: goto label_328834;
        case 0x328838u: goto label_328838;
        case 0x32883cu: goto label_32883c;
        case 0x328840u: goto label_328840;
        case 0x328844u: goto label_328844;
        case 0x328848u: goto label_328848;
        case 0x32884cu: goto label_32884c;
        case 0x328850u: goto label_328850;
        case 0x328854u: goto label_328854;
        case 0x328858u: goto label_328858;
        case 0x32885cu: goto label_32885c;
        case 0x328860u: goto label_328860;
        case 0x328864u: goto label_328864;
        case 0x328868u: goto label_328868;
        case 0x32886cu: goto label_32886c;
        case 0x328870u: goto label_328870;
        case 0x328874u: goto label_328874;
        case 0x328878u: goto label_328878;
        case 0x32887cu: goto label_32887c;
        case 0x328880u: goto label_328880;
        case 0x328884u: goto label_328884;
        case 0x328888u: goto label_328888;
        case 0x32888cu: goto label_32888c;
        case 0x328890u: goto label_328890;
        case 0x328894u: goto label_328894;
        case 0x328898u: goto label_328898;
        case 0x32889cu: goto label_32889c;
        case 0x3288a0u: goto label_3288a0;
        case 0x3288a4u: goto label_3288a4;
        case 0x3288a8u: goto label_3288a8;
        case 0x3288acu: goto label_3288ac;
        case 0x3288b0u: goto label_3288b0;
        case 0x3288b4u: goto label_3288b4;
        case 0x3288b8u: goto label_3288b8;
        case 0x3288bcu: goto label_3288bc;
        case 0x3288c0u: goto label_3288c0;
        case 0x3288c4u: goto label_3288c4;
        case 0x3288c8u: goto label_3288c8;
        case 0x3288ccu: goto label_3288cc;
        case 0x3288d0u: goto label_3288d0;
        case 0x3288d4u: goto label_3288d4;
        case 0x3288d8u: goto label_3288d8;
        case 0x3288dcu: goto label_3288dc;
        case 0x3288e0u: goto label_3288e0;
        case 0x3288e4u: goto label_3288e4;
        case 0x3288e8u: goto label_3288e8;
        case 0x3288ecu: goto label_3288ec;
        case 0x3288f0u: goto label_3288f0;
        case 0x3288f4u: goto label_3288f4;
        case 0x3288f8u: goto label_3288f8;
        case 0x3288fcu: goto label_3288fc;
        case 0x328900u: goto label_328900;
        case 0x328904u: goto label_328904;
        case 0x328908u: goto label_328908;
        case 0x32890cu: goto label_32890c;
        case 0x328910u: goto label_328910;
        case 0x328914u: goto label_328914;
        case 0x328918u: goto label_328918;
        case 0x32891cu: goto label_32891c;
        case 0x328920u: goto label_328920;
        case 0x328924u: goto label_328924;
        case 0x328928u: goto label_328928;
        case 0x32892cu: goto label_32892c;
        case 0x328930u: goto label_328930;
        case 0x328934u: goto label_328934;
        case 0x328938u: goto label_328938;
        case 0x32893cu: goto label_32893c;
        case 0x328940u: goto label_328940;
        case 0x328944u: goto label_328944;
        case 0x328948u: goto label_328948;
        case 0x32894cu: goto label_32894c;
        case 0x328950u: goto label_328950;
        case 0x328954u: goto label_328954;
        case 0x328958u: goto label_328958;
        case 0x32895cu: goto label_32895c;
        case 0x328960u: goto label_328960;
        case 0x328964u: goto label_328964;
        case 0x328968u: goto label_328968;
        case 0x32896cu: goto label_32896c;
        case 0x328970u: goto label_328970;
        case 0x328974u: goto label_328974;
        case 0x328978u: goto label_328978;
        case 0x32897cu: goto label_32897c;
        case 0x328980u: goto label_328980;
        case 0x328984u: goto label_328984;
        case 0x328988u: goto label_328988;
        case 0x32898cu: goto label_32898c;
        case 0x328990u: goto label_328990;
        case 0x328994u: goto label_328994;
        case 0x328998u: goto label_328998;
        case 0x32899cu: goto label_32899c;
        case 0x3289a0u: goto label_3289a0;
        case 0x3289a4u: goto label_3289a4;
        case 0x3289a8u: goto label_3289a8;
        case 0x3289acu: goto label_3289ac;
        case 0x3289b0u: goto label_3289b0;
        case 0x3289b4u: goto label_3289b4;
        case 0x3289b8u: goto label_3289b8;
        case 0x3289bcu: goto label_3289bc;
        case 0x3289c0u: goto label_3289c0;
        case 0x3289c4u: goto label_3289c4;
        case 0x3289c8u: goto label_3289c8;
        case 0x3289ccu: goto label_3289cc;
        case 0x3289d0u: goto label_3289d0;
        case 0x3289d4u: goto label_3289d4;
        case 0x3289d8u: goto label_3289d8;
        case 0x3289dcu: goto label_3289dc;
        case 0x3289e0u: goto label_3289e0;
        case 0x3289e4u: goto label_3289e4;
        case 0x3289e8u: goto label_3289e8;
        case 0x3289ecu: goto label_3289ec;
        case 0x3289f0u: goto label_3289f0;
        case 0x3289f4u: goto label_3289f4;
        case 0x3289f8u: goto label_3289f8;
        case 0x3289fcu: goto label_3289fc;
        case 0x328a00u: goto label_328a00;
        case 0x328a04u: goto label_328a04;
        case 0x328a08u: goto label_328a08;
        case 0x328a0cu: goto label_328a0c;
        case 0x328a10u: goto label_328a10;
        case 0x328a14u: goto label_328a14;
        case 0x328a18u: goto label_328a18;
        case 0x328a1cu: goto label_328a1c;
        case 0x328a20u: goto label_328a20;
        case 0x328a24u: goto label_328a24;
        case 0x328a28u: goto label_328a28;
        case 0x328a2cu: goto label_328a2c;
        case 0x328a30u: goto label_328a30;
        case 0x328a34u: goto label_328a34;
        case 0x328a38u: goto label_328a38;
        case 0x328a3cu: goto label_328a3c;
        case 0x328a40u: goto label_328a40;
        case 0x328a44u: goto label_328a44;
        case 0x328a48u: goto label_328a48;
        case 0x328a4cu: goto label_328a4c;
        case 0x328a50u: goto label_328a50;
        case 0x328a54u: goto label_328a54;
        case 0x328a58u: goto label_328a58;
        case 0x328a5cu: goto label_328a5c;
        case 0x328a60u: goto label_328a60;
        case 0x328a64u: goto label_328a64;
        case 0x328a68u: goto label_328a68;
        case 0x328a6cu: goto label_328a6c;
        case 0x328a70u: goto label_328a70;
        case 0x328a74u: goto label_328a74;
        case 0x328a78u: goto label_328a78;
        case 0x328a7cu: goto label_328a7c;
        case 0x328a80u: goto label_328a80;
        case 0x328a84u: goto label_328a84;
        case 0x328a88u: goto label_328a88;
        case 0x328a8cu: goto label_328a8c;
        case 0x328a90u: goto label_328a90;
        case 0x328a94u: goto label_328a94;
        case 0x328a98u: goto label_328a98;
        case 0x328a9cu: goto label_328a9c;
        case 0x328aa0u: goto label_328aa0;
        case 0x328aa4u: goto label_328aa4;
        case 0x328aa8u: goto label_328aa8;
        case 0x328aacu: goto label_328aac;
        case 0x328ab0u: goto label_328ab0;
        case 0x328ab4u: goto label_328ab4;
        case 0x328ab8u: goto label_328ab8;
        case 0x328abcu: goto label_328abc;
        case 0x328ac0u: goto label_328ac0;
        case 0x328ac4u: goto label_328ac4;
        case 0x328ac8u: goto label_328ac8;
        case 0x328accu: goto label_328acc;
        case 0x328ad0u: goto label_328ad0;
        case 0x328ad4u: goto label_328ad4;
        case 0x328ad8u: goto label_328ad8;
        case 0x328adcu: goto label_328adc;
        default: break;
    }

    ctx->pc = 0x328760u;

label_328760:
    // 0x328760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_328764:
    // 0x328764: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x328764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_328768:
    // 0x328768: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x328768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_32876c:
    // 0x32876c: 0x24842aa8  addiu       $a0, $a0, 0x2AA8
    ctx->pc = 0x32876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10920));
label_328770:
    // 0x328770: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x328770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_328774:
    // 0x328774: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x328774u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
label_328778:
    // 0x328778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32877c:
    // 0x32877c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_328780:
    // 0x328780: 0x26508be8  addiu       $s0, $s2, -0x7418
    ctx->pc = 0x328780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937576));
label_328784:
    // 0x328784: 0x8e458be8  lw          $a1, -0x7418($s2)
    ctx->pc = 0x328784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937576)));
label_328788:
    // 0x328788: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x328788u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32878c:
    // 0x32878c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x32878cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328790:
    // 0x328790: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x328790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328794:
    // 0x328794: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x328794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_328798:
    // 0x328798: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x328798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_32879c:
    // 0x32879c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x32879cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3287a0:
    // 0x3287a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3287a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3287a4:
    // 0x3287a4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3287a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3287a8:
    // 0x3287a8: 0xc0c8edc  jal         func_323B70
label_3287ac:
    if (ctx->pc == 0x3287ACu) {
        ctx->pc = 0x3287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287A8u;
        // 0x3287ac: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287B0u;
        goto label_3287b0;
    }
    ctx->pc = 0x3287A8u;
    SET_GPR_U32(ctx, 31, 0x3287B0u);
    ctx->pc = 0x3287ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287A8u;
    // 0x3287ac: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323B70u, 0x3287A8u, 0x3287B0u)) {
        return;
    }
    ctx->pc = 0x3287B0u;
label_3287b0:
    // 0x3287b0: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x3287b0u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_3287b4:
    // 0x3287b4: 0x40f  sync.p
    ctx->pc = 0x3287b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3287b8:
    // 0x3287b8: 0x8e518be8  lw          $s1, -0x7418($s2)
    ctx->pc = 0x3287b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937576)));
label_3287bc:
    // 0x3287bc: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3287bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3287c0:
    // 0x3287c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3287c4:
    if (ctx->pc == 0x3287C4u) {
        ctx->pc = 0x3287C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C0u;
        // 0x3287c4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287C8u;
        goto label_3287c8;
    }
    ctx->pc = 0x3287C0u;
    {
        const bool branch_taken_0x3287c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3287C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287C0u;
        // 0x3287c4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287c0) {
            ctx->pc = 0x3287DCu;
            goto label_3287dc;
        }
    }
    ctx->pc = 0x3287C8u;
label_3287c8:
    // 0x3287c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3287c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3287cc:
    // 0x3287cc: 0xc0c8edc  jal         func_323B70
label_3287d0:
    if (ctx->pc == 0x3287D0u) {
        ctx->pc = 0x3287D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287CCu;
        // 0x3287d0: 0x24842ae0  addiu       $a0, $a0, 0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287D4u;
        goto label_3287d4;
    }
    ctx->pc = 0x3287CCu;
    SET_GPR_U32(ctx, 31, 0x3287D4u);
    ctx->pc = 0x3287D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287CCu;
    // 0x3287d0: 0x24842ae0  addiu       $a0, $a0, 0x2AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323B70u, 0x3287CCu, 0x3287D4u)) {
        return;
    }
    ctx->pc = 0x3287D4u;
label_3287d4:
    // 0x3287d4: 0xc0c9cc4  jal         func_327310
label_3287d8:
    if (ctx->pc == 0x3287D8u) {
        ctx->pc = 0x3287D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287D4u;
        // 0x3287d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287DCu;
        goto label_3287dc;
    }
    ctx->pc = 0x3287D4u;
    SET_GPR_U32(ctx, 31, 0x3287DCu);
    ctx->pc = 0x3287D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3287D4u;
    // 0x3287d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327310u, 0x3287D4u, 0x3287DCu)) {
        return;
    }
    ctx->pc = 0x3287DCu;
label_3287dc:
    // 0x3287dc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3287dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3287e0:
    // 0x3287e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3287e4:
    if (ctx->pc == 0x3287E4u) {
        ctx->pc = 0x3287E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287E0u;
        // 0x3287e4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3287E8u;
        goto label_3287e8;
    }
    ctx->pc = 0x3287E0u;
    {
        const bool branch_taken_0x3287e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3287E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3287E0u;
        // 0x3287e4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3287e0) {
            ctx->pc = 0x328818u;
            goto label_328818;
        }
    }
    ctx->pc = 0x3287E8u;
label_3287e8:
    // 0x3287e8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3287e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3287ec:
    // 0x3287ec: 0x0  nop
    ctx->pc = 0x3287ecu;
    // NOP
label_3287f0:
    // 0x3287f0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3287f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3287f4:
    // 0x3287f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3287f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3287f8:
    // 0x3287f8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3287f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3287fc:
    // 0x3287fc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3287fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_328800:
    // 0x328800: 0xc0ca1c4  jal         func_328710
label_328804:
    if (ctx->pc == 0x328804u) {
        ctx->pc = 0x328804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328800u;
        // 0x328804: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328808u;
        goto label_328808;
    }
    ctx->pc = 0x328800u;
    SET_GPR_U32(ctx, 31, 0x328808u);
    ctx->pc = 0x328804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328800u;
    // 0x328804: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328710u, 0x328800u, 0x328808u)) {
        return;
    }
    ctx->pc = 0x328808u;
label_328808:
    // 0x328808: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x328808u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_32880c:
    // 0x32880c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x32880cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_328810:
    // 0x328810: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_328814:
    if (ctx->pc == 0x328814u) {
        ctx->pc = 0x328814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328810u;
        // 0x328814: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328818u;
        goto label_328818;
    }
    ctx->pc = 0x328810u;
    {
        const bool branch_taken_0x328810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328810) {
            ctx->pc = 0x328814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328810u;
            // 0x328814: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3287F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3287f0;
        }
    }
    ctx->pc = 0x328818u;
label_328818:
    // 0x328818: 0x26508be8  addiu       $s0, $s2, -0x7418
    ctx->pc = 0x328818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937576));
label_32881c:
    // 0x32881c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_328820:
    // 0x328820: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x328820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_328824:
    // 0x328824: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x328824u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_328828:
    // 0x328828: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_32882c:
    if (ctx->pc == 0x32882Cu) {
        ctx->pc = 0x32882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328828u;
        // 0x32882c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328830u;
        goto label_328830;
    }
    ctx->pc = 0x328828u;
    {
        const bool branch_taken_0x328828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328828u;
        // 0x32882c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x328828) {
            ctx->pc = 0x328848u;
            goto label_328848;
        }
    }
    ctx->pc = 0x328830u;
label_328830:
    // 0x328830: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x328830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_328834:
    // 0x328834: 0xc0c8edc  jal         func_323B70
label_328838:
    if (ctx->pc == 0x328838u) {
        ctx->pc = 0x328838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328834u;
        // 0x328838: 0x24842af8  addiu       $a0, $a0, 0x2AF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32883Cu;
        goto label_32883c;
    }
    ctx->pc = 0x328834u;
    SET_GPR_U32(ctx, 31, 0x32883Cu);
    ctx->pc = 0x328838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328834u;
    // 0x328838: 0x24842af8  addiu       $a0, $a0, 0x2AF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323B70u, 0x328834u, 0x32883Cu)) {
        return;
    }
    ctx->pc = 0x32883Cu;
label_32883c:
    // 0x32883c: 0xc0c9cc4  jal         func_327310
label_328840:
    if (ctx->pc == 0x328840u) {
        ctx->pc = 0x328840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32883Cu;
        // 0x328840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328844u;
        goto label_328844;
    }
    ctx->pc = 0x32883Cu;
    SET_GPR_U32(ctx, 31, 0x328844u);
    ctx->pc = 0x328840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32883Cu;
    // 0x328840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327310u, 0x32883Cu, 0x328844u)) {
        return;
    }
    ctx->pc = 0x328844u;
label_328844:
    // 0x328844: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x328844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_328848:
    // 0x328848: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_32884c:
    if (ctx->pc == 0x32884Cu) {
        ctx->pc = 0x32884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328848u;
        // 0x32884c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328850u;
        goto label_328850;
    }
    ctx->pc = 0x328848u;
    {
        const bool branch_taken_0x328848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328848u;
        // 0x32884c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328848) {
            ctx->pc = 0x328880u;
            goto label_328880;
        }
    }
    ctx->pc = 0x328850u;
label_328850:
    // 0x328850: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x328850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328854:
    // 0x328854: 0x0  nop
    ctx->pc = 0x328854u;
    // NOP
label_328858:
    // 0x328858: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x328858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_32885c:
    // 0x32885c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x32885cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_328860:
    // 0x328860: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x328860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328864:
    // 0x328864: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x328864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_328868:
    // 0x328868: 0xc0ca1c4  jal         func_328710
label_32886c:
    if (ctx->pc == 0x32886Cu) {
        ctx->pc = 0x32886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328868u;
        // 0x32886c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328870u;
        goto label_328870;
    }
    ctx->pc = 0x328868u;
    SET_GPR_U32(ctx, 31, 0x328870u);
    ctx->pc = 0x32886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328868u;
    // 0x32886c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328710u, 0x328868u, 0x328870u)) {
        return;
    }
    ctx->pc = 0x328870u;
label_328870:
    // 0x328870: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x328870u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_328874:
    // 0x328874: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x328874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_328878:
    // 0x328878: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_32887c:
    if (ctx->pc == 0x32887Cu) {
        ctx->pc = 0x32887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328878u;
        // 0x32887c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328880u;
        goto label_328880;
    }
    ctx->pc = 0x328878u;
    {
        const bool branch_taken_0x328878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328878) {
            ctx->pc = 0x32887Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328878u;
            // 0x32887c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328858;
        }
    }
    ctx->pc = 0x328880u;
label_328880:
    // 0x328880: 0x26508be8  addiu       $s0, $s2, -0x7418
    ctx->pc = 0x328880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937576));
label_328884:
    // 0x328884: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x328884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_328888:
    // 0x328888: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x328888u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_32888c:
    // 0x32888c: 0x40f  sync.p
    ctx->pc = 0x32888cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_328890:
    // 0x328890: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328894:
    // 0x328894: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_328898:
    if (ctx->pc == 0x328898u) {
        ctx->pc = 0x328898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328894u;
        // 0x328898: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32889Cu;
        goto label_32889c;
    }
    ctx->pc = 0x328894u;
    {
        const bool branch_taken_0x328894 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x328894) {
            ctx->pc = 0x328898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328894u;
            // 0x328898: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3288FCu;
            goto label_3288fc;
        }
    }
    ctx->pc = 0x32889Cu;
label_32889c:
    // 0x32889c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x32889cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3288a0:
    // 0x3288a0: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3288a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3288a4:
    // 0x3288a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3288a8:
    if (ctx->pc == 0x3288A8u) {
        ctx->pc = 0x3288A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288A4u;
        // 0x3288a8: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288ACu;
        goto label_3288ac;
    }
    ctx->pc = 0x3288A4u;
    {
        const bool branch_taken_0x3288a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3288A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288A4u;
        // 0x3288a8: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288a4) {
            ctx->pc = 0x3288C4u;
            goto label_3288c4;
        }
    }
    ctx->pc = 0x3288ACu;
label_3288ac:
    // 0x3288ac: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x3288acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_3288b0:
    // 0x3288b0: 0xc0c8edc  jal         func_323B70
label_3288b4:
    if (ctx->pc == 0x3288B4u) {
        ctx->pc = 0x3288B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288B0u;
        // 0x3288b4: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288B8u;
        goto label_3288b8;
    }
    ctx->pc = 0x3288B0u;
    SET_GPR_U32(ctx, 31, 0x3288B8u);
    ctx->pc = 0x3288B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288B0u;
    // 0x3288b4: 0x24842b10  addiu       $a0, $a0, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323B70u, 0x3288B0u, 0x3288B8u)) {
        return;
    }
    ctx->pc = 0x3288B8u;
label_3288b8:
    // 0x3288b8: 0xc0c9cc4  jal         func_327310
label_3288bc:
    if (ctx->pc == 0x3288BCu) {
        ctx->pc = 0x3288BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288B8u;
        // 0x3288bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288C0u;
        goto label_3288c0;
    }
    ctx->pc = 0x3288B8u;
    SET_GPR_U32(ctx, 31, 0x3288C0u);
    ctx->pc = 0x3288BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288B8u;
    // 0x3288bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327310u, 0x3288B8u, 0x3288C0u)) {
        return;
    }
    ctx->pc = 0x3288C0u;
label_3288c0:
    // 0x3288c0: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3288c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3288c4:
    // 0x3288c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3288c8:
    if (ctx->pc == 0x3288C8u) {
        ctx->pc = 0x3288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288C4u;
        // 0x3288c8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288CCu;
        goto label_3288cc;
    }
    ctx->pc = 0x3288C4u;
    {
        const bool branch_taken_0x3288c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288C4u;
        // 0x3288c8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288c4) {
            ctx->pc = 0x3288F8u;
            goto label_3288f8;
        }
    }
    ctx->pc = 0x3288CCu;
label_3288cc:
    // 0x3288cc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3288ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3288d0:
    // 0x3288d0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3288d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3288d4:
    // 0x3288d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3288d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3288d8:
    // 0x3288d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3288d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3288dc:
    // 0x3288dc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3288dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3288e0:
    // 0x3288e0: 0xc0ca1c4  jal         func_328710
label_3288e4:
    if (ctx->pc == 0x3288E4u) {
        ctx->pc = 0x3288E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288E0u;
        // 0x3288e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288E8u;
        goto label_3288e8;
    }
    ctx->pc = 0x3288E0u;
    SET_GPR_U32(ctx, 31, 0x3288E8u);
    ctx->pc = 0x3288E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3288E0u;
    // 0x3288e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328710u, 0x3288E0u, 0x3288E8u)) {
        return;
    }
    ctx->pc = 0x3288E8u;
label_3288e8:
    // 0x3288e8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3288e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3288ec:
    // 0x3288ec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3288ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3288f0:
    // 0x3288f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3288f4:
    if (ctx->pc == 0x3288F4u) {
        ctx->pc = 0x3288F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F0u;
        // 0x3288f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3288F8u;
        goto label_3288f8;
    }
    ctx->pc = 0x3288F0u;
    {
        const bool branch_taken_0x3288f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3288f0) {
            ctx->pc = 0x3288F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3288F0u;
            // 0x3288f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3288D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3288d0;
        }
    }
    ctx->pc = 0x3288F8u;
label_3288f8:
    // 0x3288f8: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x3288f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3288fc:
    // 0x3288fc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3288fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_328900:
    // 0x328900: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_328904:
    if (ctx->pc == 0x328904u) {
        ctx->pc = 0x328904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328900u;
        // 0x328904: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328908u;
        goto label_328908;
    }
    ctx->pc = 0x328900u;
    {
        const bool branch_taken_0x328900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328900u;
        // 0x328904: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328900) {
            ctx->pc = 0x328938u;
            goto label_328938;
        }
    }
    ctx->pc = 0x328908u;
label_328908:
    // 0x328908: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x328908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_32890c:
    // 0x32890c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x32890cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_328910:
    // 0x328910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328914:
    // 0x328914: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x328914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328918:
    // 0x328918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x328918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32891c:
    // 0x32891c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32891cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328920:
    // 0x328920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x328920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328924:
    // 0x328924: 0xc0ca1c4  jal         func_328710
label_328928:
    if (ctx->pc == 0x328928u) {
        ctx->pc = 0x328928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328924u;
        // 0x328928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32892Cu;
        goto label_32892c;
    }
    ctx->pc = 0x328924u;
    SET_GPR_U32(ctx, 31, 0x32892Cu);
    ctx->pc = 0x328928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328924u;
    // 0x328928: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328710u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328710u, 0x328924u, 0x32892Cu)) {
        return;
    }
    ctx->pc = 0x32892Cu;
label_32892c:
    // 0x32892c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x32892cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_328930:
    // 0x328930: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_328934:
    if (ctx->pc == 0x328934u) {
        ctx->pc = 0x328934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328930u;
        // 0x328934: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328938u;
        goto label_328938;
    }
    ctx->pc = 0x328930u;
    {
        const bool branch_taken_0x328930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328930u;
        // 0x328934: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328930) {
            ctx->pc = 0x328910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328910;
        }
    }
    ctx->pc = 0x328938u;
label_328938:
    // 0x328938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x328938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32893c:
    // 0x32893c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x32893cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_328940:
    // 0x328940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x328940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_328944:
    // 0x328944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x328944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328948:
    // 0x328948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32894c:
    // 0x32894c: 0x3e00008  jr          $ra
label_328950:
    if (ctx->pc == 0x328950u) {
        ctx->pc = 0x328950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32894Cu;
        // 0x328950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328954u;
        goto label_328954;
    }
    ctx->pc = 0x32894Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32894Cu;
        // 0x328950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32894Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328954u;
label_328954:
    // 0x328954: 0x0  nop
    ctx->pc = 0x328954u;
    // NOP
label_328958:
    // 0x328958: 0x0  nop
    ctx->pc = 0x328958u;
    // NOP
label_32895c:
    // 0x32895c: 0x0  nop
    ctx->pc = 0x32895cu;
    // NOP
label_328960:
    // 0x328960: 0x0  nop
    ctx->pc = 0x328960u;
    // NOP
label_328964:
    // 0x328964: 0x0  nop
    ctx->pc = 0x328964u;
    // NOP
label_328968:
    // 0x328968: 0x0  nop
    ctx->pc = 0x328968u;
    // NOP
label_32896c:
    // 0x32896c: 0x0  nop
    ctx->pc = 0x32896cu;
    // NOP
label_328970:
    // 0x328970: 0x0  nop
    ctx->pc = 0x328970u;
    // NOP
label_328974:
    // 0x328974: 0x0  nop
    ctx->pc = 0x328974u;
    // NOP
label_328978:
    // 0x328978: 0x0  nop
    ctx->pc = 0x328978u;
    // NOP
label_32897c:
    // 0x32897c: 0x0  nop
    ctx->pc = 0x32897cu;
    // NOP
label_328980:
    // 0x328980: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x328980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_328984:
    // 0x328984: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x328984u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_328988:
    // 0x328988: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x328988u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_32898c:
    // 0x32898c: 0x20f809  jalr        $at
label_328990:
    if (ctx->pc == 0x328990u) {
        ctx->pc = 0x328990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32898Cu;
        // 0x328990: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328994u;
        goto label_328994;
    }
    ctx->pc = 0x32898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x328994u);
        ctx->pc = 0x328990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32898Cu;
        // 0x328990: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32898Cu, 0x328994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328994u;
label_328994:
    // 0x328994: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x328994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_328998:
    // 0x328998: 0xc  syscall     0
    ctx->pc = 0x328998u;
    ctx->pc = 0x32899Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_32899c:
    // 0x32899c: 0x0  nop
    ctx->pc = 0x32899cu;
    // NOP
label_3289a0:
    // 0x3289a0: 0x0  nop
    ctx->pc = 0x3289a0u;
    // NOP
label_3289a4:
    // 0x3289a4: 0x0  nop
    ctx->pc = 0x3289a4u;
    // NOP
label_3289a8:
    // 0x3289a8: 0x0  nop
    ctx->pc = 0x3289a8u;
    // NOP
label_3289ac:
    // 0x3289ac: 0x0  nop
    ctx->pc = 0x3289acu;
    // NOP
label_3289b0:
    // 0x3289b0: 0x0  nop
    ctx->pc = 0x3289b0u;
    // NOP
label_3289b4:
    // 0x3289b4: 0x0  nop
    ctx->pc = 0x3289b4u;
    // NOP
label_3289b8:
    // 0x3289b8: 0x0  nop
    ctx->pc = 0x3289b8u;
    // NOP
label_3289bc:
    // 0x3289bc: 0x0  nop
    ctx->pc = 0x3289bcu;
    // NOP
label_3289c0:
    // 0x3289c0: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x3289c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_3289c4:
    // 0x3289c4: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x3289c4u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_3289c8:
    // 0x3289c8: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x3289c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_3289cc:
    // 0x3289cc: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x3289ccu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_3289d0:
    // 0x3289d0: 0x40f  sync.p
    ctx->pc = 0x3289d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3289d4:
    // 0x3289d4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3289d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3289d8:
    // 0x3289d8: 0x8c420fa8  lw          $v0, 0xFA8($v0)
    ctx->pc = 0x3289d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4008)));
label_3289dc:
    // 0x3289dc: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x3289dcu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_3289e0:
    // 0x3289e0: 0x40f  sync.p
    ctx->pc = 0x3289e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3289e4:
    // 0x3289e4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3289e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3289e8:
    // 0x3289e8: 0xdc420f80  ld          $v0, 0xF80($v0)
    ctx->pc = 0x3289e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3968)));
label_3289ec:
    // 0x3289ec: 0x400011  mthi        $v0
    ctx->pc = 0x3289ecu;
    ctx->hi = GPR_U64(ctx, 2);
label_3289f0:
    // 0x3289f0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3289f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3289f4:
    // 0x3289f4: 0xdc420f88  ld          $v0, 0xF88($v0)
    ctx->pc = 0x3289f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3976)));
label_3289f8:
    // 0x3289f8: 0x70400011  mthi1       $v0
    ctx->pc = 0x3289f8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_3289fc:
    // 0x3289fc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3289fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_328a00:
    // 0x328a00: 0xdc420f90  ld          $v0, 0xF90($v0)
    ctx->pc = 0x328a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3984)));
label_328a04:
    // 0x328a04: 0x400013  mtlo        $v0
    ctx->pc = 0x328a04u;
    ctx->lo = GPR_U64(ctx, 2);
label_328a08:
    // 0x328a08: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x328a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_328a0c:
    // 0x328a0c: 0xdc420f98  ld          $v0, 0xF98($v0)
    ctx->pc = 0x328a0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3992)));
label_328a10:
    // 0x328a10: 0x70400013  mtlo1       $v0
    ctx->pc = 0x328a10u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_328a14:
    // 0x328a14: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x328a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_328a18:
    // 0x328a18: 0xdc420fa0  ld          $v0, 0xFA0($v0)
    ctx->pc = 0x328a18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4000)));
label_328a1c:
    // 0x328a1c: 0x400029  mtsa        $v0
    ctx->pc = 0x328a1cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_328a20:
    // 0x328a20: 0x40f  sync.p
    ctx->pc = 0x328a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_328a24:
    // 0x328a24: 0x3c1a0073  lui         $k0, 0x73
    ctx->pc = 0x328a24u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)115 << 16));
label_328a28:
    // 0x328a28: 0x275a0d80  addiu       $k0, $k0, 0xD80
    ctx->pc = 0x328a28u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 3456));
label_328a2c:
    // 0x328a2c: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x328a2cu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_328a30:
    // 0x328a30: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x328a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_328a34:
    // 0x328a34: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x328a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_328a38:
    // 0x328a38: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x328a38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_328a3c:
    // 0x328a3c: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x328a3cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_328a40:
    // 0x328a40: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x328a40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_328a44:
    // 0x328a44: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x328a44u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_328a48:
    // 0x328a48: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x328a48u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_328a4c:
    // 0x328a4c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x328a4cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_328a50:
    // 0x328a50: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x328a50u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_328a54:
    // 0x328a54: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x328a54u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_328a58:
    // 0x328a58: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x328a58u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_328a5c:
    // 0x328a5c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x328a5cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_328a60:
    // 0x328a60: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x328a60u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_328a64:
    // 0x328a64: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x328a64u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_328a68:
    // 0x328a68: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x328a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_328a6c:
    // 0x328a6c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x328a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_328a70:
    // 0x328a70: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x328a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_328a74:
    // 0x328a74: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x328a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_328a78:
    // 0x328a78: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x328a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_328a7c:
    // 0x328a7c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x328a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_328a80:
    // 0x328a80: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x328a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_328a84:
    // 0x328a84: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x328a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_328a88:
    // 0x328a88: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x328a88u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_328a8c:
    // 0x328a8c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x328a8cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_328a90:
    // 0x328a90: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x328a90u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_328a94:
    // 0x328a94: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x328a94u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_328a98:
    // 0x328a98: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x328a98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_328a9c:
    // 0x328a9c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x328a9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_328aa0:
    // 0x328aa0: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x328aa0u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_328aa4:
    // 0x328aa4: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x328aa4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_328aa8:
    // 0x328aa8: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x328aa8u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_328aac:
    // 0x328aac: 0x40f  sync.p
    ctx->pc = 0x328aacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_328ab0:
    // 0x328ab0: 0x42000018  eret
    ctx->pc = 0x328ab0u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_328ab4:
    // 0x328ab4: 0x0  nop
    ctx->pc = 0x328ab4u;
    // NOP
label_328ab8:
    // 0x328ab8: 0x0  nop
    ctx->pc = 0x328ab8u;
    // NOP
label_328abc:
    // 0x328abc: 0x0  nop
    ctx->pc = 0x328abcu;
    // NOP
label_328ac0:
    // 0x328ac0: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x328ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_328ac4:
    // 0x328ac4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x328ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_328ac8:
    // 0x328ac8: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x328ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_328acc:
    // 0x328acc: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x328accu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_328ad0:
    // 0x328ad0: 0x20f809  jalr        $at
label_328ad4:
    if (ctx->pc == 0x328AD4u) {
        ctx->pc = 0x328AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AD0u;
        // 0x328ad4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328AD8u;
        goto label_328ad8;
    }
    ctx->pc = 0x328AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x328AD8u);
        ctx->pc = 0x328AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328AD0u;
        // 0x328ad4: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328AD0u, 0x328AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328AD8u;
label_328ad8:
    // 0x328ad8: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x328ad8u;
    runtime->handleBreak(rdram, ctx);
label_328adc:
    // 0x328adc: 0x0  nop
    ctx->pc = 0x328adcu;
    // NOP
    ctx->pc = 0x328ae0u;
}
