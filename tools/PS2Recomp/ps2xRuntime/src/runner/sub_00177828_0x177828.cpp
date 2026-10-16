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

// Function: sub_00177828
// Address: 0x177828 - 0x177b88
void sub_00177828_0x177828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177828_0x177828");
#endif

    switch (ctx->pc) {
        case 0x177828u: goto label_177828;
        case 0x17782cu: goto label_17782c;
        case 0x177830u: goto label_177830;
        case 0x177834u: goto label_177834;
        case 0x177838u: goto label_177838;
        case 0x17783cu: goto label_17783c;
        case 0x177840u: goto label_177840;
        case 0x177844u: goto label_177844;
        case 0x177848u: goto label_177848;
        case 0x17784cu: goto label_17784c;
        case 0x177850u: goto label_177850;
        case 0x177854u: goto label_177854;
        case 0x177858u: goto label_177858;
        case 0x17785cu: goto label_17785c;
        case 0x177860u: goto label_177860;
        case 0x177864u: goto label_177864;
        case 0x177868u: goto label_177868;
        case 0x17786cu: goto label_17786c;
        case 0x177870u: goto label_177870;
        case 0x177874u: goto label_177874;
        case 0x177878u: goto label_177878;
        case 0x17787cu: goto label_17787c;
        case 0x177880u: goto label_177880;
        case 0x177884u: goto label_177884;
        case 0x177888u: goto label_177888;
        case 0x17788cu: goto label_17788c;
        case 0x177890u: goto label_177890;
        case 0x177894u: goto label_177894;
        case 0x177898u: goto label_177898;
        case 0x17789cu: goto label_17789c;
        case 0x1778a0u: goto label_1778a0;
        case 0x1778a4u: goto label_1778a4;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778acu: goto label_1778ac;
        case 0x1778b0u: goto label_1778b0;
        case 0x1778b4u: goto label_1778b4;
        case 0x1778b8u: goto label_1778b8;
        case 0x1778bcu: goto label_1778bc;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778c4u: goto label_1778c4;
        case 0x1778c8u: goto label_1778c8;
        case 0x1778ccu: goto label_1778cc;
        case 0x1778d0u: goto label_1778d0;
        case 0x1778d4u: goto label_1778d4;
        case 0x1778d8u: goto label_1778d8;
        case 0x1778dcu: goto label_1778dc;
        case 0x1778e0u: goto label_1778e0;
        case 0x1778e4u: goto label_1778e4;
        case 0x1778e8u: goto label_1778e8;
        case 0x1778ecu: goto label_1778ec;
        case 0x1778f0u: goto label_1778f0;
        case 0x1778f4u: goto label_1778f4;
        case 0x1778f8u: goto label_1778f8;
        case 0x1778fcu: goto label_1778fc;
        case 0x177900u: goto label_177900;
        case 0x177904u: goto label_177904;
        case 0x177908u: goto label_177908;
        case 0x17790cu: goto label_17790c;
        case 0x177910u: goto label_177910;
        case 0x177914u: goto label_177914;
        case 0x177918u: goto label_177918;
        case 0x17791cu: goto label_17791c;
        case 0x177920u: goto label_177920;
        case 0x177924u: goto label_177924;
        case 0x177928u: goto label_177928;
        case 0x17792cu: goto label_17792c;
        case 0x177930u: goto label_177930;
        case 0x177934u: goto label_177934;
        case 0x177938u: goto label_177938;
        case 0x17793cu: goto label_17793c;
        case 0x177940u: goto label_177940;
        case 0x177944u: goto label_177944;
        case 0x177948u: goto label_177948;
        case 0x17794cu: goto label_17794c;
        case 0x177950u: goto label_177950;
        case 0x177954u: goto label_177954;
        case 0x177958u: goto label_177958;
        case 0x17795cu: goto label_17795c;
        case 0x177960u: goto label_177960;
        case 0x177964u: goto label_177964;
        case 0x177968u: goto label_177968;
        case 0x17796cu: goto label_17796c;
        case 0x177970u: goto label_177970;
        case 0x177974u: goto label_177974;
        case 0x177978u: goto label_177978;
        case 0x17797cu: goto label_17797c;
        case 0x177980u: goto label_177980;
        case 0x177984u: goto label_177984;
        case 0x177988u: goto label_177988;
        case 0x17798cu: goto label_17798c;
        case 0x177990u: goto label_177990;
        case 0x177994u: goto label_177994;
        case 0x177998u: goto label_177998;
        case 0x17799cu: goto label_17799c;
        case 0x1779a0u: goto label_1779a0;
        case 0x1779a4u: goto label_1779a4;
        case 0x1779a8u: goto label_1779a8;
        case 0x1779acu: goto label_1779ac;
        case 0x1779b0u: goto label_1779b0;
        case 0x1779b4u: goto label_1779b4;
        case 0x1779b8u: goto label_1779b8;
        case 0x1779bcu: goto label_1779bc;
        case 0x1779c0u: goto label_1779c0;
        case 0x1779c4u: goto label_1779c4;
        case 0x1779c8u: goto label_1779c8;
        case 0x1779ccu: goto label_1779cc;
        case 0x1779d0u: goto label_1779d0;
        case 0x1779d4u: goto label_1779d4;
        case 0x1779d8u: goto label_1779d8;
        case 0x1779dcu: goto label_1779dc;
        case 0x1779e0u: goto label_1779e0;
        case 0x1779e4u: goto label_1779e4;
        case 0x1779e8u: goto label_1779e8;
        case 0x1779ecu: goto label_1779ec;
        case 0x1779f0u: goto label_1779f0;
        case 0x1779f4u: goto label_1779f4;
        case 0x1779f8u: goto label_1779f8;
        case 0x1779fcu: goto label_1779fc;
        case 0x177a00u: goto label_177a00;
        case 0x177a04u: goto label_177a04;
        case 0x177a08u: goto label_177a08;
        case 0x177a0cu: goto label_177a0c;
        case 0x177a10u: goto label_177a10;
        case 0x177a14u: goto label_177a14;
        case 0x177a18u: goto label_177a18;
        case 0x177a1cu: goto label_177a1c;
        case 0x177a20u: goto label_177a20;
        case 0x177a24u: goto label_177a24;
        case 0x177a28u: goto label_177a28;
        case 0x177a2cu: goto label_177a2c;
        case 0x177a30u: goto label_177a30;
        case 0x177a34u: goto label_177a34;
        case 0x177a38u: goto label_177a38;
        case 0x177a3cu: goto label_177a3c;
        case 0x177a40u: goto label_177a40;
        case 0x177a44u: goto label_177a44;
        case 0x177a48u: goto label_177a48;
        case 0x177a4cu: goto label_177a4c;
        case 0x177a50u: goto label_177a50;
        case 0x177a54u: goto label_177a54;
        case 0x177a58u: goto label_177a58;
        case 0x177a5cu: goto label_177a5c;
        case 0x177a60u: goto label_177a60;
        case 0x177a64u: goto label_177a64;
        case 0x177a68u: goto label_177a68;
        case 0x177a6cu: goto label_177a6c;
        case 0x177a70u: goto label_177a70;
        case 0x177a74u: goto label_177a74;
        case 0x177a78u: goto label_177a78;
        case 0x177a7cu: goto label_177a7c;
        case 0x177a80u: goto label_177a80;
        case 0x177a84u: goto label_177a84;
        case 0x177a88u: goto label_177a88;
        case 0x177a8cu: goto label_177a8c;
        case 0x177a90u: goto label_177a90;
        case 0x177a94u: goto label_177a94;
        case 0x177a98u: goto label_177a98;
        case 0x177a9cu: goto label_177a9c;
        case 0x177aa0u: goto label_177aa0;
        case 0x177aa4u: goto label_177aa4;
        case 0x177aa8u: goto label_177aa8;
        case 0x177aacu: goto label_177aac;
        case 0x177ab0u: goto label_177ab0;
        case 0x177ab4u: goto label_177ab4;
        case 0x177ab8u: goto label_177ab8;
        case 0x177abcu: goto label_177abc;
        case 0x177ac0u: goto label_177ac0;
        case 0x177ac4u: goto label_177ac4;
        case 0x177ac8u: goto label_177ac8;
        case 0x177accu: goto label_177acc;
        case 0x177ad0u: goto label_177ad0;
        case 0x177ad4u: goto label_177ad4;
        case 0x177ad8u: goto label_177ad8;
        case 0x177adcu: goto label_177adc;
        case 0x177ae0u: goto label_177ae0;
        case 0x177ae4u: goto label_177ae4;
        case 0x177ae8u: goto label_177ae8;
        case 0x177aecu: goto label_177aec;
        case 0x177af0u: goto label_177af0;
        case 0x177af4u: goto label_177af4;
        case 0x177af8u: goto label_177af8;
        case 0x177afcu: goto label_177afc;
        case 0x177b00u: goto label_177b00;
        case 0x177b04u: goto label_177b04;
        case 0x177b08u: goto label_177b08;
        case 0x177b0cu: goto label_177b0c;
        case 0x177b10u: goto label_177b10;
        case 0x177b14u: goto label_177b14;
        case 0x177b18u: goto label_177b18;
        case 0x177b1cu: goto label_177b1c;
        case 0x177b20u: goto label_177b20;
        case 0x177b24u: goto label_177b24;
        case 0x177b28u: goto label_177b28;
        case 0x177b2cu: goto label_177b2c;
        case 0x177b30u: goto label_177b30;
        case 0x177b34u: goto label_177b34;
        case 0x177b38u: goto label_177b38;
        case 0x177b3cu: goto label_177b3c;
        case 0x177b40u: goto label_177b40;
        case 0x177b44u: goto label_177b44;
        case 0x177b48u: goto label_177b48;
        case 0x177b4cu: goto label_177b4c;
        case 0x177b50u: goto label_177b50;
        case 0x177b54u: goto label_177b54;
        case 0x177b58u: goto label_177b58;
        case 0x177b5cu: goto label_177b5c;
        case 0x177b60u: goto label_177b60;
        case 0x177b64u: goto label_177b64;
        case 0x177b68u: goto label_177b68;
        case 0x177b6cu: goto label_177b6c;
        case 0x177b70u: goto label_177b70;
        case 0x177b74u: goto label_177b74;
        case 0x177b78u: goto label_177b78;
        case 0x177b7cu: goto label_177b7c;
        case 0x177b80u: goto label_177b80;
        case 0x177b84u: goto label_177b84;
        default: break;
    }

    ctx->pc = 0x177828u;

