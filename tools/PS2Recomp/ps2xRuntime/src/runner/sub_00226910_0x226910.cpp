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

// Function: sub_00226910
// Address: 0x226910 - 0x226ae0
void sub_00226910_0x226910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226910_0x226910");
#endif

    switch (ctx->pc) {
        case 0x226910u: goto label_226910;
        case 0x226914u: goto label_226914;
        case 0x226918u: goto label_226918;
        case 0x22691cu: goto label_22691c;
        case 0x226920u: goto label_226920;
        case 0x226924u: goto label_226924;
        case 0x226928u: goto label_226928;
        case 0x22692cu: goto label_22692c;
        case 0x226930u: goto label_226930;
        case 0x226934u: goto label_226934;
        case 0x226938u: goto label_226938;
        case 0x22693cu: goto label_22693c;
        case 0x226940u: goto label_226940;
        case 0x226944u: goto label_226944;
        case 0x226948u: goto label_226948;
        case 0x22694cu: goto label_22694c;
        case 0x226950u: goto label_226950;
        case 0x226954u: goto label_226954;
        case 0x226958u: goto label_226958;
        case 0x22695cu: goto label_22695c;
        case 0x226960u: goto label_226960;
        case 0x226964u: goto label_226964;
        case 0x226968u: goto label_226968;
        case 0x22696cu: goto label_22696c;
        case 0x226970u: goto label_226970;
        case 0x226974u: goto label_226974;
        case 0x226978u: goto label_226978;
        case 0x22697cu: goto label_22697c;
        case 0x226980u: goto label_226980;
        case 0x226984u: goto label_226984;
        case 0x226988u: goto label_226988;
        case 0x22698cu: goto label_22698c;
        case 0x226990u: goto label_226990;
        case 0x226994u: goto label_226994;
        case 0x226998u: goto label_226998;
        case 0x22699cu: goto label_22699c;
        case 0x2269a0u: goto label_2269a0;
        case 0x2269a4u: goto label_2269a4;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269acu: goto label_2269ac;
        case 0x2269b0u: goto label_2269b0;
        case 0x2269b4u: goto label_2269b4;
        case 0x2269b8u: goto label_2269b8;
        case 0x2269bcu: goto label_2269bc;
        case 0x2269c0u: goto label_2269c0;
        case 0x2269c4u: goto label_2269c4;
        case 0x2269c8u: goto label_2269c8;
        case 0x2269ccu: goto label_2269cc;
        case 0x2269d0u: goto label_2269d0;
        case 0x2269d4u: goto label_2269d4;
        case 0x2269d8u: goto label_2269d8;
        case 0x2269dcu: goto label_2269dc;
        case 0x2269e0u: goto label_2269e0;
        case 0x2269e4u: goto label_2269e4;
        case 0x2269e8u: goto label_2269e8;
        case 0x2269ecu: goto label_2269ec;
        case 0x2269f0u: goto label_2269f0;
        case 0x2269f4u: goto label_2269f4;
        case 0x2269f8u: goto label_2269f8;
        case 0x2269fcu: goto label_2269fc;
        case 0x226a00u: goto label_226a00;
        case 0x226a04u: goto label_226a04;
        case 0x226a08u: goto label_226a08;
        case 0x226a0cu: goto label_226a0c;
        case 0x226a10u: goto label_226a10;
        case 0x226a14u: goto label_226a14;
        case 0x226a18u: goto label_226a18;
        case 0x226a1cu: goto label_226a1c;
        case 0x226a20u: goto label_226a20;
        case 0x226a24u: goto label_226a24;
        case 0x226a28u: goto label_226a28;
        case 0x226a2cu: goto label_226a2c;
        case 0x226a30u: goto label_226a30;
        case 0x226a34u: goto label_226a34;
        case 0x226a38u: goto label_226a38;
        case 0x226a3cu: goto label_226a3c;
        case 0x226a40u: goto label_226a40;
        case 0x226a44u: goto label_226a44;
        case 0x226a48u: goto label_226a48;
        case 0x226a4cu: goto label_226a4c;
        case 0x226a50u: goto label_226a50;
        case 0x226a54u: goto label_226a54;
        case 0x226a58u: goto label_226a58;
        case 0x226a5cu: goto label_226a5c;
        case 0x226a60u: goto label_226a60;
        case 0x226a64u: goto label_226a64;
        case 0x226a68u: goto label_226a68;
        case 0x226a6cu: goto label_226a6c;
        case 0x226a70u: goto label_226a70;
        case 0x226a74u: goto label_226a74;
        case 0x226a78u: goto label_226a78;
        case 0x226a7cu: goto label_226a7c;
        case 0x226a80u: goto label_226a80;
        case 0x226a84u: goto label_226a84;
        case 0x226a88u: goto label_226a88;
        case 0x226a8cu: goto label_226a8c;
        case 0x226a90u: goto label_226a90;
        case 0x226a94u: goto label_226a94;
        case 0x226a98u: goto label_226a98;
        case 0x226a9cu: goto label_226a9c;
        case 0x226aa0u: goto label_226aa0;
        case 0x226aa4u: goto label_226aa4;
        case 0x226aa8u: goto label_226aa8;
        case 0x226aacu: goto label_226aac;
        case 0x226ab0u: goto label_226ab0;
        case 0x226ab4u: goto label_226ab4;
        case 0x226ab8u: goto label_226ab8;
        case 0x226abcu: goto label_226abc;
        case 0x226ac0u: goto label_226ac0;
        case 0x226ac4u: goto label_226ac4;
        case 0x226ac8u: goto label_226ac8;
        case 0x226accu: goto label_226acc;
        case 0x226ad0u: goto label_226ad0;
        case 0x226ad4u: goto label_226ad4;
        case 0x226ad8u: goto label_226ad8;
        case 0x226adcu: goto label_226adc;
        default: break;
    }

    ctx->pc = 0x226910u;

