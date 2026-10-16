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

// Function: sub_0031F798
// Address: 0x31f798 - 0x31fb60
void sub_0031F798_0x31f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F798_0x31f798");
#endif

    switch (ctx->pc) {
        case 0x31f798u: goto label_31f798;
        case 0x31f79cu: goto label_31f79c;
        case 0x31f7a0u: goto label_31f7a0;
        case 0x31f7a4u: goto label_31f7a4;
        case 0x31f7a8u: goto label_31f7a8;
        case 0x31f7acu: goto label_31f7ac;
        case 0x31f7b0u: goto label_31f7b0;
        case 0x31f7b4u: goto label_31f7b4;
        case 0x31f7b8u: goto label_31f7b8;
        case 0x31f7bcu: goto label_31f7bc;
        case 0x31f7c0u: goto label_31f7c0;
        case 0x31f7c4u: goto label_31f7c4;
        case 0x31f7c8u: goto label_31f7c8;
        case 0x31f7ccu: goto label_31f7cc;
        case 0x31f7d0u: goto label_31f7d0;
        case 0x31f7d4u: goto label_31f7d4;
        case 0x31f7d8u: goto label_31f7d8;
        case 0x31f7dcu: goto label_31f7dc;
        case 0x31f7e0u: goto label_31f7e0;
        case 0x31f7e4u: goto label_31f7e4;
        case 0x31f7e8u: goto label_31f7e8;
        case 0x31f7ecu: goto label_31f7ec;
        case 0x31f7f0u: goto label_31f7f0;
        case 0x31f7f4u: goto label_31f7f4;
        case 0x31f7f8u: goto label_31f7f8;
        case 0x31f7fcu: goto label_31f7fc;
        case 0x31f800u: goto label_31f800;
        case 0x31f804u: goto label_31f804;
        case 0x31f808u: goto label_31f808;
        case 0x31f80cu: goto label_31f80c;
        case 0x31f810u: goto label_31f810;
        case 0x31f814u: goto label_31f814;
        case 0x31f818u: goto label_31f818;
        case 0x31f81cu: goto label_31f81c;
        case 0x31f820u: goto label_31f820;
        case 0x31f824u: goto label_31f824;
        case 0x31f828u: goto label_31f828;
        case 0x31f82cu: goto label_31f82c;
        case 0x31f830u: goto label_31f830;
        case 0x31f834u: goto label_31f834;
        case 0x31f838u: goto label_31f838;
        case 0x31f83cu: goto label_31f83c;
        case 0x31f840u: goto label_31f840;
        case 0x31f844u: goto label_31f844;
        case 0x31f848u: goto label_31f848;
        case 0x31f84cu: goto label_31f84c;
        case 0x31f850u: goto label_31f850;
        case 0x31f854u: goto label_31f854;
        case 0x31f858u: goto label_31f858;
        case 0x31f85cu: goto label_31f85c;
        case 0x31f860u: goto label_31f860;
        case 0x31f864u: goto label_31f864;
        case 0x31f868u: goto label_31f868;
        case 0x31f86cu: goto label_31f86c;
        case 0x31f870u: goto label_31f870;
        case 0x31f874u: goto label_31f874;
        case 0x31f878u: goto label_31f878;
        case 0x31f87cu: goto label_31f87c;
        case 0x31f880u: goto label_31f880;
        case 0x31f884u: goto label_31f884;
        case 0x31f888u: goto label_31f888;
        case 0x31f88cu: goto label_31f88c;
        case 0x31f890u: goto label_31f890;
        case 0x31f894u: goto label_31f894;
        case 0x31f898u: goto label_31f898;
        case 0x31f89cu: goto label_31f89c;
        case 0x31f8a0u: goto label_31f8a0;
        case 0x31f8a4u: goto label_31f8a4;
        case 0x31f8a8u: goto label_31f8a8;
        case 0x31f8acu: goto label_31f8ac;
        case 0x31f8b0u: goto label_31f8b0;
        case 0x31f8b4u: goto label_31f8b4;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f8bcu: goto label_31f8bc;
        case 0x31f8c0u: goto label_31f8c0;
        case 0x31f8c4u: goto label_31f8c4;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8ccu: goto label_31f8cc;
        case 0x31f8d0u: goto label_31f8d0;
        case 0x31f8d4u: goto label_31f8d4;
        case 0x31f8d8u: goto label_31f8d8;
        case 0x31f8dcu: goto label_31f8dc;
        case 0x31f8e0u: goto label_31f8e0;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f8e8u: goto label_31f8e8;
        case 0x31f8ecu: goto label_31f8ec;
        case 0x31f8f0u: goto label_31f8f0;
        case 0x31f8f4u: goto label_31f8f4;
        case 0x31f8f8u: goto label_31f8f8;
        case 0x31f8fcu: goto label_31f8fc;
        case 0x31f900u: goto label_31f900;
        case 0x31f904u: goto label_31f904;
        case 0x31f908u: goto label_31f908;
        case 0x31f90cu: goto label_31f90c;
        case 0x31f910u: goto label_31f910;
        case 0x31f914u: goto label_31f914;
        case 0x31f918u: goto label_31f918;
        case 0x31f91cu: goto label_31f91c;
        case 0x31f920u: goto label_31f920;
        case 0x31f924u: goto label_31f924;
        case 0x31f928u: goto label_31f928;
        case 0x31f92cu: goto label_31f92c;
        case 0x31f930u: goto label_31f930;
        case 0x31f934u: goto label_31f934;
        case 0x31f938u: goto label_31f938;
        case 0x31f93cu: goto label_31f93c;
        case 0x31f940u: goto label_31f940;
        case 0x31f944u: goto label_31f944;
        case 0x31f948u: goto label_31f948;
        case 0x31f94cu: goto label_31f94c;
        case 0x31f950u: goto label_31f950;
        case 0x31f954u: goto label_31f954;
        case 0x31f958u: goto label_31f958;
        case 0x31f95cu: goto label_31f95c;
        case 0x31f960u: goto label_31f960;
        case 0x31f964u: goto label_31f964;
        case 0x31f968u: goto label_31f968;
        case 0x31f96cu: goto label_31f96c;
        case 0x31f970u: goto label_31f970;
        case 0x31f974u: goto label_31f974;
        case 0x31f978u: goto label_31f978;
        case 0x31f97cu: goto label_31f97c;
        case 0x31f980u: goto label_31f980;
        case 0x31f984u: goto label_31f984;
        case 0x31f988u: goto label_31f988;
        case 0x31f98cu: goto label_31f98c;
        case 0x31f990u: goto label_31f990;
        case 0x31f994u: goto label_31f994;
        case 0x31f998u: goto label_31f998;
        case 0x31f99cu: goto label_31f99c;
        case 0x31f9a0u: goto label_31f9a0;
        case 0x31f9a4u: goto label_31f9a4;
        case 0x31f9a8u: goto label_31f9a8;
        case 0x31f9acu: goto label_31f9ac;
        case 0x31f9b0u: goto label_31f9b0;
        case 0x31f9b4u: goto label_31f9b4;
        case 0x31f9b8u: goto label_31f9b8;
        case 0x31f9bcu: goto label_31f9bc;
        case 0x31f9c0u: goto label_31f9c0;
        case 0x31f9c4u: goto label_31f9c4;
        case 0x31f9c8u: goto label_31f9c8;
        case 0x31f9ccu: goto label_31f9cc;
        case 0x31f9d0u: goto label_31f9d0;
        case 0x31f9d4u: goto label_31f9d4;
        case 0x31f9d8u: goto label_31f9d8;
        case 0x31f9dcu: goto label_31f9dc;
        case 0x31f9e0u: goto label_31f9e0;
        case 0x31f9e4u: goto label_31f9e4;
        case 0x31f9e8u: goto label_31f9e8;
        case 0x31f9ecu: goto label_31f9ec;
        case 0x31f9f0u: goto label_31f9f0;
        case 0x31f9f4u: goto label_31f9f4;
        case 0x31f9f8u: goto label_31f9f8;
        case 0x31f9fcu: goto label_31f9fc;
        case 0x31fa00u: goto label_31fa00;
        case 0x31fa04u: goto label_31fa04;
        case 0x31fa08u: goto label_31fa08;
        case 0x31fa0cu: goto label_31fa0c;
        case 0x31fa10u: goto label_31fa10;
        case 0x31fa14u: goto label_31fa14;
        case 0x31fa18u: goto label_31fa18;
        case 0x31fa1cu: goto label_31fa1c;
        case 0x31fa20u: goto label_31fa20;
        case 0x31fa24u: goto label_31fa24;
        case 0x31fa28u: goto label_31fa28;
        case 0x31fa2cu: goto label_31fa2c;
        case 0x31fa30u: goto label_31fa30;
        case 0x31fa34u: goto label_31fa34;
        case 0x31fa38u: goto label_31fa38;
        case 0x31fa3cu: goto label_31fa3c;
        case 0x31fa40u: goto label_31fa40;
        case 0x31fa44u: goto label_31fa44;
        case 0x31fa48u: goto label_31fa48;
        case 0x31fa4cu: goto label_31fa4c;
        case 0x31fa50u: goto label_31fa50;
        case 0x31fa54u: goto label_31fa54;
        case 0x31fa58u: goto label_31fa58;
        case 0x31fa5cu: goto label_31fa5c;
        case 0x31fa60u: goto label_31fa60;
        case 0x31fa64u: goto label_31fa64;
        case 0x31fa68u: goto label_31fa68;
        case 0x31fa6cu: goto label_31fa6c;
        case 0x31fa70u: goto label_31fa70;
        case 0x31fa74u: goto label_31fa74;
        case 0x31fa78u: goto label_31fa78;
        case 0x31fa7cu: goto label_31fa7c;
        case 0x31fa80u: goto label_31fa80;
        case 0x31fa84u: goto label_31fa84;
        case 0x31fa88u: goto label_31fa88;
        case 0x31fa8cu: goto label_31fa8c;
        case 0x31fa90u: goto label_31fa90;
        case 0x31fa94u: goto label_31fa94;
        case 0x31fa98u: goto label_31fa98;
        case 0x31fa9cu: goto label_31fa9c;
        case 0x31faa0u: goto label_31faa0;
        case 0x31faa4u: goto label_31faa4;
        case 0x31faa8u: goto label_31faa8;
        case 0x31faacu: goto label_31faac;
        case 0x31fab0u: goto label_31fab0;
        case 0x31fab4u: goto label_31fab4;
        case 0x31fab8u: goto label_31fab8;
        case 0x31fabcu: goto label_31fabc;
        case 0x31fac0u: goto label_31fac0;
        case 0x31fac4u: goto label_31fac4;
        case 0x31fac8u: goto label_31fac8;
        case 0x31faccu: goto label_31facc;
        case 0x31fad0u: goto label_31fad0;
        case 0x31fad4u: goto label_31fad4;
        case 0x31fad8u: goto label_31fad8;
        case 0x31fadcu: goto label_31fadc;
        case 0x31fae0u: goto label_31fae0;
        case 0x31fae4u: goto label_31fae4;
        case 0x31fae8u: goto label_31fae8;
        case 0x31faecu: goto label_31faec;
        case 0x31faf0u: goto label_31faf0;
        case 0x31faf4u: goto label_31faf4;
        case 0x31faf8u: goto label_31faf8;
        case 0x31fafcu: goto label_31fafc;
        case 0x31fb00u: goto label_31fb00;
        case 0x31fb04u: goto label_31fb04;
        case 0x31fb08u: goto label_31fb08;
        case 0x31fb0cu: goto label_31fb0c;
        case 0x31fb10u: goto label_31fb10;
        case 0x31fb14u: goto label_31fb14;
        case 0x31fb18u: goto label_31fb18;
        case 0x31fb1cu: goto label_31fb1c;
        case 0x31fb20u: goto label_31fb20;
        case 0x31fb24u: goto label_31fb24;
        case 0x31fb28u: goto label_31fb28;
        case 0x31fb2cu: goto label_31fb2c;
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb34u: goto label_31fb34;
        case 0x31fb38u: goto label_31fb38;
        case 0x31fb3cu: goto label_31fb3c;
        case 0x31fb40u: goto label_31fb40;
        case 0x31fb44u: goto label_31fb44;
        case 0x31fb48u: goto label_31fb48;
        case 0x31fb4cu: goto label_31fb4c;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb54u: goto label_31fb54;
        case 0x31fb58u: goto label_31fb58;
        case 0x31fb5cu: goto label_31fb5c;
        default: break;
    }

    ctx->pc = 0x31f798u;

