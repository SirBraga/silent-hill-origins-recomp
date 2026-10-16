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

// Function: sub_0025A8E0
// Address: 0x25a8e0 - 0x25ad00
void sub_0025A8E0_0x25a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A8E0_0x25a8e0");
#endif

    switch (ctx->pc) {
        case 0x25a8e0u: goto label_25a8e0;
        case 0x25a8e4u: goto label_25a8e4;
        case 0x25a8e8u: goto label_25a8e8;
        case 0x25a8ecu: goto label_25a8ec;
        case 0x25a8f0u: goto label_25a8f0;
        case 0x25a8f4u: goto label_25a8f4;
        case 0x25a8f8u: goto label_25a8f8;
        case 0x25a8fcu: goto label_25a8fc;
        case 0x25a900u: goto label_25a900;
        case 0x25a904u: goto label_25a904;
        case 0x25a908u: goto label_25a908;
        case 0x25a90cu: goto label_25a90c;
        case 0x25a910u: goto label_25a910;
        case 0x25a914u: goto label_25a914;
        case 0x25a918u: goto label_25a918;
        case 0x25a91cu: goto label_25a91c;
        case 0x25a920u: goto label_25a920;
        case 0x25a924u: goto label_25a924;
        case 0x25a928u: goto label_25a928;
        case 0x25a92cu: goto label_25a92c;
        case 0x25a930u: goto label_25a930;
        case 0x25a934u: goto label_25a934;
        case 0x25a938u: goto label_25a938;
        case 0x25a93cu: goto label_25a93c;
        case 0x25a940u: goto label_25a940;
        case 0x25a944u: goto label_25a944;
        case 0x25a948u: goto label_25a948;
        case 0x25a94cu: goto label_25a94c;
        case 0x25a950u: goto label_25a950;
        case 0x25a954u: goto label_25a954;
        case 0x25a958u: goto label_25a958;
        case 0x25a95cu: goto label_25a95c;
        case 0x25a960u: goto label_25a960;
        case 0x25a964u: goto label_25a964;
        case 0x25a968u: goto label_25a968;
        case 0x25a96cu: goto label_25a96c;
        case 0x25a970u: goto label_25a970;
        case 0x25a974u: goto label_25a974;
        case 0x25a978u: goto label_25a978;
        case 0x25a97cu: goto label_25a97c;
        case 0x25a980u: goto label_25a980;
        case 0x25a984u: goto label_25a984;
        case 0x25a988u: goto label_25a988;
        case 0x25a98cu: goto label_25a98c;
        case 0x25a990u: goto label_25a990;
        case 0x25a994u: goto label_25a994;
        case 0x25a998u: goto label_25a998;
        case 0x25a99cu: goto label_25a99c;
        case 0x25a9a0u: goto label_25a9a0;
        case 0x25a9a4u: goto label_25a9a4;
        case 0x25a9a8u: goto label_25a9a8;
        case 0x25a9acu: goto label_25a9ac;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9b4u: goto label_25a9b4;
        case 0x25a9b8u: goto label_25a9b8;
        case 0x25a9bcu: goto label_25a9bc;
        case 0x25a9c0u: goto label_25a9c0;
        case 0x25a9c4u: goto label_25a9c4;
        case 0x25a9c8u: goto label_25a9c8;
        case 0x25a9ccu: goto label_25a9cc;
        case 0x25a9d0u: goto label_25a9d0;
        case 0x25a9d4u: goto label_25a9d4;
        case 0x25a9d8u: goto label_25a9d8;
        case 0x25a9dcu: goto label_25a9dc;
        case 0x25a9e0u: goto label_25a9e0;
        case 0x25a9e4u: goto label_25a9e4;
        case 0x25a9e8u: goto label_25a9e8;
        case 0x25a9ecu: goto label_25a9ec;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25a9fcu: goto label_25a9fc;
        case 0x25aa00u: goto label_25aa00;
        case 0x25aa04u: goto label_25aa04;
        case 0x25aa08u: goto label_25aa08;
        case 0x25aa0cu: goto label_25aa0c;
        case 0x25aa10u: goto label_25aa10;
        case 0x25aa14u: goto label_25aa14;
        case 0x25aa18u: goto label_25aa18;
        case 0x25aa1cu: goto label_25aa1c;
        case 0x25aa20u: goto label_25aa20;
        case 0x25aa24u: goto label_25aa24;
        case 0x25aa28u: goto label_25aa28;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25aa30u: goto label_25aa30;
        case 0x25aa34u: goto label_25aa34;
        case 0x25aa38u: goto label_25aa38;
        case 0x25aa3cu: goto label_25aa3c;
        case 0x25aa40u: goto label_25aa40;
        case 0x25aa44u: goto label_25aa44;
        case 0x25aa48u: goto label_25aa48;
        case 0x25aa4cu: goto label_25aa4c;
        case 0x25aa50u: goto label_25aa50;
        case 0x25aa54u: goto label_25aa54;
        case 0x25aa58u: goto label_25aa58;
        case 0x25aa5cu: goto label_25aa5c;
        case 0x25aa60u: goto label_25aa60;
        case 0x25aa64u: goto label_25aa64;
        case 0x25aa68u: goto label_25aa68;
        case 0x25aa6cu: goto label_25aa6c;
        case 0x25aa70u: goto label_25aa70;
        case 0x25aa74u: goto label_25aa74;
        case 0x25aa78u: goto label_25aa78;
        case 0x25aa7cu: goto label_25aa7c;
        case 0x25aa80u: goto label_25aa80;
        case 0x25aa84u: goto label_25aa84;
        case 0x25aa88u: goto label_25aa88;
        case 0x25aa8cu: goto label_25aa8c;
        case 0x25aa90u: goto label_25aa90;
        case 0x25aa94u: goto label_25aa94;
        case 0x25aa98u: goto label_25aa98;
        case 0x25aa9cu: goto label_25aa9c;
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aaa4u: goto label_25aaa4;
        case 0x25aaa8u: goto label_25aaa8;
        case 0x25aaacu: goto label_25aaac;
        case 0x25aab0u: goto label_25aab0;
        case 0x25aab4u: goto label_25aab4;
        case 0x25aab8u: goto label_25aab8;
        case 0x25aabcu: goto label_25aabc;
        case 0x25aac0u: goto label_25aac0;
        case 0x25aac4u: goto label_25aac4;
        case 0x25aac8u: goto label_25aac8;
        case 0x25aaccu: goto label_25aacc;
        case 0x25aad0u: goto label_25aad0;
        case 0x25aad4u: goto label_25aad4;
        case 0x25aad8u: goto label_25aad8;
        case 0x25aadcu: goto label_25aadc;
        case 0x25aae0u: goto label_25aae0;
        case 0x25aae4u: goto label_25aae4;
        case 0x25aae8u: goto label_25aae8;
        case 0x25aaecu: goto label_25aaec;
        case 0x25aaf0u: goto label_25aaf0;
        case 0x25aaf4u: goto label_25aaf4;
        case 0x25aaf8u: goto label_25aaf8;
        case 0x25aafcu: goto label_25aafc;
        case 0x25ab00u: goto label_25ab00;
        case 0x25ab04u: goto label_25ab04;
        case 0x25ab08u: goto label_25ab08;
        case 0x25ab0cu: goto label_25ab0c;
        case 0x25ab10u: goto label_25ab10;
        case 0x25ab14u: goto label_25ab14;
        case 0x25ab18u: goto label_25ab18;
        case 0x25ab1cu: goto label_25ab1c;
        case 0x25ab20u: goto label_25ab20;
        case 0x25ab24u: goto label_25ab24;
        case 0x25ab28u: goto label_25ab28;
        case 0x25ab2cu: goto label_25ab2c;
        case 0x25ab30u: goto label_25ab30;
        case 0x25ab34u: goto label_25ab34;
        case 0x25ab38u: goto label_25ab38;
        case 0x25ab3cu: goto label_25ab3c;
        case 0x25ab40u: goto label_25ab40;
        case 0x25ab44u: goto label_25ab44;
        case 0x25ab48u: goto label_25ab48;
        case 0x25ab4cu: goto label_25ab4c;
        case 0x25ab50u: goto label_25ab50;
        case 0x25ab54u: goto label_25ab54;
        case 0x25ab58u: goto label_25ab58;
        case 0x25ab5cu: goto label_25ab5c;
        case 0x25ab60u: goto label_25ab60;
        case 0x25ab64u: goto label_25ab64;
        case 0x25ab68u: goto label_25ab68;
        case 0x25ab6cu: goto label_25ab6c;
        case 0x25ab70u: goto label_25ab70;
        case 0x25ab74u: goto label_25ab74;
        case 0x25ab78u: goto label_25ab78;
        case 0x25ab7cu: goto label_25ab7c;
        case 0x25ab80u: goto label_25ab80;
        case 0x25ab84u: goto label_25ab84;
        case 0x25ab88u: goto label_25ab88;
        case 0x25ab8cu: goto label_25ab8c;
        case 0x25ab90u: goto label_25ab90;
        case 0x25ab94u: goto label_25ab94;
        case 0x25ab98u: goto label_25ab98;
        case 0x25ab9cu: goto label_25ab9c;
        case 0x25aba0u: goto label_25aba0;
        case 0x25aba4u: goto label_25aba4;
        case 0x25aba8u: goto label_25aba8;
        case 0x25abacu: goto label_25abac;
        case 0x25abb0u: goto label_25abb0;
        case 0x25abb4u: goto label_25abb4;
        case 0x25abb8u: goto label_25abb8;
        case 0x25abbcu: goto label_25abbc;
        case 0x25abc0u: goto label_25abc0;
        case 0x25abc4u: goto label_25abc4;
        case 0x25abc8u: goto label_25abc8;
        case 0x25abccu: goto label_25abcc;
        case 0x25abd0u: goto label_25abd0;
        case 0x25abd4u: goto label_25abd4;
        case 0x25abd8u: goto label_25abd8;
        case 0x25abdcu: goto label_25abdc;
        case 0x25abe0u: goto label_25abe0;
        case 0x25abe4u: goto label_25abe4;
        case 0x25abe8u: goto label_25abe8;
        case 0x25abecu: goto label_25abec;
        case 0x25abf0u: goto label_25abf0;
        case 0x25abf4u: goto label_25abf4;
        case 0x25abf8u: goto label_25abf8;
        case 0x25abfcu: goto label_25abfc;
        case 0x25ac00u: goto label_25ac00;
        case 0x25ac04u: goto label_25ac04;
        case 0x25ac08u: goto label_25ac08;
        case 0x25ac0cu: goto label_25ac0c;
        case 0x25ac10u: goto label_25ac10;
        case 0x25ac14u: goto label_25ac14;
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac1cu: goto label_25ac1c;
        case 0x25ac20u: goto label_25ac20;
        case 0x25ac24u: goto label_25ac24;
        case 0x25ac28u: goto label_25ac28;
        case 0x25ac2cu: goto label_25ac2c;
        case 0x25ac30u: goto label_25ac30;
        case 0x25ac34u: goto label_25ac34;
        case 0x25ac38u: goto label_25ac38;
        case 0x25ac3cu: goto label_25ac3c;
        case 0x25ac40u: goto label_25ac40;
        case 0x25ac44u: goto label_25ac44;
        case 0x25ac48u: goto label_25ac48;
        case 0x25ac4cu: goto label_25ac4c;
        case 0x25ac50u: goto label_25ac50;
        case 0x25ac54u: goto label_25ac54;
        case 0x25ac58u: goto label_25ac58;
        case 0x25ac5cu: goto label_25ac5c;
        case 0x25ac60u: goto label_25ac60;
        case 0x25ac64u: goto label_25ac64;
        case 0x25ac68u: goto label_25ac68;
        case 0x25ac6cu: goto label_25ac6c;
        case 0x25ac70u: goto label_25ac70;
        case 0x25ac74u: goto label_25ac74;
        case 0x25ac78u: goto label_25ac78;
        case 0x25ac7cu: goto label_25ac7c;
        case 0x25ac80u: goto label_25ac80;
        case 0x25ac84u: goto label_25ac84;
        case 0x25ac88u: goto label_25ac88;
        case 0x25ac8cu: goto label_25ac8c;
        case 0x25ac90u: goto label_25ac90;
        case 0x25ac94u: goto label_25ac94;
        case 0x25ac98u: goto label_25ac98;
        case 0x25ac9cu: goto label_25ac9c;
        case 0x25aca0u: goto label_25aca0;
        case 0x25aca4u: goto label_25aca4;
        case 0x25aca8u: goto label_25aca8;
        case 0x25acacu: goto label_25acac;
        case 0x25acb0u: goto label_25acb0;
        case 0x25acb4u: goto label_25acb4;
        case 0x25acb8u: goto label_25acb8;
        case 0x25acbcu: goto label_25acbc;
        case 0x25acc0u: goto label_25acc0;
        case 0x25acc4u: goto label_25acc4;
        case 0x25acc8u: goto label_25acc8;
        case 0x25acccu: goto label_25accc;
        case 0x25acd0u: goto label_25acd0;
        case 0x25acd4u: goto label_25acd4;
        case 0x25acd8u: goto label_25acd8;
        case 0x25acdcu: goto label_25acdc;
        case 0x25ace0u: goto label_25ace0;
        case 0x25ace4u: goto label_25ace4;
        case 0x25ace8u: goto label_25ace8;
        case 0x25acecu: goto label_25acec;
        case 0x25acf0u: goto label_25acf0;
        case 0x25acf4u: goto label_25acf4;
        case 0x25acf8u: goto label_25acf8;
        case 0x25acfcu: goto label_25acfc;
        default: break;
    }

    ctx->pc = 0x25a8e0u;