label_177828:
    // 0x177828: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x177828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17782c:
    // 0x17782c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x17782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_177830:
    // 0x177830: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x177830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_177834:
    // 0x177834: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x177834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_177838:
    // 0x177838: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x177838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17783c:
    // 0x17783c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x17783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_177840:
    // 0x177840: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x177840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_177844:
    // 0x177844: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x177844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_177848:
    // 0x177848: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x177848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_17784c:
    // 0x17784c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17784cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_177850:
    // 0x177850: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x177850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_177854:
    // 0x177854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x177854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_177858:
    // 0x177858: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
label_17785c:
    if (ctx->pc == 0x17785Cu) {
        ctx->pc = 0x17785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177858u;
        // 0x17785c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177860u;
        goto label_177860;
    }
    ctx->pc = 0x177858u;
    {
        const bool branch_taken_0x177858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177858u;
        // 0x17785c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177858) {
            ctx->pc = 0x177B5Cu;
            goto label_177b5c;
        }
    }
    ctx->pc = 0x177860u;
label_177860:
    // 0x177860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_177864:
    // 0x177864: 0xc081b56  jal         func_206D58
label_177868:
    if (ctx->pc == 0x177868u) {
        ctx->pc = 0x177868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177864u;
        // 0x177868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17786Cu;
        goto label_17786c;
    }
    ctx->pc = 0x177864u;
    SET_GPR_U32(ctx, 31, 0x17786Cu);
    ctx->pc = 0x177868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177864u;
    // 0x177868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x177864u, 0x17786Cu)) {
        return;
    }
    ctx->pc = 0x17786Cu;