label_31f798:
    // 0x31f798: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x31f798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_31f79c:
    // 0x31f79c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x31f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_31f7a0:
    // 0x31f7a0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x31f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_31f7a4:
    // 0x31f7a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x31f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_31f7a8:
    // 0x31f7a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x31f7a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31f7ac:
    // 0x31f7ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x31f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_31f7b0:
    // 0x31f7b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x31f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_31f7b4:
    // 0x31f7b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x31f7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_31f7b8:
    // 0x31f7b8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x31f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_31f7bc:
    // 0x31f7bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31f7c0:
    // 0x31f7c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x31f7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_31f7c4:
    // 0x31f7c4: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x31f7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31f7c8:
    // 0x31f7c8: 0x124000d3  beqz        $s2, . + 4 + (0xD3 << 2)
label_31f7cc:
    if (ctx->pc == 0x31F7CCu) {
        ctx->pc = 0x31F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7C8u;
        // 0x31f7cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7D0u;
        goto label_31f7d0;
    }
    ctx->pc = 0x31F7C8u;
    {
        const bool branch_taken_0x31f7c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7C8u;
        // 0x31f7cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7c8) {
            ctx->pc = 0x31FB18u;
            goto label_31fb18;
        }
    }
    ctx->pc = 0x31F7D0u;