label_25a8e0:
    // 0x25a8e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_25a8e4:
    // 0x25a8e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25a8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25a8e8:
    // 0x25a8e8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25a8ec:
    // 0x25a8ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x25a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25a8f0:
    // 0x25a8f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25a8f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25a8f4:
    // 0x25a8f4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25a8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25a8f8:
    // 0x25a8f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25a8fc:
    // 0x25a8fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_25a900:
    // 0x25a900: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x25a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25a904:
    // 0x25a904: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x25a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_25a908:
    // 0x25a908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25a90c:
    // 0x25a90c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x25a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25a910:
    // 0x25a910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25a914:
    if (ctx->pc == 0x25A914u) {
        ctx->pc = 0x25A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A910u;
        // 0x25a914: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A918u;
        goto label_25a918;
    }
    ctx->pc = 0x25A910u;
    {
        const bool branch_taken_0x25a910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A910u;
        // 0x25a914: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a910) {
            ctx->pc = 0x25A920u;
            goto label_25a920;
        }
    }
    ctx->pc = 0x25A918u;
label_25a918:
    // 0x25a918: 0x100000ee  b           . + 4 + (0xEE << 2)
label_25a91c:
    if (ctx->pc == 0x25A91Cu) {
        ctx->pc = 0x25A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A918u;
        // 0x25a91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A920u;
        goto label_25a920;
    }
    ctx->pc = 0x25A918u;
    {
        const bool branch_taken_0x25a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A918u;
        // 0x25a91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a918) {
            ctx->pc = 0x25ACD4u;
            goto label_25acd4;
        }
    }
    ctx->pc = 0x25A920u;