label_17786c:
    // 0x17786c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_177870:
    if (ctx->pc == 0x177870u) {
        ctx->pc = 0x177870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17786Cu;
        // 0x177870: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177874u;
        goto label_177874;
    }
    ctx->pc = 0x17786Cu;
    {
        const bool branch_taken_0x17786c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x177870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17786Cu;
        // 0x177870: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17786c) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x177874u;
label_177874:
    // 0x177874: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_177878:
    // 0x177878: 0xc081b56  jal         func_206D58
label_17787c:
    if (ctx->pc == 0x17787Cu) {
        ctx->pc = 0x17787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177878u;
        // 0x17787c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177880u;
        goto label_177880;
    }
    ctx->pc = 0x177878u;
    SET_GPR_U32(ctx, 31, 0x177880u);
    ctx->pc = 0x17787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177878u;
    // 0x17787c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x177878u, 0x177880u)) {
        return;
    }
    ctx->pc = 0x177880u;
label_177880:
    // 0x177880: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x177880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_177884:
    // 0x177884: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x177884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_177888:
    // 0x177888: 0xc080f1a  jal         func_203C68
label_17788c:
    if (ctx->pc == 0x17788Cu) {
        ctx->pc = 0x17788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177888u;
        // 0x17788c: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177890u;
        goto label_177890;
    }
    ctx->pc = 0x177888u;
    SET_GPR_U32(ctx, 31, 0x177890u);
    ctx->pc = 0x17788Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177888u;
    // 0x17788c: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203C68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203C68u, 0x177888u, 0x177890u)) {
        return;
    }
    ctx->pc = 0x177890u;
label_177890:
    // 0x177890: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x177890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_177894:
    // 0x177894: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x177894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_177898:
    // 0x177898: 0x8c64f898  lw          $a0, -0x768($v1)
    ctx->pc = 0x177898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965400)));
label_17789c:
    // 0x17789c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x17789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1778a0:
    // 0x1778a0: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1778a4:
    if (ctx->pc == 0x1778A4u) {
        ctx->pc = 0x1778A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778A0u;
        // 0x1778a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778A8u;
        goto label_1778a8;
    }
    ctx->pc = 0x1778A0u;
    {
        const bool branch_taken_0x1778a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1778A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778A0u;
        // 0x1778a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778a0) {
            ctx->pc = 0x1778C4u;
            goto label_1778c4;
        }
    }
    ctx->pc = 0x1778A8u;
label_1778a8:
    // 0x1778a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1778a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1778ac:
    // 0x1778ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1778b0:
    if (ctx->pc == 0x1778B0u) {
        ctx->pc = 0x1778B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778ACu;
        // 0x1778b0: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778B4u;
        goto label_1778b4;
    }
    ctx->pc = 0x1778ACu;
    {
        const bool branch_taken_0x1778ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1778ac) {
            ctx->pc = 0x1778B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1778ACu;
            // 0x1778b0: 0x8e25006c  lw          $a1, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1778C8u;
            goto label_1778c8;
        }
    }
    ctx->pc = 0x1778B4u;
label_1778b4:
    // 0x1778b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1778b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1778b8:
    // 0x1778b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1778b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1778bc:
    // 0x1778bc: 0xc07fd18  jal         func_1FF460
label_1778c0:
    if (ctx->pc == 0x1778C0u) {
        ctx->pc = 0x1778C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778BCu;
        // 0x1778c0: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778C4u;
        goto label_1778c4;
    }
    ctx->pc = 0x1778BCu;
    SET_GPR_U32(ctx, 31, 0x1778C4u);
    ctx->pc = 0x1778C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778BCu;
    // 0x1778c0: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1778BCu, 0x1778C4u)) {
        return;
    }
    ctx->pc = 0x1778C4u;
label_1778c4:
    // 0x1778c4: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x1778c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_1778c8:
    // 0x1778c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1778c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1778cc:
    // 0x1778cc: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x1778ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_1778d0:
    // 0x1778d0: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x1778d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1778d4:
    // 0x1778d4: 0xc05e2e8  jal         func_178BA0
label_1778d8:
    if (ctx->pc == 0x1778D8u) {
        ctx->pc = 0x1778D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778D4u;
        // 0x1778d8: 0x8e280078  lw          $t0, 0x78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778DCu;
        goto label_1778dc;
    }
    ctx->pc = 0x1778D4u;
    SET_GPR_U32(ctx, 31, 0x1778DCu);
    ctx->pc = 0x1778D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1778D4u;
    // 0x1778d8: 0x8e280078  lw          $t0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178BA0u, 0x1778D4u, 0x1778DCu)) {
        return;
    }
    ctx->pc = 0x1778DCu;
label_1778dc:
    // 0x1778dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1778e0:
    // 0x1778e0: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x1778e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_1778e4:
    // 0x1778e4: 0x8c4245e0  lw          $v0, 0x45E0($v0)
    ctx->pc = 0x1778e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