label_31f7d0:
    // 0x31f7d0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31f7d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31f7d4:
    // 0x31f7d4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_31f7d8:
    // 0x31f7d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_31f7dc:
    if (ctx->pc == 0x31F7DCu) {
        ctx->pc = 0x31F7E0u;
        goto label_31f7e0;
    }
    ctx->pc = 0x31F7D8u;
    {
        const bool branch_taken_0x31f7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f7d8) {
            ctx->pc = 0x31F7ECu;
            goto label_31f7ec;
        }
    }
    ctx->pc = 0x31F7E0u;
label_31f7e0:
    // 0x31f7e0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_31f7e4:
    // 0x31f7e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_31f7e8:
    if (ctx->pc == 0x31F7E8u) {
        ctx->pc = 0x31F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E4u;
        // 0x31f7e8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7ECu;
        goto label_31f7ec;
    }
    ctx->pc = 0x31F7E4u;
    {
        const bool branch_taken_0x31f7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7e4) {
            ctx->pc = 0x31F7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F7E4u;
            // 0x31f7e8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F800u;
            goto label_31f800;
        }
    }
    ctx->pc = 0x31F7ECu;
label_31f7ec:
    // 0x31f7ec: 0xc0c7f3e  jal         func_31FCF8
label_31f7f0:
    if (ctx->pc == 0x31F7F0u) {
        ctx->pc = 0x31F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7ECu;
        // 0x31f7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7F4u;
        goto label_31f7f4;
    }
    ctx->pc = 0x31F7ECu;
    SET_GPR_U32(ctx, 31, 0x31F7F4u);
    ctx->pc = 0x31F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F7ECu;
    // 0x31f7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FCF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FCF8u, 0x31F7ECu, 0x31F7F4u)) {
        return;
    }
    ctx->pc = 0x31F7F4u;
label_31f7f4:
    // 0x31f7f4: 0x144000ce  bnez        $v0, . + 4 + (0xCE << 2)
label_31f7f8:
    if (ctx->pc == 0x31F7F8u) {
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7FCu;
        goto label_31f7fc;
    }
    ctx->pc = 0x31F7F4u;
    {
        const bool branch_taken_0x31f7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7f4) {
            ctx->pc = 0x31FB30u;
            goto label_31fb30;
        }
    }
    ctx->pc = 0x31F7FCu;
label_31f7fc:
    // 0x31f7fc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x31f7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31f800:
    // 0x31f800: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31f800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f804:
    // 0x31f804: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f808:
    // 0x31f808: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31f80c:
    // 0x31f80c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_31f810:
    if (ctx->pc == 0x31F810u) {
        ctx->pc = 0x31F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F80Cu;
        // 0x31f810: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F814u;
        goto label_31f814;
    }
    ctx->pc = 0x31F80Cu;
    {
        const bool branch_taken_0x31f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F80Cu;
        // 0x31f810: 0x8ed40000  lw          $s4, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f80c) {
            ctx->pc = 0x31F878u;
            goto label_31f878;
        }
    }
    ctx->pc = 0x31F814u;
label_31f814:
    // 0x31f814: 0x24150400  addiu       $s5, $zero, 0x400
    ctx->pc = 0x31f814u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_31f818:
    // 0x31f818: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_31f81c:
    if (ctx->pc == 0x31F81Cu) {
        ctx->pc = 0x31F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F818u;
        // 0x31f81c: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F820u;
        goto label_31f820;
    }
    ctx->pc = 0x31F818u;
    {
        const bool branch_taken_0x31f818 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F818u;
        // 0x31f81c: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f818) {
            ctx->pc = 0x31F838u;
            goto label_31f838;
        }
    }
    ctx->pc = 0x31F820u;
label_31f820:
    // 0x31f820: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31f824:
    // 0x31f824: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x31f824u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f828:
    // 0x31f828: 0x0  nop
    ctx->pc = 0x31f828u;
    // NOP
label_31f82c:
    // 0x31f82c: 0x0  nop
    ctx->pc = 0x31f82cu;
    // NOP
label_31f830:
    // 0x31f830: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_31f834:
    if (ctx->pc == 0x31F834u) {
        ctx->pc = 0x31F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F830u;
        // 0x31f834: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F838u;
        goto label_31f838;
    }
    ctx->pc = 0x31F830u;
    {
        const bool branch_taken_0x31f830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F830u;
        // 0x31f834: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f830) {
            ctx->pc = 0x31F820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f820;
        }
    }
    ctx->pc = 0x31F838u;