label_25a920:
    // 0x25a920: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25a920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25a924:
    // 0x25a924: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x25a924u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_25a928:
    // 0x25a928: 0x8ca541a8  lw          $a1, 0x41A8($a1)
    ctx->pc = 0x25a928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16808)));
label_25a92c:
    // 0x25a92c: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x25a92cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25a930:
    // 0x25a930: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_25a934:
    // 0x25a934: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x25a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_25a938:
    // 0x25a938: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x25a938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_25a93c:
    // 0x25a93c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x25a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_25a940:
    // 0x25a940: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a944:
    // 0x25a944: 0x40f809  jalr        $v0
label_25a948:
    if (ctx->pc == 0x25A948u) {
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A94Cu;
        goto label_25a94c;
    }
    ctx->pc = 0x25A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A94Cu);
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A944u, 0x25A94Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a950:
    // 0x25a950: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25a950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_25a954:
    // 0x25a954: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x25a954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_25a958:
    // 0x25a958: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25a95c:
    // 0x25a95c: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
label_25a960:
    if (ctx->pc == 0x25A960u) {
        ctx->pc = 0x25A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A95Cu;
        // 0x25a960: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A964u;
        goto label_25a964;
    }
    ctx->pc = 0x25A95Cu;
    {
        const bool branch_taken_0x25a95c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a95c) {
            ctx->pc = 0x25A960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A95Cu;
            // 0x25a960: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A988u;
            goto label_25a988;
        }
    }
    ctx->pc = 0x25A964u;