label_1778e8:
    // 0x1778e8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1778e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1778ec:
    // 0x1778ec: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1778f0:
    if (ctx->pc == 0x1778F0u) {
        ctx->pc = 0x1778F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778ECu;
        // 0x1778f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1778F4u;
        goto label_1778f4;
    }
    ctx->pc = 0x1778ECu;
    {
        const bool branch_taken_0x1778ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1778F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778ECu;
        // 0x1778f0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778ec) {
            ctx->pc = 0x177908u;
            goto label_177908;
        }
    }
    ctx->pc = 0x1778F4u;
label_1778f4:
    // 0x1778f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1778f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1778f8:
    // 0x1778f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1778fc:
    if (ctx->pc == 0x1778FCu) {
        ctx->pc = 0x1778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778F8u;
        // 0x1778fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177900u;
        goto label_177900;
    }
    ctx->pc = 0x1778F8u;
    {
        const bool branch_taken_0x1778f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1778F8u;
        // 0x1778fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778f8) {
            ctx->pc = 0x17790Cu;
            goto label_17790c;
        }
    }
    ctx->pc = 0x177900u;
label_177900:
    // 0x177900: 0xc07fd18  jal         func_1FF460
label_177904:
    if (ctx->pc == 0x177904u) {
        ctx->pc = 0x177904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177900u;
        // 0x177904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177908u;
        goto label_177908;
    }
    ctx->pc = 0x177900u;
    SET_GPR_U32(ctx, 31, 0x177908u);
    ctx->pc = 0x177904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177900u;
    // 0x177904: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177900u, 0x177908u)) {
        return;
    }
    ctx->pc = 0x177908u;
label_177908:
    // 0x177908: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x177908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17790c:
    // 0x17790c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_177910:
    if (ctx->pc == 0x177910u) {
        ctx->pc = 0x177910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17790Cu;
        // 0x177910: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177914u;
        goto label_177914;
    }
    ctx->pc = 0x17790Cu;
    {
        const bool branch_taken_0x17790c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17790Cu;
        // 0x177910: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17790c) {
            ctx->pc = 0x177948u;
            goto label_177948;
        }
    }
    ctx->pc = 0x177914u;
label_177914:
    // 0x177914: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x177914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_177918:
    // 0x177918: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x177918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_17791c:
    // 0x17791c: 0x8c44eed0  lw          $a0, -0x1130($v0)
    ctx->pc = 0x17791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962896)));
label_177920:
    // 0x177920: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_177924:
    if (ctx->pc == 0x177924u) {
        ctx->pc = 0x177924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177920u;
        // 0x177924: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177928u;
        goto label_177928;
    }
    ctx->pc = 0x177920u;
    {
        const bool branch_taken_0x177920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177920u;
        // 0x177924: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177920) {
            ctx->pc = 0x17794Cu;
            goto label_17794c;
        }
    }
    ctx->pc = 0x177928u;
label_177928:
    // 0x177928: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17792c:
    // 0x17792c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_177930:
    if (ctx->pc == 0x177930u) {
        ctx->pc = 0x177930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17792Cu;
        // 0x177930: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177934u;
        goto label_177934;
    }
    ctx->pc = 0x17792Cu;
    {
        const bool branch_taken_0x17792c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17792Cu;
        // 0x177930: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17792c) {
            ctx->pc = 0x177944u;
            goto label_177944;
        }
    }
    ctx->pc = 0x177934u;
label_177934:
    // 0x177934: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_177938:
    // 0x177938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17793c:
    // 0x17793c: 0xc07fd18  jal         func_1FF460
label_177940:
    if (ctx->pc == 0x177940u) {
        ctx->pc = 0x177940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17793Cu;
        // 0x177940: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177944u;
        goto label_177944;
    }
    ctx->pc = 0x17793Cu;
    SET_GPR_U32(ctx, 31, 0x177944u);
    ctx->pc = 0x177940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17793Cu;
    // 0x177940: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17793Cu, 0x177944u)) {
        return;
    }
    ctx->pc = 0x177944u;
label_177944:
    // 0x177944: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_177948:
    // 0x177948: 0x8e831a70  lw          $v1, 0x1A70($s4)
    ctx->pc = 0x177948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_17794c:
    // 0x17794c: 0x8c44f880  lw          $a0, -0x780($v0)
    ctx->pc = 0x17794cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965376)));
label_177950:
    // 0x177950: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_177954:
    if (ctx->pc == 0x177954u) {
        ctx->pc = 0x177954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177950u;
        // 0x177954: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177958u;
        goto label_177958;
    }
    ctx->pc = 0x177950u;
    {
        const bool branch_taken_0x177950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x177954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177950u;
        // 0x177954: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177950) {
            ctx->pc = 0x177978u;
            goto label_177978;
        }
    }
    ctx->pc = 0x177958u;
label_177958:
    // 0x177958: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17795c:
    // 0x17795c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_177960:
    if (ctx->pc == 0x177960u) {
        ctx->pc = 0x177960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17795Cu;
        // 0x177960: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177964u;
        goto label_177964;
    }
    ctx->pc = 0x17795Cu;
    {
        const bool branch_taken_0x17795c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17795Cu;
        // 0x177960: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17795c) {
            ctx->pc = 0x17797Cu;
            goto label_17797c;
        }
    }
    ctx->pc = 0x177964u;
label_177964:
    // 0x177964: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x177964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_177968:
    // 0x177968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17796c:
    // 0x17796c: 0xc07fd18  jal         func_1FF460
label_177970:
    if (ctx->pc == 0x177970u) {
        ctx->pc = 0x177970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17796Cu;
        // 0x177970: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177974u;
        goto label_177974;
    }
    ctx->pc = 0x17796Cu;
    SET_GPR_U32(ctx, 31, 0x177974u);
    ctx->pc = 0x177970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17796Cu;
    // 0x177970: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17796Cu, 0x177974u)) {
        return;
    }
    ctx->pc = 0x177974u;