label_226910:
    // 0x226910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_226914:
    // 0x226914: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x226914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_226918:
    // 0x226918: 0xac253e90  sw          $a1, 0x3E90($at)
    ctx->pc = 0x226918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16016), GPR_U32(ctx, 5));
label_22691c:
    // 0x22691c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22691cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_226920:
    // 0x226920: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x226920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_226924:
    // 0x226924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226928:
    // 0x226928: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x226928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
label_22692c:
    // 0x22692c: 0x8c440418  lw          $a0, 0x418($v0)
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
label_226930:
    // 0x226930: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x226930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_226934:
    // 0x226934: 0x8f8583b8  lw          $a1, -0x7C48($gp)
    ctx->pc = 0x226934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935480)));
label_226938:
    // 0x226938: 0x25082da8  addiu       $t0, $t0, 0x2DA8
    ctx->pc = 0x226938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11688));
label_22693c:
    // 0x22693c: 0x8f8783bc  lw          $a3, -0x7C44($gp)
    ctx->pc = 0x22693cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935484)));
label_226940:
    // 0x226940: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x226940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_226944:
    // 0x226944: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_226948:
    // 0x226948: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22694c:
    // 0x22694c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22694cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226950:
    // 0x226950: 0xc0930ce  jal         func_24C338
label_226954:
    if (ctx->pc == 0x226954u) {
        ctx->pc = 0x226954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226950u;
        // 0x226954: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226958u;
        goto label_226958;
    }
    ctx->pc = 0x226950u;
    SET_GPR_U32(ctx, 31, 0x226958u);
    ctx->pc = 0x226954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226950u;
    // 0x226954: 0x35290018  ori         $t1, $t1, 0x18 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)24);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x226950u, 0x226958u)) {
        return;
    }
    ctx->pc = 0x226958u;
label_226958:
    // 0x226958: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x226958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_22695c:
    // 0x22695c: 0x8c843e90  lw          $a0, 0x3E90($a0)
    ctx->pc = 0x22695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16016)));