label_25a964:
    // 0x25a964: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25a968:
    // 0x25a968: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25a96c:
    // 0x25a96c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x25a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_25a970:
    // 0x25a970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25a974:
    // 0x25a974: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25a974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_25a978:
    // 0x25a978: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x25a978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25a97c:
    // 0x25a97c: 0x5640fffa  bnel        $s2, $zero, . + 4 + (-0x6 << 2)
label_25a980:
    if (ctx->pc == 0x25A980u) {
        ctx->pc = 0x25A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A97Cu;
        // 0x25a980: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A984u;
        goto label_25a984;
    }
    ctx->pc = 0x25A97Cu;
    {
        const bool branch_taken_0x25a97c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a97c) {
            ctx->pc = 0x25A980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A97Cu;
            // 0x25a980: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a968;
        }
    }
    ctx->pc = 0x25A984u;
label_25a984:
    // 0x25a984: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x25a984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_25a988:
    // 0x25a988: 0x26e30fc8  addiu       $v1, $s7, 0xFC8
    ctx->pc = 0x25a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_25a98c:
    // 0x25a98c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x25a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_25a990:
    // 0x25a990: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x25a990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_25a994:
    // 0x25a994: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25a998:
    // 0x25a998: 0x40f809  jalr        $v0
label_25a99c:
    if (ctx->pc == 0x25A99Cu) {
        ctx->pc = 0x25A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A998u;
        // 0x25a99c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9A0u;
        goto label_25a9a0;
    }
    ctx->pc = 0x25A998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25A9A0u);
        ctx->pc = 0x25A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A998u;
        // 0x25a99c: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A998u, 0x25A9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A9A0u;
label_25a9a0:
    // 0x25a9a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25a9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_25a9a4:
    // 0x25a9a4: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x25a9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_25a9a8:
    // 0x25a9a8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x25a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25a9ac:
    // 0x25a9ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_25a9b0:
    if (ctx->pc == 0x25A9B0u) {
        ctx->pc = 0x25A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9ACu;
        // 0x25a9b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9B4u;
        goto label_25a9b4;
    }
    ctx->pc = 0x25A9ACu;
    {
        const bool branch_taken_0x25a9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9ACu;
        // 0x25a9b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9ac) {
            ctx->pc = 0x25A9F8u;
            goto label_25a9f8;
        }
    }
    ctx->pc = 0x25A9B4u;
label_25a9b4:
    // 0x25a9b4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x25a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25a9b8:
    // 0x25a9b8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25a9bc:
    // 0x25a9bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25a9c0:
    // 0x25a9c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25a9c4:
    // 0x25a9c4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25a9c8:
    // 0x25a9c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25a9cc:
    // 0x25a9cc: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x25a9ccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25a9d0:
    // 0x25a9d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25a9d4:
    // 0x25a9d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25a9d8:
    // 0x25a9d8: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x25a9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_25a9dc:
    // 0x25a9dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25a9e0:
    // 0x25a9e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25a9e4:
    // 0x25a9e4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_25a9e8:
    // 0x25a9e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_25a9ec:
    // 0x25a9ec: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x25a9ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25a9f0:
    // 0x25a9f0: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_25a9f4:
    if (ctx->pc == 0x25A9F4u) {
        ctx->pc = 0x25A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9F0u;
        // 0x25a9f4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A9F8u;
        goto label_25a9f8;
    }
    ctx->pc = 0x25A9F0u;
    {
        const bool branch_taken_0x25a9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a9f0) {
            ctx->pc = 0x25A9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A9F0u;
            // 0x25a9f4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a9b8;
        }
    }
    ctx->pc = 0x25A9F8u;
label_25a9f8:
    // 0x25a9f8: 0x26f10fc8  addiu       $s1, $s7, 0xFC8
    ctx->pc = 0x25a9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_25a9fc:
    // 0x25a9fc: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x25a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_25aa00:
    // 0x25aa00: 0x40f809  jalr        $v0
label_25aa04:
    if (ctx->pc == 0x25AA04u) {
        ctx->pc = 0x25AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA00u;
        // 0x25aa04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA08u;
        goto label_25aa08;
    }
    ctx->pc = 0x25AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AA08u);
        ctx->pc = 0x25AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA00u;
        // 0x25aa04: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA00u, 0x25AA08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AA08u;
label_25aa08:
    // 0x25aa08: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_25aa0c:
    // 0x25aa0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25aa10:
    // 0x25aa10: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x25aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25aa14:
    // 0x25aa14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25aa18:
    // 0x25aa18: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25aa1c:
    // 0x25aa1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25aa1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25aa20:
    // 0x25aa20: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x25aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_25aa24:
    // 0x25aa24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_25aa28:
    // 0x25aa28: 0x40f809  jalr        $v0
label_25aa2c:
    if (ctx->pc == 0x25AA2Cu) {
        ctx->pc = 0x25AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA28u;
        // 0x25aa2c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA30u;
        goto label_25aa30;
    }
    ctx->pc = 0x25AA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AA30u);
        ctx->pc = 0x25AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA28u;
        // 0x25aa2c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AA28u, 0x25AA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AA30u;
label_25aa30:
    // 0x25aa30: 0x124000a5  beqz        $s2, . + 4 + (0xA5 << 2)
label_25aa34:
    if (ctx->pc == 0x25AA34u) {
        ctx->pc = 0x25AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA30u;
        // 0x25aa34: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA38u;
        goto label_25aa38;
    }
    ctx->pc = 0x25AA30u;
    {
        const bool branch_taken_0x25aa30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA30u;
        // 0x25aa34: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa30) {
            ctx->pc = 0x25ACC8u;
            goto label_25acc8;
        }
    }
    ctx->pc = 0x25AA38u;