label_177974:
    // 0x177974: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x177974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_177978:
    // 0x177978: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x177978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_17797c:
    // 0x17797c: 0x24536858  addiu       $s3, $v0, 0x6858
    ctx->pc = 0x17797cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 26712));
label_177980:
    // 0x177980: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x177980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_177984:
    // 0x177984: 0x8c7086f8  lw          $s0, -0x7908($v1)
    ctx->pc = 0x177984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936312)));
label_177988:
    // 0x177988: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x177988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17798c:
    // 0x17798c: 0xc07d234  jal         func_1F48D0
label_177990:
    if (ctx->pc == 0x177990u) {
        ctx->pc = 0x177990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17798Cu;
        // 0x177990: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177994u;
        goto label_177994;
    }
    ctx->pc = 0x17798Cu;
    SET_GPR_U32(ctx, 31, 0x177994u);
    ctx->pc = 0x177990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17798Cu;
    // 0x177990: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x17798Cu, 0x177994u)) {
        return;
    }
    ctx->pc = 0x177994u;
label_177994:
    // 0x177994: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_177998:
    if (ctx->pc == 0x177998u) {
        ctx->pc = 0x177998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177994u;
        // 0x177998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17799Cu;
        goto label_17799c;
    }
    ctx->pc = 0x177994u;
    {
        const bool branch_taken_0x177994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177994u;
        // 0x177998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177994) {
            ctx->pc = 0x1779C4u;
            goto label_1779c4;
        }
    }
    ctx->pc = 0x17799Cu;
label_17799c:
    // 0x17799c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1779a0:
    // 0x1779a0: 0xc07d3d6  jal         func_1F4F58
label_1779a4:
    if (ctx->pc == 0x1779A4u) {
        ctx->pc = 0x1779A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779A0u;
        // 0x1779a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779A8u;
        goto label_1779a8;
    }
    ctx->pc = 0x1779A0u;
    SET_GPR_U32(ctx, 31, 0x1779A8u);
    ctx->pc = 0x1779A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779A0u;
    // 0x1779a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1779A0u, 0x1779A8u)) {
        return;
    }
    ctx->pc = 0x1779A8u;
label_1779a8:
    // 0x1779a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1779ac:
    if (ctx->pc == 0x1779ACu) {
        ctx->pc = 0x1779ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779A8u;
        // 0x1779ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779B0u;
        goto label_1779b0;
    }
    ctx->pc = 0x1779A8u;
    {
        const bool branch_taken_0x1779a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779A8u;
        // 0x1779ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779a8) {
            ctx->pc = 0x1779C4u;
            goto label_1779c4;
        }
    }
    ctx->pc = 0x1779B0u;
label_1779b0:
    // 0x1779b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1779b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1779b4:
    // 0x1779b4: 0xc07d374  jal         func_1F4DD0
label_1779b8:
    if (ctx->pc == 0x1779B8u) {
        ctx->pc = 0x1779B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779B4u;
        // 0x1779b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779BCu;
        goto label_1779bc;
    }
    ctx->pc = 0x1779B4u;
    SET_GPR_U32(ctx, 31, 0x1779BCu);
    ctx->pc = 0x1779B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779B4u;
    // 0x1779b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x1779B4u, 0x1779BCu)) {
        return;
    }
    ctx->pc = 0x1779BCu;
label_1779bc:
    // 0x1779bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1779c0:
    if (ctx->pc == 0x1779C0u) {
        ctx->pc = 0x1779C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779BCu;
        // 0x1779c0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779C4u;
        goto label_1779c4;
    }
    ctx->pc = 0x1779BCu;
    {
        const bool branch_taken_0x1779bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779BCu;
        // 0x1779c0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779bc) {
            ctx->pc = 0x1779C8u;
            goto label_1779c8;
        }
    }
    ctx->pc = 0x1779C4u;
label_1779c4:
    // 0x1779c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1779c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1779c8:
    // 0x1779c8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_1779cc:
    if (ctx->pc == 0x1779CCu) {
        ctx->pc = 0x1779CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779C8u;
        // 0x1779cc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779D0u;
        goto label_1779d0;
    }
    ctx->pc = 0x1779C8u;
    {
        const bool branch_taken_0x1779c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1779CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779C8u;
        // 0x1779cc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1779c8) {
            ctx->pc = 0x177B50u;
            goto label_177b50;
        }
    }
    ctx->pc = 0x1779D0u;
label_1779d0:
    // 0x1779d0: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_1779d4:
    if (ctx->pc == 0x1779D4u) {
        ctx->pc = 0x1779D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779D0u;
        // 0x1779d4: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779D8u;
        goto label_1779d8;
    }
    ctx->pc = 0x1779D0u;
    {
        const bool branch_taken_0x1779d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1779d0) {
            ctx->pc = 0x1779D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1779D0u;
            // 0x1779d4: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x1779D8u;
label_1779d8:
    // 0x1779d8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1779d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1779dc:
    // 0x1779dc: 0x5040005d  beql        $v0, $zero, . + 4 + (0x5D << 2)
label_1779e0:
    if (ctx->pc == 0x1779E0u) {
        ctx->pc = 0x1779E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779DCu;
        // 0x1779e0: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779E4u;
        goto label_1779e4;
    }
    ctx->pc = 0x1779DCu;
    {
        const bool branch_taken_0x1779dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1779dc) {
            ctx->pc = 0x1779E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1779DCu;
            // 0x1779e0: 0x8e2200a0  lw          $v0, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177B54u;
            goto label_177b54;
        }
    }
    ctx->pc = 0x1779E4u;
label_1779e4:
    // 0x1779e4: 0xc07fbe6  jal         func_1FEF98