label_226960:
    // 0x226960: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x226960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_226964:
    // 0x226964: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x226964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_226968:
    // 0x226968: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x226968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_22696c:
    // 0x22696c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_226970:
    if (ctx->pc == 0x226970u) {
        ctx->pc = 0x226970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22696Cu;
        // 0x226970: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226974u;
        goto label_226974;
    }
    ctx->pc = 0x22696Cu;
    {
        const bool branch_taken_0x22696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22696Cu;
        // 0x226970: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22696c) {
            ctx->pc = 0x22697Cu;
            goto label_22697c;
        }
    }
    ctx->pc = 0x226974u;
label_226974:
    // 0x226974: 0x10000053  b           . + 4 + (0x53 << 2)
label_226978:
    if (ctx->pc == 0x226978u) {
        ctx->pc = 0x226978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226974u;
        // 0x226978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22697Cu;
        goto label_22697c;
    }
    ctx->pc = 0x226974u;
    {
        const bool branch_taken_0x226974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226974u;
        // 0x226978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226974) {
            ctx->pc = 0x226AC4u;
            goto label_226ac4;
        }
    }
    ctx->pc = 0x22697Cu;
label_22697c:
    // 0x22697c: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
label_226980:
    // 0x226980: 0x8f8583b8  lw          $a1, -0x7C48($gp)
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935480)));
label_226984:
    // 0x226984: 0x8f8783c0  lw          $a3, -0x7C40($gp)
    ctx->pc = 0x226984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935488)));
label_226988:
    // 0x226988: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x226988u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_22698c:
    // 0x22698c: 0x25082dd0  addiu       $t0, $t0, 0x2DD0
    ctx->pc = 0x22698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11728));
label_226990:
    // 0x226990: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x226990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_226994:
    // 0x226994: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x226994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_226998:
    // 0x226998: 0xc0930ce  jal         func_24C338
label_22699c:
    if (ctx->pc == 0x22699Cu) {
        ctx->pc = 0x22699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226998u;
        // 0x22699c: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269A0u;
        goto label_2269a0;
    }
    ctx->pc = 0x226998u;
    SET_GPR_U32(ctx, 31, 0x2269A0u);
    ctx->pc = 0x22699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226998u;
    // 0x22699c: 0x35290406  ori         $t1, $t1, 0x406 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1030);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x226998u, 0x2269A0u)) {
        return;
    }
    ctx->pc = 0x2269A0u;
label_2269a0:
    // 0x2269a0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2269a4:
    // 0x2269a4: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x2269a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_2269a8:
    // 0x2269a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2269a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2269ac:
    // 0x2269ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2269b0:
    if (ctx->pc == 0x2269B0u) {
        ctx->pc = 0x2269B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269ACu;
        // 0x2269b0: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269B4u;
        goto label_2269b4;
    }
    ctx->pc = 0x2269ACu;
    {
        const bool branch_taken_0x2269ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2269B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269ACu;
        // 0x2269b0: 0xac620218  sw          $v0, 0x218($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269ac) {
            ctx->pc = 0x2269BCu;
            goto label_2269bc;
        }
    }
    ctx->pc = 0x2269B4u;
label_2269b4:
    // 0x2269b4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2269b8:
    if (ctx->pc == 0x2269B8u) {
        ctx->pc = 0x2269B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269B4u;
        // 0x2269b8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269BCu;
        goto label_2269bc;
    }
    ctx->pc = 0x2269B4u;
    {
        const bool branch_taken_0x2269b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269B4u;
        // 0x2269b8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269b4) {
            ctx->pc = 0x226AA8u;
            goto label_226aa8;
        }
    }
    ctx->pc = 0x2269BCu;
label_2269bc:
    // 0x2269bc: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x2269bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2269c0:
    // 0x2269c0: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_2269c4:
    // 0x2269c4: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x2269c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
label_2269c8:
    // 0x2269c8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2269cc:
    // 0x2269cc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2269ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2269d0:
    // 0x2269d0: 0x40f809  jalr        $v0