label_25aa38:
    // 0x25aa38: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x25aa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25aa3c:
    // 0x25aa3c: 0x0  nop
    ctx->pc = 0x25aa3cu;
    // NOP
label_25aa40:
    // 0x25aa40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25aa44:
    // 0x25aa44: 0x12400031  beqz        $s2, . + 4 + (0x31 << 2)
label_25aa48:
    if (ctx->pc == 0x25AA48u) {
        ctx->pc = 0x25AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA44u;
        // 0x25aa48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA4Cu;
        goto label_25aa4c;
    }
    ctx->pc = 0x25AA44u;
    {
        const bool branch_taken_0x25aa44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA44u;
        // 0x25aa48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa44) {
            ctx->pc = 0x25AB0Cu;
            goto label_25ab0c;
        }
    }
    ctx->pc = 0x25AA4Cu;
label_25aa4c:
    // 0x25aa4c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25aa50:
    // 0x25aa50: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x25aa50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25aa54:
    // 0x25aa54: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25aa58:
    // 0x25aa58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25aa5c:
    // 0x25aa5c: 0x0  nop
    ctx->pc = 0x25aa5cu;
    // NOP
label_25aa60:
    // 0x25aa60: 0x9483fffe  lhu         $v1, -0x2($a0)
    ctx->pc = 0x25aa60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967294)));
label_25aa64:
    // 0x25aa64: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25aa64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25aa68:
    // 0x25aa68: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_25aa6c:
    if (ctx->pc == 0x25AA6Cu) {
        ctx->pc = 0x25AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA68u;
        // 0x25aa6c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA70u;
        goto label_25aa70;
    }
    ctx->pc = 0x25AA68u;
    {
        const bool branch_taken_0x25aa68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aa68) {
            ctx->pc = 0x25AA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA68u;
            // 0x25aa6c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AA94u;
            goto label_25aa94;
        }
    }
    ctx->pc = 0x25AA70u;
label_25aa70:
    // 0x25aa70: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_25aa74:
    if (ctx->pc == 0x25AA74u) {
        ctx->pc = 0x25AA78u;
        goto label_25aa78;
    }
    ctx->pc = 0x25AA70u;
    {
        const bool branch_taken_0x25aa70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa70) {
            ctx->pc = 0x25AA9Cu;
            goto label_25aa9c;
        }
    }
    ctx->pc = 0x25AA78u;
label_25aa78:
    // 0x25aa78: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_25aa7c:
    if (ctx->pc == 0x25AA7Cu) {
        ctx->pc = 0x25AA80u;
        goto label_25aa80;
    }
    ctx->pc = 0x25AA78u;
    {
        const bool branch_taken_0x25aa78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aa78) {
            ctx->pc = 0x25AA9Cu;
            goto label_25aa9c;
        }
    }
    ctx->pc = 0x25AA80u;
label_25aa80:
    // 0x25aa80: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x25aa80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_25aa84:
    // 0x25aa84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25aa88:
    // 0x25aa88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25aa8c:
    // 0x25aa8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_25aa90:
    if (ctx->pc == 0x25AA90u) {
        ctx->pc = 0x25AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA8Cu;
        // 0x25aa90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA94u;
        goto label_25aa94;
    }
    ctx->pc = 0x25AA8Cu;
    {
        const bool branch_taken_0x25aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA8Cu;
        // 0x25aa90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa8c) {
            ctx->pc = 0x25AA9Cu;
            goto label_25aa9c;
        }
    }
    ctx->pc = 0x25AA94u;
label_25aa94:
    // 0x25aa94: 0x5620fff2  bnel        $s1, $zero, . + 4 + (-0xE << 2)
label_25aa98:
    if (ctx->pc == 0x25AA98u) {
        ctx->pc = 0x25AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA94u;
        // 0x25aa98: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AA9Cu;
        goto label_25aa9c;
    }
    ctx->pc = 0x25AA94u;
    {
        const bool branch_taken_0x25aa94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aa94) {
            ctx->pc = 0x25AA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA94u;
            // 0x25aa98: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aa60;
        }
    }
    ctx->pc = 0x25AA9Cu;
label_25aa9c:
    // 0x25aa9c: 0x56200050  bnel        $s1, $zero, . + 4 + (0x50 << 2)
label_25aaa0:
    if (ctx->pc == 0x25AAA0u) {
        ctx->pc = 0x25AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA9Cu;
        // 0x25aaa0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAA4u;
        goto label_25aaa4;
    }
    ctx->pc = 0x25AA9Cu;
    {
        const bool branch_taken_0x25aa9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aa9c) {
            ctx->pc = 0x25AAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AA9Cu;
            // 0x25aaa0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ABE0u;
            goto label_25abe0;
        }
    }
    ctx->pc = 0x25AAA4u;
label_25aaa4:
    // 0x25aaa4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x25aaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25aaa8:
    // 0x25aaa8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25aaac:
    // 0x25aaac: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_25aab0:
    if (ctx->pc == 0x25AAB0u) {
        ctx->pc = 0x25AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAACu;
        // 0x25aab0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAB4u;
        goto label_25aab4;
    }
    ctx->pc = 0x25AAACu;
    {
        const bool branch_taken_0x25aaac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAACu;
        // 0x25aab0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaac) {
            ctx->pc = 0x25AB0Cu;
            goto label_25ab0c;
        }
    }
    ctx->pc = 0x25AAB4u;