label_1779e8:
    if (ctx->pc == 0x1779E8u) {
        ctx->pc = 0x1779E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779E4u;
        // 0x1779e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779ECu;
        goto label_1779ec;
    }
    ctx->pc = 0x1779E4u;
    SET_GPR_U32(ctx, 31, 0x1779ECu);
    ctx->pc = 0x1779E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779E4u;
    // 0x1779e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1779E4u, 0x1779ECu)) {
        return;
    }
    ctx->pc = 0x1779ECu;
label_1779ec:
    // 0x1779ec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1779ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1779f0:
    // 0x1779f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1779f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1779f4:
    // 0x1779f4: 0xc07f9a4  jal         func_1FE690
label_1779f8:
    if (ctx->pc == 0x1779F8u) {
        ctx->pc = 0x1779F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1779F4u;
        // 0x1779f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1779FCu;
        goto label_1779fc;
    }
    ctx->pc = 0x1779F4u;
    SET_GPR_U32(ctx, 31, 0x1779FCu);
    ctx->pc = 0x1779F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1779F4u;
    // 0x1779f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1779F4u, 0x1779FCu)) {
        return;
    }
    ctx->pc = 0x1779FCu;
label_1779fc:
    // 0x1779fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1779fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_177a00:
    // 0x177a00: 0x8e821a70  lw          $v0, 0x1A70($s4)
    ctx->pc = 0x177a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6768)));
label_177a04:
    // 0x177a04: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_177a08:
    if (ctx->pc == 0x177A08u) {
        ctx->pc = 0x177A0Cu;
        goto label_177a0c;
    }
    ctx->pc = 0x177A04u;
    {
        const bool branch_taken_0x177a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x177a04) {
            ctx->pc = 0x177A28u;
            goto label_177a28;
        }
    }
    ctx->pc = 0x177A0Cu;
label_177a0c:
    // 0x177a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_177a10:
    // 0x177a10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_177a14:
    if (ctx->pc == 0x177A14u) {
        ctx->pc = 0x177A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A10u;
        // 0x177a14: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A18u;
        goto label_177a18;
    }
    ctx->pc = 0x177A10u;
    {
        const bool branch_taken_0x177a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A10u;
        // 0x177a14: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a10) {
            ctx->pc = 0x177A28u;
            goto label_177a28;
        }
    }
    ctx->pc = 0x177A18u;
label_177a18:
    // 0x177a18: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x177a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_177a1c:
    // 0x177a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177a20:
    // 0x177a20: 0xc07fd18  jal         func_1FF460
label_177a24:
    if (ctx->pc == 0x177A24u) {
        ctx->pc = 0x177A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A20u;
        // 0x177a24: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A28u;
        goto label_177a28;
    }
    ctx->pc = 0x177A20u;
    SET_GPR_U32(ctx, 31, 0x177A28u);
    ctx->pc = 0x177A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A20u;
    // 0x177a24: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x177A20u, 0x177A28u)) {
        return;
    }
    ctx->pc = 0x177A28u;
label_177a28:
    // 0x177a28: 0xc07fac2  jal         func_1FEB08
label_177a2c:
    if (ctx->pc == 0x177A2Cu) {
        ctx->pc = 0x177A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A28u;
        // 0x177a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A30u;
        goto label_177a30;
    }
    ctx->pc = 0x177A28u;
    SET_GPR_U32(ctx, 31, 0x177A30u);
    ctx->pc = 0x177A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A28u;
    // 0x177a2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x177A28u, 0x177A30u)) {
        return;
    }
    ctx->pc = 0x177A30u;
label_177a30:
    // 0x177a30: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x177a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_177a34:
    // 0x177a34: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x177a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_177a38:
    // 0x177a38: 0x8c6201a8  lw          $v0, 0x1A8($v1)
    ctx->pc = 0x177a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
label_177a3c:
    // 0x177a3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_177a40:
    if (ctx->pc == 0x177A40u) {
        ctx->pc = 0x177A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A3Cu;
        // 0x177a40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A44u;
        goto label_177a44;
    }
    ctx->pc = 0x177A3Cu;
    {
        const bool branch_taken_0x177a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A3Cu;
        // 0x177a40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a3c) {
            ctx->pc = 0x177A48u;
            goto label_177a48;
        }
    }
    ctx->pc = 0x177A44u;
label_177a44:
    // 0x177a44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x177a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_177a48:
    // 0x177a48: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_177a4c:
    if (ctx->pc == 0x177A4Cu) {
        ctx->pc = 0x177A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A48u;
        // 0x177a4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A50u;
        goto label_177a50;
    }
    ctx->pc = 0x177A48u;
    {
        const bool branch_taken_0x177a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x177A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A48u;
        // 0x177a4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a48) {
            ctx->pc = 0x177A60u;
            goto label_177a60;
        }
    }
    ctx->pc = 0x177A50u;
label_177a50:
    // 0x177a50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x177a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_177a54:
    // 0x177a54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x177a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_177a58:
    // 0x177a58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x177a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_177a5c:
    // 0x177a5c: 0x8c5000d8  lw          $s0, 0xD8($v0)
    ctx->pc = 0x177a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_177a60:
    // 0x177a60: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_177a64:
    if (ctx->pc == 0x177A64u) {
        ctx->pc = 0x177A68u;
        goto label_177a68;
    }
    ctx->pc = 0x177A60u;
    {
        const bool branch_taken_0x177a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177a60) {
            ctx->pc = 0x177B08u;
            goto label_177b08;
        }
    }
    ctx->pc = 0x177A68u;
label_177a68:
    // 0x177a68: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_177a6c:
    // 0x177a6c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x177a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_177a70:
    // 0x177a70: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x177a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_177a74:
    // 0x177a74: 0x40f809  jalr        $v0