label_2269d4:
    if (ctx->pc == 0x2269D4u) {
        ctx->pc = 0x2269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269D0u;
        // 0x2269d4: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269D8u;
        goto label_2269d8;
    }
    ctx->pc = 0x2269D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2269D8u);
        ctx->pc = 0x2269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269D0u;
        // 0x2269d4: 0x34a50406  ori         $a1, $a1, 0x406 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1030);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269D0u, 0x2269D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2269D8u;
label_2269d8:
    // 0x2269d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2269d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2269dc:
    // 0x2269dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2269dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2269e0:
    // 0x2269e0: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x2269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_2269e4:
    // 0x2269e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2269e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2269e8:
    // 0x2269e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2269ec:
    if (ctx->pc == 0x2269ECu) {
        ctx->pc = 0x2269ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269E8u;
        // 0x2269ec: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269F0u;
        goto label_2269f0;
    }
    ctx->pc = 0x2269E8u;
    {
        const bool branch_taken_0x2269e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2269ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269E8u;
        // 0x2269ec: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269e8) {
            ctx->pc = 0x2269F8u;
            goto label_2269f8;
        }
    }
    ctx->pc = 0x2269F0u;
label_2269f0:
    // 0x2269f0: 0x10000026  b           . + 4 + (0x26 << 2)
label_2269f4:
    if (ctx->pc == 0x2269F4u) {
        ctx->pc = 0x2269F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269F0u;
        // 0x2269f4: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269F8u;
        goto label_2269f8;
    }
    ctx->pc = 0x2269F0u;
    {
        const bool branch_taken_0x2269f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269F0u;
        // 0x2269f4: 0x8c440218  lw          $a0, 0x218($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269f0) {
            ctx->pc = 0x226A8Cu;
            goto label_226a8c;
        }
    }
    ctx->pc = 0x2269F8u;
label_2269f8:
    // 0x2269f8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2269f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2269fc:
    // 0x2269fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2269fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_226a00:
    // 0x226a00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x226a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_226a04:
    // 0x226a04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226a08:
    // 0x226a08: 0x8c423e94  lw          $v0, 0x3E94($v0)
    ctx->pc = 0x226a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16020)));
label_226a0c:
    // 0x226a0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_226a10:
    // 0x226a10: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x226a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_226a14:
    // 0x226a14: 0xac223e94  sw          $v0, 0x3E94($at)
    ctx->pc = 0x226a14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16020), GPR_U32(ctx, 2));
label_226a18:
    // 0x226a18: 0xc089ff6  jal         func_227FD8
label_226a1c:
    if (ctx->pc == 0x226A1Cu) {
        ctx->pc = 0x226A20u;
        goto label_226a20;
    }
    ctx->pc = 0x226A18u;
    SET_GPR_U32(ctx, 31, 0x226A20u);
    ctx->pc = 0x227FD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227FD8u, 0x226A18u, 0x226A20u)) {
        return;
    }
    ctx->pc = 0x226A20u;
label_226a20:
    // 0x226a20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226a24:
    // 0x226a24: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226a28:
    // 0x226a28: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x226a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_226a2c:
    // 0x226a2c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x226a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_226a30:
    // 0x226a30: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226a34:
    // 0x226a34: 0xac710214  sw          $s1, 0x214($v1)
    ctx->pc = 0x226a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 17));
label_226a38:
    // 0x226a38: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x226a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_226a3c:
    // 0x226a3c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x226a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_226a40:
    // 0x226a40: 0x40f809  jalr        $v0
label_226a44:
    if (ctx->pc == 0x226A44u) {
        ctx->pc = 0x226A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A40u;
        // 0x226a44: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x226A48u;
        goto label_226a48;
    }
    ctx->pc = 0x226A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226A48u);
        ctx->pc = 0x226A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A40u;
        // 0x226a44: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A40u, 0x226A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226A48u;