label_25aab4:
    // 0x25aab4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25aab8:
    // 0x25aab8: 0x30650001  andi        $a1, $v1, 0x1
    ctx->pc = 0x25aab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25aabc:
    // 0x25aabc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x25aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25aac0:
    // 0x25aac0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25aac4:
    // 0x25aac4: 0x0  nop
    ctx->pc = 0x25aac4u;
    // NOP
label_25aac8:
    // 0x25aac8: 0x9483fffc  lhu         $v1, -0x4($a0)
    ctx->pc = 0x25aac8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_25aacc:
    // 0x25aacc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25aaccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25aad0:
    // 0x25aad0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_25aad4:
    if (ctx->pc == 0x25AAD4u) {
        ctx->pc = 0x25AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD0u;
        // 0x25aad4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAD8u;
        goto label_25aad8;
    }
    ctx->pc = 0x25AAD0u;
    {
        const bool branch_taken_0x25aad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aad0) {
            ctx->pc = 0x25AAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AAD0u;
            // 0x25aad4: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AAF8u;
            goto label_25aaf8;
        }
    }
    ctx->pc = 0x25AAD8u;
label_25aad8:
    // 0x25aad8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_25aadc:
    if (ctx->pc == 0x25AADCu) {
        ctx->pc = 0x25AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD8u;
        // 0x25aadc: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAE0u;
        goto label_25aae0;
    }
    ctx->pc = 0x25AAD8u;
    {
        const bool branch_taken_0x25aad8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD8u;
        // 0x25aadc: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aad8) {
            ctx->pc = 0x25AAE8u;
            goto label_25aae8;
        }
    }
    ctx->pc = 0x25AAE0u;
label_25aae0:
    // 0x25aae0: 0x1680001e  bnez        $s4, . + 4 + (0x1E << 2)
label_25aae4:
    if (ctx->pc == 0x25AAE4u) {
        ctx->pc = 0x25AAE8u;
        goto label_25aae8;
    }
    ctx->pc = 0x25AAE0u;
    {
        const bool branch_taken_0x25aae0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aae0) {
            ctx->pc = 0x25AB5Cu;
            goto label_25ab5c;
        }
    }
    ctx->pc = 0x25AAE8u;
label_25aae8:
    // 0x25aae8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25aaec:
    // 0x25aaec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25aaf0:
    // 0x25aaf0: 0x10000003  b           . + 4 + (0x3 << 2)
label_25aaf4:
    if (ctx->pc == 0x25AAF4u) {
        ctx->pc = 0x25AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF0u;
        // 0x25aaf4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AAF8u;
        goto label_25aaf8;
    }
    ctx->pc = 0x25AAF0u;
    {
        const bool branch_taken_0x25aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF0u;
        // 0x25aaf4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaf0) {
            ctx->pc = 0x25AB00u;
            goto label_25ab00;
        }
    }
    ctx->pc = 0x25AAF8u;
label_25aaf8:
    // 0x25aaf8: 0x5620fff3  bnel        $s1, $zero, . + 4 + (-0xD << 2)
label_25aafc:
    if (ctx->pc == 0x25AAFCu) {
        ctx->pc = 0x25AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF8u;
        // 0x25aafc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB00u;
        goto label_25ab00;
    }
    ctx->pc = 0x25AAF8u;
    {
        const bool branch_taken_0x25aaf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aaf8) {
            ctx->pc = 0x25AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AAF8u;
            // 0x25aafc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aac8;
        }
    }
    ctx->pc = 0x25AB00u;
label_25ab00:
    // 0x25ab00: 0x56200037  bnel        $s1, $zero, . + 4 + (0x37 << 2)
label_25ab04:
    if (ctx->pc == 0x25AB04u) {
        ctx->pc = 0x25AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB00u;
        // 0x25ab04: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB08u;
        goto label_25ab08;
    }
    ctx->pc = 0x25AB00u;
    {
        const bool branch_taken_0x25ab00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ab00) {
            ctx->pc = 0x25AB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AB00u;
            // 0x25ab04: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ABE0u;
            goto label_25abe0;
        }
    }
    ctx->pc = 0x25AB08u;
label_25ab08:
    // 0x25ab08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ab0c:
    // 0x25ab0c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x25ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25ab10:
    // 0x25ab10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25ab14:
    if (ctx->pc == 0x25AB14u) {
        ctx->pc = 0x25AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB10u;
        // 0x25ab14: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB18u;
        goto label_25ab18;
    }
    ctx->pc = 0x25AB10u;
    {
        const bool branch_taken_0x25ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB10u;
        // 0x25ab14: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab10) {
            ctx->pc = 0x25AB20u;
            goto label_25ab20;
        }
    }
    ctx->pc = 0x25AB18u;
label_25ab18:
    // 0x25ab18: 0x5680001b  bnel        $s4, $zero, . + 4 + (0x1B << 2)
label_25ab1c:
    if (ctx->pc == 0x25AB1Cu) {
        ctx->pc = 0x25AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB18u;
        // 0x25ab1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB20u;
        goto label_25ab20;
    }
    ctx->pc = 0x25AB18u;
    {
        const bool branch_taken_0x25ab18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ab18) {
            ctx->pc = 0x25AB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AB18u;
            // 0x25ab1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AB88u;
            goto label_25ab88;
        }
    }
    ctx->pc = 0x25AB20u;
label_25ab20:
    // 0x25ab20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ab24:
    // 0x25ab24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25ab28:
    // 0x25ab28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25ab2c:
    // 0x25ab2c: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x25ab2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_25ab30:
    // 0x25ab30: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25ab30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_25ab34:
    // 0x25ab34: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ab38:
    // 0x25ab38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ab3c:
    // 0x25ab3c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ab40:
    // 0x25ab40: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x25ab40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25ab44:
    // 0x25ab44: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_25ab48:
    // 0x25ab48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25ab4c:
    // 0x25ab4c: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x25ab4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