label_31f838:
    // 0x31f838: 0x2e420401  sltiu       $v0, $s2, 0x401
    ctx->pc = 0x31f838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_31f83c:
    // 0x31f83c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x31f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31f840:
    // 0x31f840: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x31f840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f844:
    // 0x31f844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31f844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f848:
    // 0x31f848: 0x60f809  jalr        $v1
label_31f84c:
    if (ctx->pc == 0x31F84Cu) {
        ctx->pc = 0x31F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F848u;
        // 0x31f84c: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F850u;
        goto label_31f850;
    }
    ctx->pc = 0x31F848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31F850u);
        ctx->pc = 0x31F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F848u;
        // 0x31f84c: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F848u, 0x31F850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F850u;
label_31f850:
    // 0x31f850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f854:
    // 0x31f854: 0x1a0000b2  blez        $s0, . + 4 + (0xB2 << 2)
label_31f858:
    if (ctx->pc == 0x31F858u) {
        ctx->pc = 0x31F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F854u;
        // 0x31f858: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F85Cu;
        goto label_31f85c;
    }
    ctx->pc = 0x31F854u;
    {
        const bool branch_taken_0x31f854 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F854u;
        // 0x31f858: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f854) {
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31F85Cu;
label_31f85c:
    // 0x31f85c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31f860:
    // 0x31f860: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x31f860u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_31f864:
    // 0x31f864: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31f864u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31f868:
    // 0x31f868: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_31f86c:
    if (ctx->pc == 0x31F86Cu) {
        ctx->pc = 0x31F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F868u;
        // 0x31f86c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F870u;
        goto label_31f870;
    }
    ctx->pc = 0x31F868u;
    {
        const bool branch_taken_0x31f868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F868u;
        // 0x31f86c: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f868) {
            ctx->pc = 0x31F818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f818;
        }
    }
    ctx->pc = 0x31F870u;
label_31f870:
    // 0x31f870: 0x100000af  b           . + 4 + (0xAF << 2)
label_31f874:
    if (ctx->pc == 0x31F874u) {
        ctx->pc = 0x31F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F870u;
        // 0x31f874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F878u;
        goto label_31f878;
    }
    ctx->pc = 0x31F870u;
    {
        const bool branch_taken_0x31f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F870u;
        // 0x31f874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f870) {
            ctx->pc = 0x31FB30u;
            goto label_31fb30;
        }
    }
    ctx->pc = 0x31F878u;
label_31f878:
    // 0x31f878: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x31f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31f87c:
    // 0x31f87c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_31f880:
    if (ctx->pc == 0x31F880u) {
        ctx->pc = 0x31F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F87Cu;
        // 0x31f880: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F884u;
        goto label_31f884;
    }
    ctx->pc = 0x31F87Cu;
    {
        const bool branch_taken_0x31f87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F87Cu;
        // 0x31f880: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f87c) {
            ctx->pc = 0x31F9C0u;
            goto label_31f9c0;
        }
    }
    ctx->pc = 0x31F884u;
label_31f884:
    // 0x31f884: 0x0  nop
    ctx->pc = 0x31f884u;
    // NOP
label_31f888:
    // 0x31f888: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x31f888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31f88c:
    // 0x31f88c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_31f890:
    if (ctx->pc == 0x31F890u) {
        ctx->pc = 0x31F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F88Cu;
        // 0x31f890: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F894u;
        goto label_31f894;
    }
    ctx->pc = 0x31F88Cu;
    {
        const bool branch_taken_0x31f88c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F88Cu;
        // 0x31f890: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f88c) {
            ctx->pc = 0x31F8B0u;
            goto label_31f8b0;
        }
    }
    ctx->pc = 0x31F894u;
label_31f894:
    // 0x31f894: 0x0  nop
    ctx->pc = 0x31f894u;
    // NOP
label_31f898:
    // 0x31f898: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x31f898u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31f89c:
    // 0x31f89c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x31f89cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f8a0:
    // 0x31f8a0: 0x0  nop
    ctx->pc = 0x31f8a0u;
    // NOP
label_31f8a4:
    // 0x31f8a4: 0x0  nop
    ctx->pc = 0x31f8a4u;
    // NOP
label_31f8a8:
    // 0x31f8a8: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_31f8ac:
    if (ctx->pc == 0x31F8ACu) {
        ctx->pc = 0x31F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8A8u;
        // 0x31f8ac: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8B0u;
        goto label_31f8b0;
    }
    ctx->pc = 0x31F8A8u;
    {
        const bool branch_taken_0x31f8a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8A8u;
        // 0x31f8ac: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8a8) {
            ctx->pc = 0x31F898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f898;
        }
    }
    ctx->pc = 0x31F8B0u;
label_31f8b0:
    // 0x31f8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f8b4:
    // 0x31f8b4: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x31f8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_31f8b8:
    // 0x31f8b8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31f8bc:
    if (ctx->pc == 0x31F8BCu) {
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8C0u;
        goto label_31f8c0;
    }
    ctx->pc = 0x31F8B8u;
    {
        const bool branch_taken_0x31f8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x250102b  sltu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b8) {
            ctx->pc = 0x31F8F4u;
            goto label_31f8f4;
        }
    }
    ctx->pc = 0x31F8C0u;
label_31f8c0:
    // 0x31f8c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f8c4:
    // 0x31f8c4: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x31f8c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18));
label_31f8c8:
    // 0x31f8c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31f8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f8cc:
    // 0x31f8cc: 0xc0c48fe  jal         func_3123F8
label_31f8d0:
    if (ctx->pc == 0x31F8D0u) {
        ctx->pc = 0x31F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8CCu;
        // 0x31f8d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8D4u;
        goto label_31f8d4;
    }
    ctx->pc = 0x31F8CCu;
    SET_GPR_U32(ctx, 31, 0x31F8D4u);
    ctx->pc = 0x31F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8CCu;
    // 0x31f8d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x31F8CCu, 0x31F8D4u)) {
        return;
    }
    ctx->pc = 0x31F8D4u;