label_226a48:
    // 0x226a48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226a4c:
    // 0x226a4c: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226a50:
    // 0x226a50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226a54:
    // 0x226a54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_226a58:
    if (ctx->pc == 0x226A58u) {
        ctx->pc = 0x226A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A54u;
        // 0x226a58: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226A5Cu;
        goto label_226a5c;
    }
    ctx->pc = 0x226A54u;
    {
        const bool branch_taken_0x226a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A54u;
        // 0x226a58: 0xac620210  sw          $v0, 0x210($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a54) {
            ctx->pc = 0x226A64u;
            goto label_226a64;
        }
    }
    ctx->pc = 0x226A5Cu;
label_226a5c:
    // 0x226a5c: 0x10000019  b           . + 4 + (0x19 << 2)
label_226a60:
    if (ctx->pc == 0x226A60u) {
        ctx->pc = 0x226A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A5Cu;
        // 0x226a60: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226A64u;
        goto label_226a64;
    }
    ctx->pc = 0x226A5Cu;
    {
        const bool branch_taken_0x226a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226A5Cu;
        // 0x226a60: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226a5c) {
            ctx->pc = 0x226AC4u;
            goto label_226ac4;
        }
    }
    ctx->pc = 0x226A64u;
label_226a64:
    // 0x226a64: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x226a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_226a68:
    // 0x226a68: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x226a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_226a6c:
    // 0x226a6c: 0x60f809  jalr        $v1
label_226a70:
    if (ctx->pc == 0x226A70u) {
        ctx->pc = 0x226A74u;
        goto label_226a74;
    }
    ctx->pc = 0x226A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x226A74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226A6Cu, 0x226A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226A74u;
label_226a74:
    // 0x226a74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x226a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_226a78:
    // 0x226a78: 0x8c423e90  lw          $v0, 0x3E90($v0)
    ctx->pc = 0x226a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16016)));
label_226a7c:
    // 0x226a7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_226a80:
    // 0x226a80: 0x8c440218  lw          $a0, 0x218($v0)
    ctx->pc = 0x226a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_226a84:
    // 0x226a84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x226a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_226a88:
    // 0x226a88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x226a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_226a8c:
    // 0x226a8c: 0xc093106  jal         func_24C418
label_226a90:
    if (ctx->pc == 0x226A90u) {
        ctx->pc = 0x226A94u;
        goto label_226a94;
    }
    ctx->pc = 0x226A8Cu;
    SET_GPR_U32(ctx, 31, 0x226A94u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x226A8Cu, 0x226A94u)) {
        return;
    }
    ctx->pc = 0x226A94u;
label_226a94:
    // 0x226a94: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226a98:
    // 0x226a98: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226a9c:
    // 0x226a9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226aa0:
    // 0x226aa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_226aa4:
    // 0x226aa4: 0xac600218  sw          $zero, 0x218($v1)
    ctx->pc = 0x226aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 0));
label_226aa8:
    // 0x226aa8: 0xc093106  jal         func_24C418
label_226aac:
    if (ctx->pc == 0x226AACu) {
        ctx->pc = 0x226AB0u;
        goto label_226ab0;
    }
    ctx->pc = 0x226AA8u;
    SET_GPR_U32(ctx, 31, 0x226AB0u);
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x226AA8u, 0x226AB0u)) {
        return;
    }
    ctx->pc = 0x226AB0u;
label_226ab0:
    // 0x226ab0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_226ab4:
    // 0x226ab4: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x226ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16016)));
label_226ab8:
    // 0x226ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x226ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226abc:
    // 0x226abc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x226abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_226ac0:
    // 0x226ac0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x226ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_226ac4:
    // 0x226ac4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226ac8:
    // 0x226ac8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226acc:
    // 0x226acc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x226accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226ad0:
    // 0x226ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226ad4:
    // 0x226ad4: 0x3e00008  jr          $ra
label_226ad8:
    if (ctx->pc == 0x226AD8u) {
        ctx->pc = 0x226AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AD4u;
        // 0x226ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226ADCu;
        goto label_226adc;
    }
    ctx->pc = 0x226AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226AD4u;
        // 0x226ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226ADCu;
label_226adc:
    // 0x226adc: 0x0  nop
    ctx->pc = 0x226adcu;
    // NOP
    ctx->pc = 0x226ae0u;
}