label_177a78:
    if (ctx->pc == 0x177A78u) {
        ctx->pc = 0x177A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A74u;
        // 0x177a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A7Cu;
        goto label_177a7c;
    }
    ctx->pc = 0x177A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x177A7Cu);
        ctx->pc = 0x177A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A74u;
        // 0x177a78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177A74u, 0x177A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177A7Cu;
label_177a7c:
    // 0x177a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177a80:
    // 0x177a80: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_177a84:
    if (ctx->pc == 0x177A84u) {
        ctx->pc = 0x177A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A80u;
        // 0x177a84: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A88u;
        goto label_177a88;
    }
    ctx->pc = 0x177A80u;
    {
        const bool branch_taken_0x177a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A80u;
        // 0x177a84: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a80) {
            ctx->pc = 0x177B08u;
            goto label_177b08;
        }
    }
    ctx->pc = 0x177A88u;
label_177a88:
    // 0x177a88: 0xc080924  jal         func_202490
label_177a8c:
    if (ctx->pc == 0x177A8Cu) {
        ctx->pc = 0x177A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A88u;
        // 0x177a8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177A90u;
        goto label_177a90;
    }
    ctx->pc = 0x177A88u;
    SET_GPR_U32(ctx, 31, 0x177A90u);
    ctx->pc = 0x177A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177A88u;
    // 0x177a8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x177A88u, 0x177A90u)) {
        return;
    }
    ctx->pc = 0x177A90u;
label_177a90:
    // 0x177a90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177a94:
    // 0x177a94: 0x8ed386f8  lw          $s3, -0x7908($s6)
    ctx->pc = 0x177a94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936312)));
label_177a98:
    // 0x177a98: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_177a9c:
    // 0x177a9c: 0x27b40024  addiu       $s4, $sp, 0x24
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_177aa0:
    // 0x177aa0: 0xc07d234  jal         func_1F48D0
label_177aa4:
    if (ctx->pc == 0x177AA4u) {
        ctx->pc = 0x177AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AA0u;
        // 0x177aa4: 0x24556860  addiu       $s5, $v0, 0x6860 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AA8u;
        goto label_177aa8;
    }
    ctx->pc = 0x177AA0u;
    SET_GPR_U32(ctx, 31, 0x177AA8u);
    ctx->pc = 0x177AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AA0u;
    // 0x177aa4: 0x24556860  addiu       $s5, $v0, 0x6860 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 26720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x177AA0u, 0x177AA8u)) {
        return;
    }
    ctx->pc = 0x177AA8u;
label_177aa8:
    // 0x177aa8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_177aac:
    if (ctx->pc == 0x177AACu) {
        ctx->pc = 0x177AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AA8u;
        // 0x177aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AB0u;
        goto label_177ab0;
    }
    ctx->pc = 0x177AA8u;
    {
        const bool branch_taken_0x177aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AA8u;
        // 0x177aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177aa8) {
            ctx->pc = 0x177ADCu;
            goto label_177adc;
        }
    }
    ctx->pc = 0x177AB0u;
label_177ab0:
    // 0x177ab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177ab4:
    // 0x177ab4: 0xc07d3d6  jal         func_1F4F58
label_177ab8:
    if (ctx->pc == 0x177AB8u) {
        ctx->pc = 0x177AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AB4u;
        // 0x177ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177ABCu;
        goto label_177abc;
    }
    ctx->pc = 0x177AB4u;
    SET_GPR_U32(ctx, 31, 0x177ABCu);
    ctx->pc = 0x177AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AB4u;
    // 0x177ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x177AB4u, 0x177ABCu)) {
        return;
    }
    ctx->pc = 0x177ABCu;
label_177abc:
    // 0x177abc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_177ac0:
    if (ctx->pc == 0x177AC0u) {
        ctx->pc = 0x177AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ABCu;
        // 0x177ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AC4u;
        goto label_177ac4;
    }
    ctx->pc = 0x177ABCu;
    {
        const bool branch_taken_0x177abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ABCu;
        // 0x177ac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177abc) {
            ctx->pc = 0x177ADCu;
            goto label_177adc;
        }
    }
    ctx->pc = 0x177AC4u;
label_177ac4:
    // 0x177ac4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x177ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_177ac8:
    // 0x177ac8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_177acc:
    // 0x177acc: 0xc07d388  jal         func_1F4E20
label_177ad0:
    if (ctx->pc == 0x177AD0u) {
        ctx->pc = 0x177AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177ACCu;
        // 0x177ad0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AD4u;
        goto label_177ad4;
    }
    ctx->pc = 0x177ACCu;
    SET_GPR_U32(ctx, 31, 0x177AD4u);
    ctx->pc = 0x177AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ACCu;
    // 0x177ad0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E20u, 0x177ACCu, 0x177AD4u)) {
        return;
    }
    ctx->pc = 0x177AD4u;
label_177ad4:
    // 0x177ad4: 0x10000002  b           . + 4 + (0x2 << 2)
label_177ad8:
    if (ctx->pc == 0x177AD8u) {
        ctx->pc = 0x177AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AD4u;
        // 0x177ad8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x177ADCu;
        goto label_177adc;
    }
    ctx->pc = 0x177AD4u;
    {
        const bool branch_taken_0x177ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AD4u;
        // 0x177ad8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ad4) {
            ctx->pc = 0x177AE0u;
            goto label_177ae0;
        }
    }
    ctx->pc = 0x177ADCu;
label_177adc:
    // 0x177adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177ae0:
    // 0x177ae0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_177ae4:
    if (ctx->pc == 0x177AE4u) {
        ctx->pc = 0x177AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AE0u;
        // 0x177ae4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177AE8u;
        goto label_177ae8;
    }
    ctx->pc = 0x177AE0u;
    {
        const bool branch_taken_0x177ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AE0u;
        // 0x177ae4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ae0) {
            ctx->pc = 0x177B00u;
            goto label_177b00;
        }
    }
    ctx->pc = 0x177AE8u;