label_31f8d4:
    // 0x31f8d4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31f8d8:
    // 0x31f8d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f8dc:
    // 0x31f8dc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31f8e0:
    // 0x31f8e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31f8e4:
    // 0x31f8e4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x31f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_31f8e8:
    // 0x31f8e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x31f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_31f8ec:
    // 0x31f8ec: 0x1000002b  b           . + 4 + (0x2B << 2)
label_31f8f0:
    if (ctx->pc == 0x31F8F0u) {
        ctx->pc = 0x31F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8ECu;
        // 0x31f8f0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8F4u;
        goto label_31f8f4;
    }
    ctx->pc = 0x31F8ECu;
    {
        const bool branch_taken_0x31f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8ECu;
        // 0x31f8f0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8ec) {
            ctx->pc = 0x31F99Cu;
            goto label_31f99c;
        }
    }
    ctx->pc = 0x31F8F4u;
label_31f8f4:
    // 0x31f8f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f8f8:
    // 0x31f8f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_31f8fc:
    // 0x31f8fc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x31f8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31f900:
    // 0x31f900: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31f904:
    if (ctx->pc == 0x31F904u) {
        ctx->pc = 0x31F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F900u;
        // 0x31f904: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F908u;
        goto label_31f908;
    }
    ctx->pc = 0x31F900u;
    {
        const bool branch_taken_0x31f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F900u;
        // 0x31f904: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f900) {
            ctx->pc = 0x31F93Cu;
            goto label_31f93c;
        }
    }
    ctx->pc = 0x31F908u;
label_31f908:
    // 0x31f908: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31f90c:
    if (ctx->pc == 0x31F90Cu) {
        ctx->pc = 0x31F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F908u;
        // 0x31f90c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F910u;
        goto label_31f910;
    }
    ctx->pc = 0x31F908u;
    {
        const bool branch_taken_0x31f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F908u;
        // 0x31f90c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f908) {
            ctx->pc = 0x31F93Cu;
            goto label_31f93c;
        }
    }
    ctx->pc = 0x31F910u;
label_31f910:
    // 0x31f910: 0xc0c48fe  jal         func_3123F8
label_31f914:
    if (ctx->pc == 0x31F914u) {
        ctx->pc = 0x31F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F910u;
        // 0x31f914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F918u;
        goto label_31f918;
    }
    ctx->pc = 0x31F910u;
    SET_GPR_U32(ctx, 31, 0x31F918u);
    ctx->pc = 0x31F914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F910u;
    // 0x31f914: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x31F910u, 0x31F918u)) {
        return;
    }
    ctx->pc = 0x31F918u;
label_31f918:
    // 0x31f918: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f91c:
    // 0x31f91c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31f920:
    // 0x31f920: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31f924:
    // 0x31f924: 0xc0c4c8a  jal         func_313228
label_31f928:
    if (ctx->pc == 0x31F928u) {
        ctx->pc = 0x31F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F924u;
        // 0x31f928: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F92Cu;
        goto label_31f92c;
    }
    ctx->pc = 0x31F924u;
    SET_GPR_U32(ctx, 31, 0x31F92Cu);
    ctx->pc = 0x31F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F924u;
    // 0x31f928: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x31F924u, 0x31F92Cu)) {
        return;
    }
    ctx->pc = 0x31F92Cu;
label_31f92c:
    // 0x31f92c: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_31f930:
    if (ctx->pc == 0x31F930u) {
        ctx->pc = 0x31F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F92Cu;
        // 0x31f930: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F934u;
        goto label_31f934;
    }
    ctx->pc = 0x31F92Cu;
    {
        const bool branch_taken_0x31f92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f92c) {
            ctx->pc = 0x31F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F92Cu;
            // 0x31f930: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB24u;
            goto label_31fb24;
        }
    }
    ctx->pc = 0x31F934u;
label_31f934:
    // 0x31f934: 0x1000001a  b           . + 4 + (0x1A << 2)
label_31f938:
    if (ctx->pc == 0x31F938u) {
        ctx->pc = 0x31F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F934u;
        // 0x31f938: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F93Cu;
        goto label_31f93c;
    }
    ctx->pc = 0x31F934u;
    {
        const bool branch_taken_0x31f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F934u;
        // 0x31f938: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f934) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F93Cu;
label_31f93c:
    // 0x31f93c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x31f93cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_31f940:
    // 0x31f940: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x31f940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_31f944:
    // 0x31f944: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_31f948:
    if (ctx->pc == 0x31F948u) {
        ctx->pc = 0x31F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F944u;
        // 0x31f948: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F94Cu;
        goto label_31f94c;
    }
    ctx->pc = 0x31F944u;
    {
        const bool branch_taken_0x31f944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f944) {
            ctx->pc = 0x31F948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F944u;
            // 0x31f948: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F974u;
            goto label_31f974;
        }
    }
    ctx->pc = 0x31F94Cu;
label_31f94c:
    // 0x31f94c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x31f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_31f950:
    // 0x31f950: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31f950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31f954:
    // 0x31f954: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x31f954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31f958:
    // 0x31f958: 0x40f809  jalr        $v0
label_31f95c:
    if (ctx->pc == 0x31F95Cu) {
        ctx->pc = 0x31F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F958u;
        // 0x31f95c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F960u;
        goto label_31f960;
    }
    ctx->pc = 0x31F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F960u);
        ctx->pc = 0x31F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F958u;
        // 0x31f95c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F958u, 0x31F960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F960u;
label_31f960:
    // 0x31f960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f964:
    // 0x31f964: 0x5a00006f  blezl       $s0, . + 4 + (0x6F << 2)
label_31f968:
    if (ctx->pc == 0x31F968u) {
        ctx->pc = 0x31F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F964u;
        // 0x31f968: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F96Cu;
        goto label_31f96c;
    }
    ctx->pc = 0x31F964u;
    {
        const bool branch_taken_0x31f964 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x31f964) {
            ctx->pc = 0x31F968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F964u;
            // 0x31f968: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB24u;
            goto label_31fb24;
        }
    }
    ctx->pc = 0x31F96Cu;
label_31f96c:
    // 0x31f96c: 0x1000000c  b           . + 4 + (0xC << 2)