label_25ab50:
    // 0x25ab50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ab54:
    // 0x25ab54: 0x10000020  b           . + 4 + (0x20 << 2)
label_25ab58:
    if (ctx->pc == 0x25AB58u) {
        ctx->pc = 0x25AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB54u;
        // 0x25ab58: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB5Cu;
        goto label_25ab5c;
    }
    ctx->pc = 0x25AB54u;
    {
        const bool branch_taken_0x25ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB54u;
        // 0x25ab58: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab54) {
            ctx->pc = 0x25ABD8u;
            goto label_25abd8;
        }
    }
    ctx->pc = 0x25AB5Cu;
label_25ab5c:
    // 0x25ab5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ab60:
    // 0x25ab60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ab64:
    // 0x25ab64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ab68:
    // 0x25ab68: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25ab68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25ab6c:
    // 0x25ab6c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25ab70:
    // 0x25ab70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25ab74:
    // 0x25ab74: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x25ab74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_25ab78:
    // 0x25ab78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ab7c:
    // 0x25ab7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x25ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_25ab80:
    // 0x25ab80: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_25ab84:
    if (ctx->pc == 0x25AB84u) {
        ctx->pc = 0x25AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB80u;
        // 0x25ab84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AB88u;
        goto label_25ab88;
    }
    ctx->pc = 0x25AB80u;
    {
        const bool branch_taken_0x25ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB80u;
        // 0x25ab84: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab80) {
            ctx->pc = 0x25AB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ab00;
        }
    }
    ctx->pc = 0x25AB88u;
label_25ab88:
    // 0x25ab88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25ab8c:
    // 0x25ab8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_25ab90:
    // 0x25ab90: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x25ab90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
label_25ab94:
    // 0x25ab94: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x25ab94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_25ab98:
    // 0x25ab98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x25ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25ab9c:
    // 0x25ab9c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25aba0:
    // 0x25aba0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25aba4:
    // 0x25aba4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x25aba4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_25aba8:
    // 0x25aba8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_25abac:
    // 0x25abac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25abacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_25abb0:
    // 0x25abb0: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x25abb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
label_25abb4:
    // 0x25abb4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25abb8:
    // 0x25abb8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25abbc:
    // 0x25abbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x25abbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25abc0:
    // 0x25abc0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25abc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25abc4:
    // 0x25abc4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25abc8:
    // 0x25abc8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x25abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_25abcc:
    // 0x25abcc: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x25abccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
label_25abd0:
    // 0x25abd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25abd4:
    // 0x25abd4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x25abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_25abd8:
    // 0x25abd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25abd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_25abdc:
    // 0x25abdc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25abe0:
    // 0x25abe0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25abe4:
    if (ctx->pc == 0x25ABE4u) {
        ctx->pc = 0x25ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABE0u;
        // 0x25abe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ABE8u;
        goto label_25abe8;
    }
    ctx->pc = 0x25ABE0u;
    {
        const bool branch_taken_0x25abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABE0u;
        // 0x25abe4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abe0) {
            ctx->pc = 0x25AC30u;
            goto label_25ac30;
        }
    }
    ctx->pc = 0x25ABE8u;
label_25abe8:
    // 0x25abe8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25abec:
    // 0x25abec: 0x0  nop
    ctx->pc = 0x25abecu;
    // NOP
label_25abf0:
    // 0x25abf0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_25abf4:
    // 0x25abf4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25abf8:
    // 0x25abf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x25abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_25abfc:
    // 0x25abfc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_25ac00:
    // 0x25ac00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25ac04:
    // 0x25ac04: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x25ac04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_25ac08:
    // 0x25ac08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_25ac0c:
    // 0x25ac0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_25ac10:
    // 0x25ac10: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x25ac10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_25ac14:
    // 0x25ac14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_25ac18:
    // 0x25ac18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25ac1c:
    // 0x25ac1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_25ac20:
    // 0x25ac20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25ac24:
    // 0x25ac24: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x25ac24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_25ac28:
    // 0x25ac28: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_25ac2c:
    if (ctx->pc == 0x25AC2Cu) {
        ctx->pc = 0x25AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC28u;
        // 0x25ac2c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC30u;
        goto label_25ac30;
    }
    ctx->pc = 0x25AC28u;
    {
        const bool branch_taken_0x25ac28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ac28) {
            ctx->pc = 0x25AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC28u;
            // 0x25ac2c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25abf0;
        }
    }
    ctx->pc = 0x25AC30u;
label_25ac30:
    // 0x25ac30: 0x26f30fc8  addiu       $s3, $s7, 0xFC8
    ctx->pc = 0x25ac30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4040));
label_25ac34:
    // 0x25ac34: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x25ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_25ac38:
    // 0x25ac38: 0x40f809  jalr        $v0
label_25ac3c:
    if (ctx->pc == 0x25AC3Cu) {
        ctx->pc = 0x25AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC38u;
        // 0x25ac3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC40u;
        goto label_25ac40;
    }
    ctx->pc = 0x25AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AC40u);
        ctx->pc = 0x25AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC38u;
        // 0x25ac3c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC38u, 0x25AC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AC40u;
label_25ac40:
    // 0x25ac40: 0x1651000b  bne         $s2, $s1, . + 4 + (0xB << 2)
label_25ac44:
    if (ctx->pc == 0x25AC44u) {
        ctx->pc = 0x25AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC40u;
        // 0x25ac44: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC48u;
        goto label_25ac48;
    }
    ctx->pc = 0x25AC40u;
    {
        const bool branch_taken_0x25ac40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x25AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC40u;
        // 0x25ac44: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac40) {
            ctx->pc = 0x25AC70u;
            goto label_25ac70;
        }
    }
    ctx->pc = 0x25AC48u;