label_177ae8:
    // 0x177ae8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x177ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_177aec:
    // 0x177aec: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x177aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_177af0:
    // 0x177af0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_177af4:
    // 0x177af4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x177af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_177af8:
    // 0x177af8: 0x60f809  jalr        $v1
label_177afc:
    if (ctx->pc == 0x177AFCu) {
        ctx->pc = 0x177AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AF8u;
        // 0x177afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B00u;
        goto label_177b00;
    }
    ctx->pc = 0x177AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177B00u);
        ctx->pc = 0x177AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AF8u;
        // 0x177afc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177AF8u, 0x177B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177B00u;
label_177b00:
    // 0x177b00: 0xc0808b8  jal         func_2022E0
label_177b04:
    if (ctx->pc == 0x177B04u) {
        ctx->pc = 0x177B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B00u;
        // 0x177b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B08u;
        goto label_177b08;
    }
    ctx->pc = 0x177B00u;
    SET_GPR_U32(ctx, 31, 0x177B08u);
    ctx->pc = 0x177B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B00u;
    // 0x177b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x177B00u, 0x177B08u)) {
        return;
    }
    ctx->pc = 0x177B08u;
label_177b08:
    // 0x177b08: 0xc07d234  jal         func_1F48D0
label_177b0c:
    if (ctx->pc == 0x177B0Cu) {
        ctx->pc = 0x177B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B08u;
        // 0x177b0c: 0x8ed086f8  lw          $s0, -0x7908($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B10u;
        goto label_177b10;
    }
    ctx->pc = 0x177B08u;
    SET_GPR_U32(ctx, 31, 0x177B10u);
    ctx->pc = 0x177B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B08u;
    // 0x177b0c: 0x8ed086f8  lw          $s0, -0x7908($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x177B08u, 0x177B10u)) {
        return;
    }
    ctx->pc = 0x177B10u;
label_177b10:
    // 0x177b10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_177b14:
    if (ctx->pc == 0x177B14u) {
        ctx->pc = 0x177B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B10u;
        // 0x177b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B18u;
        goto label_177b18;
    }
    ctx->pc = 0x177B10u;
    {
        const bool branch_taken_0x177b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B10u;
        // 0x177b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b10) {
            ctx->pc = 0x177B44u;
            goto label_177b44;
        }
    }
    ctx->pc = 0x177B18u;
label_177b18:
    // 0x177b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x177b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177b1c:
    // 0x177b1c: 0xc07d3d6  jal         func_1F4F58
label_177b20:
    if (ctx->pc == 0x177B20u) {
        ctx->pc = 0x177B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B1Cu;
        // 0x177b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B24u;
        goto label_177b24;
    }
    ctx->pc = 0x177B1Cu;
    SET_GPR_U32(ctx, 31, 0x177B24u);
    ctx->pc = 0x177B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B1Cu;
    // 0x177b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x177B1Cu, 0x177B24u)) {
        return;
    }
    ctx->pc = 0x177B24u;
label_177b24:
    // 0x177b24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_177b28:
    // 0x177b28: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_177b2c:
    if (ctx->pc == 0x177B2Cu) {
        ctx->pc = 0x177B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B28u;
        // 0x177b2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B30u;
        goto label_177b30;
    }
    ctx->pc = 0x177B28u;
    {
        const bool branch_taken_0x177b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x177B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B28u;
        // 0x177b2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b28) {
            ctx->pc = 0x177B44u;
            goto label_177b44;
        }
    }
    ctx->pc = 0x177B30u;
label_177b30:
    // 0x177b30: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x177b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_177b34:
    // 0x177b34: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x177b34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_177b38:
    // 0x177b38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x177b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_177b3c:
    // 0x177b3c: 0x60f809  jalr        $v1
label_177b40:
    if (ctx->pc == 0x177B40u) {
        ctx->pc = 0x177B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B3Cu;
        // 0x177b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B44u;
        goto label_177b44;
    }
    ctx->pc = 0x177B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177B44u);
        ctx->pc = 0x177B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B3Cu;
        // 0x177b40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B3Cu, 0x177B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x177B44u;
label_177b44:
    // 0x177b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x177b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_177b48:
    // 0x177b48: 0xc07fbec  jal         func_1FEFB0
label_177b4c:
    if (ctx->pc == 0x177B4Cu) {
        ctx->pc = 0x177B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B48u;
        // 0x177b4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B50u;
        goto label_177b50;
    }
    ctx->pc = 0x177B48u;
    SET_GPR_U32(ctx, 31, 0x177B50u);
    ctx->pc = 0x177B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177B48u;
    // 0x177b4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x177B48u, 0x177B50u)) {
        return;
    }
    ctx->pc = 0x177B50u;
label_177b50:
    // 0x177b50: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_177b54:
    // 0x177b54: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x177b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_177b58:
    // 0x177b58: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x177b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_177b5c:
    // 0x177b5c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x177b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_177b60:
    // 0x177b60: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x177b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_177b64:
    // 0x177b64: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x177b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_177b68:
    // 0x177b68: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x177b68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_177b6c:
    // 0x177b6c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x177b6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_177b70:
    // 0x177b70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x177b70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_177b74:
    // 0x177b74: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x177b74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_177b78:
    // 0x177b78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x177b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_177b7c:
    // 0x177b7c: 0x3e00008  jr          $ra
label_177b80:
    if (ctx->pc == 0x177B80u) {
        ctx->pc = 0x177B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B7Cu;
        // 0x177b80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177B84u;
        goto label_177b84;
    }
    ctx->pc = 0x177B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B7Cu;
        // 0x177b80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B84u;
label_177b84:
    // 0x177b84: 0x0  nop
    ctx->pc = 0x177b84u;
    // NOP
    ctx->pc = 0x177b88u;
}