label_31f970:
    if (ctx->pc == 0x31F970u) {
        ctx->pc = 0x31F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F96Cu;
        // 0x31f970: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F974u;
        goto label_31f974;
    }
    ctx->pc = 0x31F96Cu;
    {
        const bool branch_taken_0x31f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F96Cu;
        // 0x31f970: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f96c) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F974u;
label_31f974:
    // 0x31f974: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f978:
    // 0x31f978: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31f978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f97c:
    // 0x31f97c: 0xc0c48fe  jal         func_3123F8
label_31f980:
    if (ctx->pc == 0x31F980u) {
        ctx->pc = 0x31F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F97Cu;
        // 0x31f980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F984u;
        goto label_31f984;
    }
    ctx->pc = 0x31F97Cu;
    SET_GPR_U32(ctx, 31, 0x31F984u);
    ctx->pc = 0x31F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F97Cu;
    // 0x31f980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x31F97Cu, 0x31F984u)) {
        return;
    }
    ctx->pc = 0x31F984u;
label_31f984:
    // 0x31f984: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31f984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31f988:
    // 0x31f988: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f98c:
    // 0x31f98c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31f990:
    // 0x31f990: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31f994:
    // 0x31f994: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x31f994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_31f998:
    // 0x31f998: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x31f998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_31f99c:
    // 0x31f99c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x31f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31f9a0:
    // 0x31f9a0: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x31f9a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_31f9a4:
    // 0x31f9a4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x31f9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_31f9a8:
    // 0x31f9a8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31f9ac:
    // 0x31f9ac: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_31f9b0:
    if (ctx->pc == 0x31F9B0u) {
        ctx->pc = 0x31F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9ACu;
        // 0x31f9b0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9B4u;
        goto label_31f9b4;
    }
    ctx->pc = 0x31F9ACu;
    {
        const bool branch_taken_0x31f9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9ACu;
        // 0x31f9b0: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9ac) {
            ctx->pc = 0x31F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f888;
        }
    }
    ctx->pc = 0x31F9B4u;
label_31f9b4:
    // 0x31f9b4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_31f9b8:
    if (ctx->pc == 0x31F9B8u) {
        ctx->pc = 0x31F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9B4u;
        // 0x31f9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9BCu;
        goto label_31f9bc;
    }
    ctx->pc = 0x31F9B4u;
    {
        const bool branch_taken_0x31f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9B4u;
        // 0x31f9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9b4) {
            ctx->pc = 0x31FB30u;
            goto label_31fb30;
        }
    }
    ctx->pc = 0x31F9BCu;
label_31f9bc:
    // 0x31f9bc: 0x0  nop
    ctx->pc = 0x31f9bcu;
    // NOP
label_31f9c0:
    // 0x31f9c0: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_31f9c4:
    if (ctx->pc == 0x31F9C4u) {
        ctx->pc = 0x31F9C8u;
        goto label_31f9c8;
    }
    ctx->pc = 0x31F9C0u;
    {
        const bool branch_taken_0x31f9c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f9c0) {
            ctx->pc = 0x31F9E8u;
            goto label_31f9e8;
        }
    }
    ctx->pc = 0x31F9C8u;
label_31f9c8:
    // 0x31f9c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x31f9c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f9cc:
    // 0x31f9cc: 0x0  nop
    ctx->pc = 0x31f9ccu;
    // NOP
label_31f9d0:
    // 0x31f9d0: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31f9d4:
    // 0x31f9d4: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x31f9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_31f9d8:
    // 0x31f9d8: 0x0  nop
    ctx->pc = 0x31f9d8u;
    // NOP
label_31f9dc:
    // 0x31f9dc: 0x0  nop
    ctx->pc = 0x31f9dcu;
    // NOP
label_31f9e0:
    // 0x31f9e0: 0x1240fffb  beqz        $s2, . + 4 + (-0x5 << 2)
label_31f9e4:
    if (ctx->pc == 0x31F9E4u) {
        ctx->pc = 0x31F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9E0u;
        // 0x31f9e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9E8u;
        goto label_31f9e8;
    }
    ctx->pc = 0x31F9E0u;
    {
        const bool branch_taken_0x31f9e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9E0u;
        // 0x31f9e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9e0) {
            ctx->pc = 0x31F9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f9d0;
        }
    }
    ctx->pc = 0x31F9E8u;
label_31f9e8:
    // 0x31f9e8: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_31f9ec:
    if (ctx->pc == 0x31F9ECu) {
        ctx->pc = 0x31F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9E8u;
        // 0x31f9ec: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9F0u;
        goto label_31f9f0;
    }
    ctx->pc = 0x31F9E8u;
    {
        const bool branch_taken_0x31f9e8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f9e8) {
            ctx->pc = 0x31F9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F9E8u;
            // 0x31f9ec: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FA20u;
            goto label_31fa20;
        }
    }
    ctx->pc = 0x31F9F0u;
label_31f9f0:
    // 0x31f9f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31f9f4:
    // 0x31f9f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x31f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_31f9f8:
    // 0x31f9f8: 0xc0c489e  jal         func_312278
label_31f9fc:
    if (ctx->pc == 0x31F9FCu) {
        ctx->pc = 0x31F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9F8u;
        // 0x31f9fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA00u;
        goto label_31fa00;
    }
    ctx->pc = 0x31F9F8u;
    SET_GPR_U32(ctx, 31, 0x31FA00u);
    ctx->pc = 0x31F9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F9F8u;
    // 0x31f9fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312278u, 0x31F9F8u, 0x31FA00u)) {
        return;
    }
    ctx->pc = 0x31FA00u;
label_31fa00:
    // 0x31fa00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31fa00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fa04:
    // 0x31fa04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_31fa08:
    if (ctx->pc == 0x31FA08u) {
        ctx->pc = 0x31FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA04u;
        // 0x31fa08: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA0Cu;
        goto label_31fa0c;
    }
    ctx->pc = 0x31FA04u;
    {
        const bool branch_taken_0x31fa04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA04u;
        // 0x31fa08: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa04) {
            ctx->pc = 0x31FA14u;
            goto label_31fa14;
        }
    }
    ctx->pc = 0x31FA0Cu;