label_25ac48:
    // 0x25ac48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25ac4c:
    // 0x25ac4c: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25ac50:
    // 0x25ac50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ac54:
    // 0x25ac54: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x25ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_25ac58:
    // 0x25ac58: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x25ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_25ac5c:
    // 0x25ac5c: 0x8e52000c  lw          $s2, 0xC($s2)
    ctx->pc = 0x25ac5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25ac60:
    // 0x25ac60: 0x40f809  jalr        $v0
label_25ac64:
    if (ctx->pc == 0x25AC64u) {
        ctx->pc = 0x25AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC60u;
        // 0x25ac64: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC68u;
        goto label_25ac68;
    }
    ctx->pc = 0x25AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25AC68u);
        ctx->pc = 0x25AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC60u;
        // 0x25ac64: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC60u, 0x25AC68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AC68u;
label_25ac68:
    // 0x25ac68: 0x10000015  b           . + 4 + (0x15 << 2)
label_25ac6c:
    if (ctx->pc == 0x25AC6Cu) {
        ctx->pc = 0x25AC70u;
        goto label_25ac70;
    }
    ctx->pc = 0x25AC68u;
    {
        const bool branch_taken_0x25ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac68) {
            ctx->pc = 0x25ACC0u;
            goto label_25acc0;
        }
    }
    ctx->pc = 0x25AC70u;
label_25ac70:
    // 0x25ac70: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_25ac74:
    // 0x25ac74: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x25ac74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ac78:
    // 0x25ac78: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
label_25ac7c:
    if (ctx->pc == 0x25AC7Cu) {
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AC80u;
        goto label_25ac80;
    }
    ctx->pc = 0x25AC78u;
    {
        const bool branch_taken_0x25ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x25AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC78u;
        // 0x25ac7c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac78) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25AC80u;
label_25ac80:
    // 0x25ac80: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25ac84:
    // 0x25ac84: 0x0  nop
    ctx->pc = 0x25ac84u;
    // NOP
label_25ac88:
    // 0x25ac88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25ac8c:
    // 0x25ac8c: 0x0  nop
    ctx->pc = 0x25ac8cu;
    // NOP
label_25ac90:
    // 0x25ac90: 0x0  nop
    ctx->pc = 0x25ac90u;
    // NOP
label_25ac94:
    // 0x25ac94: 0x0  nop
    ctx->pc = 0x25ac94u;
    // NOP
label_25ac98:
    // 0x25ac98: 0x5451fffb  bnel        $v0, $s1, . + 4 + (-0x5 << 2)
label_25ac9c:
    if (ctx->pc == 0x25AC9Cu) {
        ctx->pc = 0x25AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC98u;
        // 0x25ac9c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACA0u;
        goto label_25aca0;
    }
    ctx->pc = 0x25AC98u;
    {
        const bool branch_taken_0x25ac98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25ac98) {
            ctx->pc = 0x25AC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC98u;
            // 0x25ac9c: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ac88;
        }
    }
    ctx->pc = 0x25ACA0u;
label_25aca0:
    // 0x25aca0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x25aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_25aca4:
    // 0x25aca4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25aca8:
    // 0x25aca8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25acac:
    // 0x25acac: 0x8c6341a8  lw          $v1, 0x41A8($v1)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16808)));
label_25acb0:
    // 0x25acb0: 0x8ec2011c  lw          $v0, 0x11C($s6)
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 284)));
label_25acb4:
    // 0x25acb4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x25acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_25acb8:
    // 0x25acb8: 0x40f809  jalr        $v0
label_25acbc:
    if (ctx->pc == 0x25ACBCu) {
        ctx->pc = 0x25ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB8u;
        // 0x25acbc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACC0u;
        goto label_25acc0;
    }
    ctx->pc = 0x25ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25ACC0u);
        ctx->pc = 0x25ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACB8u;
        // 0x25acbc: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACB8u, 0x25ACC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25ACC0u;
label_25acc0:
    // 0x25acc0: 0x1640ff5f  bnez        $s2, . + 4 + (-0xA1 << 2)
label_25acc4:
    if (ctx->pc == 0x25ACC4u) {
        ctx->pc = 0x25ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACC0u;
        // 0x25acc4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25ACC8u;
        goto label_25acc8;
    }
    ctx->pc = 0x25ACC0u;
    {
        const bool branch_taken_0x25acc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACC0u;
        // 0x25acc4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acc0) {
            ctx->pc = 0x25AA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aa40;
        }
    }
    ctx->pc = 0x25ACC8u;
label_25acc8:
    // 0x25acc8: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x25acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
label_25accc:
    // 0x25accc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25acd0:
    // 0x25acd0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25acd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_25acd4:
    // 0x25acd4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25acd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25acd8:
    // 0x25acd8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25acd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25acdc:
    // 0x25acdc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25acdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25ace0:
    // 0x25ace0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25ace0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25ace4:
    // 0x25ace4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25ace4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25ace8:
    // 0x25ace8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25ace8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25acec:
    // 0x25acec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25acecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25acf0:
    // 0x25acf0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x25acf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25acf4:
    // 0x25acf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25acf8:
    // 0x25acf8: 0x3e00008  jr          $ra
label_25acfc:
    if (ctx->pc == 0x25ACFCu) {
        ctx->pc = 0x25ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACF8u;
        // 0x25acfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AD00u;
        goto label_fallthrough_0x25acf8;
    }
    ctx->pc = 0x25ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACF8u;
        // 0x25acfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25acf8:
    ctx->pc = 0x25AD00u;
}