label_31fa0c:
    // 0x31fa0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_31fa10:
    if (ctx->pc == 0x31FA10u) {
        ctx->pc = 0x31FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA0Cu;
        // 0x31fa10: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA14u;
        goto label_31fa14;
    }
    ctx->pc = 0x31FA0Cu;
    {
        const bool branch_taken_0x31fa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA0Cu;
        // 0x31fa10: 0x62a823  subu        $s5, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa0c) {
            ctx->pc = 0x31FA18u;
            goto label_31fa18;
        }
    }
    ctx->pc = 0x31FA14u;
label_31fa14:
    // 0x31fa14: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x31fa14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31fa18:
    // 0x31fa18: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x31fa18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fa1c:
    // 0x31fa1c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x31fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_31fa20:
    // 0x31fa20: 0x255202b  sltu        $a0, $s2, $s5
    ctx->pc = 0x31fa20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_31fa24:
    // 0x31fa24: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x31fa24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31fa28:
    // 0x31fa28: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31fa28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31fa2c:
    // 0x31fa2c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x31fa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31fa30:
    // 0x31fa30: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x31fa30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31fa34:
    // 0x31fa34: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x31fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_31fa38:
    // 0x31fa38: 0x2a4380a  movz        $a3, $s5, $a0
    ctx->pc = 0x31fa38u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 21));
label_31fa3c:
    // 0x31fa3c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x31fa3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_31fa40:
    // 0x31fa40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31fa44:
    if (ctx->pc == 0x31FA44u) {
        ctx->pc = 0x31FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA40u;
        // 0x31fa44: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA48u;
        goto label_31fa48;
    }
    ctx->pc = 0x31FA40u;
    {
        const bool branch_taken_0x31fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA40u;
        // 0x31fa44: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa40) {
            ctx->pc = 0x31FA84u;
            goto label_31fa84;
        }
    }
    ctx->pc = 0x31FA48u;
label_31fa48:
    // 0x31fa48: 0x207102a  slt         $v0, $s0, $a3
    ctx->pc = 0x31fa48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_31fa4c:
    // 0x31fa4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_31fa50:
    if (ctx->pc == 0x31FA50u) {
        ctx->pc = 0x31FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA4Cu;
        // 0x31fa50: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA54u;
        goto label_31fa54;
    }
    ctx->pc = 0x31FA4Cu;
    {
        const bool branch_taken_0x31fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA4Cu;
        // 0x31fa50: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa4c) {
            ctx->pc = 0x31FA84u;
            goto label_31fa84;
        }
    }
    ctx->pc = 0x31FA54u;
label_31fa54:
    // 0x31fa54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31fa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31fa58:
    // 0x31fa58: 0xc0c48fe  jal         func_3123F8
label_31fa5c:
    if (ctx->pc == 0x31FA5Cu) {
        ctx->pc = 0x31FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA58u;
        // 0x31fa5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA60u;
        goto label_31fa60;
    }
    ctx->pc = 0x31FA58u;
    SET_GPR_U32(ctx, 31, 0x31FA60u);
    ctx->pc = 0x31FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA58u;
    // 0x31fa5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x31FA58u, 0x31FA60u)) {
        return;
    }
    ctx->pc = 0x31FA60u;
label_31fa60:
    // 0x31fa60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31fa64:
    // 0x31fa64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31fa68:
    // 0x31fa68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31fa6c:
    // 0x31fa6c: 0xc0c4c8a  jal         func_313228
label_31fa70:
    if (ctx->pc == 0x31FA70u) {
        ctx->pc = 0x31FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA6Cu;
        // 0x31fa70: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA74u;
        goto label_31fa74;
    }
    ctx->pc = 0x31FA6Cu;
    SET_GPR_U32(ctx, 31, 0x31FA74u);
    ctx->pc = 0x31FA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA6Cu;
    // 0x31fa70: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x31FA6Cu, 0x31FA74u)) {
        return;
    }
    ctx->pc = 0x31FA74u;
label_31fa74:
    // 0x31fa74: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_31fa78:
    if (ctx->pc == 0x31FA78u) {
        ctx->pc = 0x31FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA74u;
        // 0x31fa78: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA7Cu;
        goto label_31fa7c;
    }
    ctx->pc = 0x31FA74u;
    {
        const bool branch_taken_0x31fa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA74u;
        // 0x31fa78: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fa74) {
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31FA7Cu;
label_31fa7c:
    // 0x31fa7c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_31fa80:
    if (ctx->pc == 0x31FA80u) {
        ctx->pc = 0x31FA84u;
        goto label_31fa84;
    }
    ctx->pc = 0x31FA7Cu;
    {
        const bool branch_taken_0x31fa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa7c) {
            ctx->pc = 0x31FAE8u;
            goto label_31fae8;
        }
    }
    ctx->pc = 0x31FA84u;
label_31fa84:
    // 0x31fa84: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x31fa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31fa88:
    // 0x31fa88: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x31fa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_31fa8c:
    // 0x31fa8c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_31fa90:
    if (ctx->pc == 0x31FA90u) {
        ctx->pc = 0x31FA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA8Cu;
        // 0x31fa90: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA94u;
        goto label_31fa94;
    }
    ctx->pc = 0x31FA8Cu;
    {
        const bool branch_taken_0x31fa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fa8c) {
            ctx->pc = 0x31FA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FA8Cu;
            // 0x31fa90: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FABCu;
            goto label_31fabc;
        }
    }
    ctx->pc = 0x31FA94u;
label_31fa94:
    // 0x31fa94: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_31fa98:
    // 0x31fa98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31fa98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31fa9c:
    // 0x31fa9c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x31fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_31faa0:
    // 0x31faa0: 0x40f809  jalr        $v0
label_31faa4:
    if (ctx->pc == 0x31FAA4u) {
        ctx->pc = 0x31FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAA0u;
        // 0x31faa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FAA8u;
        goto label_31faa8;
    }
    ctx->pc = 0x31FAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FAA8u);
        ctx->pc = 0x31FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAA0u;
        // 0x31faa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FAA0u, 0x31FAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FAA8u;
label_31faa8:
    // 0x31faa8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31faa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31faac:
    // 0x31faac: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_31fab0:
    if (ctx->pc == 0x31FAB0u) {
        ctx->pc = 0x31FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAACu;
        // 0x31fab0: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FAB4u;
        goto label_31fab4;
    }
    ctx->pc = 0x31FAACu;
    {
        const bool branch_taken_0x31faac = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x31FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAACu;
        // 0x31fab0: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faac) {
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31FAB4u;
label_31fab4:
    // 0x31fab4: 0x1000000c  b           . + 4 + (0xC << 2)
label_31fab8:
    if (ctx->pc == 0x31FAB8u) {
        ctx->pc = 0x31FABCu;
        goto label_31fabc;
    }
    ctx->pc = 0x31FAB4u;
    {
        const bool branch_taken_0x31fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fab4) {
            ctx->pc = 0x31FAE8u;
            goto label_31fae8;
        }
    }
    ctx->pc = 0x31FABCu;
label_31fabc:
    // 0x31fabc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31fac0:
    // 0x31fac0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31fac4:
    // 0x31fac4: 0xc0c48fe  jal         func_3123F8
label_31fac8:
    if (ctx->pc == 0x31FAC8u) {
        ctx->pc = 0x31FAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAC4u;
        // 0x31fac8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FACCu;
        goto label_31facc;
    }
    ctx->pc = 0x31FAC4u;
    SET_GPR_U32(ctx, 31, 0x31FACCu);
    ctx->pc = 0x31FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAC4u;
    // 0x31fac8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3123F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3123F8u, 0x31FAC4u, 0x31FACCu)) {
        return;
    }
    ctx->pc = 0x31FACCu;
label_31facc:
    // 0x31facc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31fad0:
    // 0x31fad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31fad4:
    // 0x31fad4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_31fad8:
    // 0x31fad8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31fadc:
    // 0x31fadc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x31fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_31fae0:
    // 0x31fae0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x31fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_31fae4:
    // 0x31fae4: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x31fae4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_31fae8:
    // 0x31fae8: 0x56a00006  bnel        $s5, $zero, . + 4 + (0x6 << 2)
label_31faec:
    if (ctx->pc == 0x31FAECu) {
        ctx->pc = 0x31FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAE8u;
        // 0x31faec: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FAF0u;
        goto label_31faf0;
    }
    ctx->pc = 0x31FAE8u;
    {
        const bool branch_taken_0x31fae8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fae8) {
            ctx->pc = 0x31FAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FAE8u;
            // 0x31faec: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB04u;
            goto label_31fb04;
        }
    }
    ctx->pc = 0x31FAF0u;
label_31faf0:
    // 0x31faf0: 0xc0c4c8a  jal         func_313228
label_31faf4:
    if (ctx->pc == 0x31FAF4u) {
        ctx->pc = 0x31FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAF0u;
        // 0x31faf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FAF8u;
        goto label_31faf8;
    }
    ctx->pc = 0x31FAF0u;
    SET_GPR_U32(ctx, 31, 0x31FAF8u);
    ctx->pc = 0x31FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FAF0u;
    // 0x31faf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x31FAF0u, 0x31FAF8u)) {
        return;
    }
    ctx->pc = 0x31FAF8u;
label_31faf8:
    // 0x31faf8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_31fafc:
    if (ctx->pc == 0x31FAFCu) {
        ctx->pc = 0x31FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAF8u;
        // 0x31fafc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB00u;
        goto label_31fb00;
    }
    ctx->pc = 0x31FAF8u;
    {
        const bool branch_taken_0x31faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAF8u;
        // 0x31fafc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faf8) {
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31FB00u;
label_31fb00:
    // 0x31fb00: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x31fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31fb04:
    // 0x31fb04: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x31fb04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_31fb08:
    // 0x31fb08: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x31fb08u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_31fb0c:
    // 0x31fb0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x31fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_31fb10:
    // 0x31fb10: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
label_31fb14:
    if (ctx->pc == 0x31FB14u) {
        ctx->pc = 0x31FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB10u;
        // 0x31fb14: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB18u;
        goto label_31fb18;
    }
    ctx->pc = 0x31FB10u;
    {
        const bool branch_taken_0x31fb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB10u;
        // 0x31fb14: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb10) {
            ctx->pc = 0x31F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f9c0;
        }
    }
    ctx->pc = 0x31FB18u;
label_31fb18:
    // 0x31fb18: 0x10000005  b           . + 4 + (0x5 << 2)
label_31fb1c:
    if (ctx->pc == 0x31FB1Cu) {
        ctx->pc = 0x31FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB18u;
        // 0x31fb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB20u;
        goto label_31fb20;
    }
    ctx->pc = 0x31FB18u;
    {
        const bool branch_taken_0x31fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB18u;
        // 0x31fb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb18) {
            ctx->pc = 0x31FB30u;
            goto label_31fb30;
        }
    }
    ctx->pc = 0x31FB20u;
label_31fb20:
    // 0x31fb20: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x31fb20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_31fb24:
    // 0x31fb24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31fb28:
    // 0x31fb28: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x31fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_31fb2c:
    // 0x31fb2c: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x31fb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_31fb30:
    // 0x31fb30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x31fb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31fb34:
    // 0x31fb34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x31fb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31fb38:
    // 0x31fb38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x31fb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31fb3c:
    // 0x31fb3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x31fb3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31fb40:
    // 0x31fb40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x31fb40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31fb44:
    // 0x31fb44: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x31fb44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31fb48:
    // 0x31fb48: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x31fb48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31fb4c:
    // 0x31fb4c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x31fb4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31fb50:
    // 0x31fb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31fb54:
    // 0x31fb54: 0x3e00008  jr          $ra
label_31fb58:
    if (ctx->pc == 0x31FB58u) {
        ctx->pc = 0x31FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB54u;
        // 0x31fb58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FB5Cu;
        goto label_31fb5c;
    }
    ctx->pc = 0x31FB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB54u;
        // 0x31fb58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB5Cu;
label_31fb5c:
    // 0x31fb5c: 0x0  nop
    ctx->pc = 0x31fb5cu;
    // NOP
    ctx->pc = 0x31fb60u;
}
