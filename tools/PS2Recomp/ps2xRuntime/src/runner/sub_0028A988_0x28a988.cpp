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

// Function: sub_0028A988
// Address: 0x28a988 - 0x28ace8
void sub_0028A988_0x28a988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A988_0x28a988");
#endif

    switch (ctx->pc) {
        case 0x28a988u: goto label_28a988;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a990u: goto label_28a990;
        case 0x28a994u: goto label_28a994;
        case 0x28a998u: goto label_28a998;
        case 0x28a99cu: goto label_28a99c;
        case 0x28a9a0u: goto label_28a9a0;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9a8u: goto label_28a9a8;
        case 0x28a9acu: goto label_28a9ac;
        case 0x28a9b0u: goto label_28a9b0;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9c4u: goto label_28a9c4;
        case 0x28a9c8u: goto label_28a9c8;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9d4u: goto label_28a9d4;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9e4u: goto label_28a9e4;
        case 0x28a9e8u: goto label_28a9e8;
        case 0x28a9ecu: goto label_28a9ec;
        case 0x28a9f0u: goto label_28a9f0;
        case 0x28a9f4u: goto label_28a9f4;
        case 0x28a9f8u: goto label_28a9f8;
        case 0x28a9fcu: goto label_28a9fc;
        case 0x28aa00u: goto label_28aa00;
        case 0x28aa04u: goto label_28aa04;
        case 0x28aa08u: goto label_28aa08;
        case 0x28aa0cu: goto label_28aa0c;
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa14u: goto label_28aa14;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aa1cu: goto label_28aa1c;
        case 0x28aa20u: goto label_28aa20;
        case 0x28aa24u: goto label_28aa24;
        case 0x28aa28u: goto label_28aa28;
        case 0x28aa2cu: goto label_28aa2c;
        case 0x28aa30u: goto label_28aa30;
        case 0x28aa34u: goto label_28aa34;
        case 0x28aa38u: goto label_28aa38;
        case 0x28aa3cu: goto label_28aa3c;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa44u: goto label_28aa44;
        case 0x28aa48u: goto label_28aa48;
        case 0x28aa4cu: goto label_28aa4c;
        case 0x28aa50u: goto label_28aa50;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa58u: goto label_28aa58;
        case 0x28aa5cu: goto label_28aa5c;
        case 0x28aa60u: goto label_28aa60;
        case 0x28aa64u: goto label_28aa64;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa6cu: goto label_28aa6c;
        case 0x28aa70u: goto label_28aa70;
        case 0x28aa74u: goto label_28aa74;
        case 0x28aa78u: goto label_28aa78;
        case 0x28aa7cu: goto label_28aa7c;
        case 0x28aa80u: goto label_28aa80;
        case 0x28aa84u: goto label_28aa84;
        case 0x28aa88u: goto label_28aa88;
        case 0x28aa8cu: goto label_28aa8c;
        case 0x28aa90u: goto label_28aa90;
        case 0x28aa94u: goto label_28aa94;
        case 0x28aa98u: goto label_28aa98;
        case 0x28aa9cu: goto label_28aa9c;
        case 0x28aaa0u: goto label_28aaa0;
        case 0x28aaa4u: goto label_28aaa4;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aaacu: goto label_28aaac;
        case 0x28aab0u: goto label_28aab0;
        case 0x28aab4u: goto label_28aab4;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aabcu: goto label_28aabc;
        case 0x28aac0u: goto label_28aac0;
        case 0x28aac4u: goto label_28aac4;
        case 0x28aac8u: goto label_28aac8;
        case 0x28aaccu: goto label_28aacc;
        case 0x28aad0u: goto label_28aad0;
        case 0x28aad4u: goto label_28aad4;
        case 0x28aad8u: goto label_28aad8;
        case 0x28aadcu: goto label_28aadc;
        case 0x28aae0u: goto label_28aae0;
        case 0x28aae4u: goto label_28aae4;
        case 0x28aae8u: goto label_28aae8;
        case 0x28aaecu: goto label_28aaec;
        case 0x28aaf0u: goto label_28aaf0;
        case 0x28aaf4u: goto label_28aaf4;
        case 0x28aaf8u: goto label_28aaf8;
        case 0x28aafcu: goto label_28aafc;
        case 0x28ab00u: goto label_28ab00;
        case 0x28ab04u: goto label_28ab04;
        case 0x28ab08u: goto label_28ab08;
        case 0x28ab0cu: goto label_28ab0c;
        case 0x28ab10u: goto label_28ab10;
        case 0x28ab14u: goto label_28ab14;
        case 0x28ab18u: goto label_28ab18;
        case 0x28ab1cu: goto label_28ab1c;
        case 0x28ab20u: goto label_28ab20;
        case 0x28ab24u: goto label_28ab24;
        case 0x28ab28u: goto label_28ab28;
        case 0x28ab2cu: goto label_28ab2c;
        case 0x28ab30u: goto label_28ab30;
        case 0x28ab34u: goto label_28ab34;
        case 0x28ab38u: goto label_28ab38;
        case 0x28ab3cu: goto label_28ab3c;
        case 0x28ab40u: goto label_28ab40;
        case 0x28ab44u: goto label_28ab44;
        case 0x28ab48u: goto label_28ab48;
        case 0x28ab4cu: goto label_28ab4c;
        case 0x28ab50u: goto label_28ab50;
        case 0x28ab54u: goto label_28ab54;
        case 0x28ab58u: goto label_28ab58;
        case 0x28ab5cu: goto label_28ab5c;
        case 0x28ab60u: goto label_28ab60;
        case 0x28ab64u: goto label_28ab64;
        case 0x28ab68u: goto label_28ab68;
        case 0x28ab6cu: goto label_28ab6c;
        case 0x28ab70u: goto label_28ab70;
        case 0x28ab74u: goto label_28ab74;
        case 0x28ab78u: goto label_28ab78;
        case 0x28ab7cu: goto label_28ab7c;
        case 0x28ab80u: goto label_28ab80;
        case 0x28ab84u: goto label_28ab84;
        case 0x28ab88u: goto label_28ab88;
        case 0x28ab8cu: goto label_28ab8c;
        case 0x28ab90u: goto label_28ab90;
        case 0x28ab94u: goto label_28ab94;
        case 0x28ab98u: goto label_28ab98;
        case 0x28ab9cu: goto label_28ab9c;
        case 0x28aba0u: goto label_28aba0;
        case 0x28aba4u: goto label_28aba4;
        case 0x28aba8u: goto label_28aba8;
        case 0x28abacu: goto label_28abac;
        case 0x28abb0u: goto label_28abb0;
        case 0x28abb4u: goto label_28abb4;
        case 0x28abb8u: goto label_28abb8;
        case 0x28abbcu: goto label_28abbc;
        case 0x28abc0u: goto label_28abc0;
        case 0x28abc4u: goto label_28abc4;
        case 0x28abc8u: goto label_28abc8;
        case 0x28abccu: goto label_28abcc;
        case 0x28abd0u: goto label_28abd0;
        case 0x28abd4u: goto label_28abd4;
        case 0x28abd8u: goto label_28abd8;
        case 0x28abdcu: goto label_28abdc;
        case 0x28abe0u: goto label_28abe0;
        case 0x28abe4u: goto label_28abe4;
        case 0x28abe8u: goto label_28abe8;
        case 0x28abecu: goto label_28abec;
        case 0x28abf0u: goto label_28abf0;
        case 0x28abf4u: goto label_28abf4;
        case 0x28abf8u: goto label_28abf8;
        case 0x28abfcu: goto label_28abfc;
        case 0x28ac00u: goto label_28ac00;
        case 0x28ac04u: goto label_28ac04;
        case 0x28ac08u: goto label_28ac08;
        case 0x28ac0cu: goto label_28ac0c;
        case 0x28ac10u: goto label_28ac10;
        case 0x28ac14u: goto label_28ac14;
        case 0x28ac18u: goto label_28ac18;
        case 0x28ac1cu: goto label_28ac1c;
        case 0x28ac20u: goto label_28ac20;
        case 0x28ac24u: goto label_28ac24;
        case 0x28ac28u: goto label_28ac28;
        case 0x28ac2cu: goto label_28ac2c;
        case 0x28ac30u: goto label_28ac30;
        case 0x28ac34u: goto label_28ac34;
        case 0x28ac38u: goto label_28ac38;
        case 0x28ac3cu: goto label_28ac3c;
        case 0x28ac40u: goto label_28ac40;
        case 0x28ac44u: goto label_28ac44;
        case 0x28ac48u: goto label_28ac48;
        case 0x28ac4cu: goto label_28ac4c;
        case 0x28ac50u: goto label_28ac50;
        case 0x28ac54u: goto label_28ac54;
        case 0x28ac58u: goto label_28ac58;
        case 0x28ac5cu: goto label_28ac5c;
        case 0x28ac60u: goto label_28ac60;
        case 0x28ac64u: goto label_28ac64;
        case 0x28ac68u: goto label_28ac68;
        case 0x28ac6cu: goto label_28ac6c;
        case 0x28ac70u: goto label_28ac70;
        case 0x28ac74u: goto label_28ac74;
        case 0x28ac78u: goto label_28ac78;
        case 0x28ac7cu: goto label_28ac7c;
        case 0x28ac80u: goto label_28ac80;
        case 0x28ac84u: goto label_28ac84;
        case 0x28ac88u: goto label_28ac88;
        case 0x28ac8cu: goto label_28ac8c;
        case 0x28ac90u: goto label_28ac90;
        case 0x28ac94u: goto label_28ac94;
        case 0x28ac98u: goto label_28ac98;
        case 0x28ac9cu: goto label_28ac9c;
        case 0x28aca0u: goto label_28aca0;
        case 0x28aca4u: goto label_28aca4;
        case 0x28aca8u: goto label_28aca8;
        case 0x28acacu: goto label_28acac;
        case 0x28acb0u: goto label_28acb0;
        case 0x28acb4u: goto label_28acb4;
        case 0x28acb8u: goto label_28acb8;
        case 0x28acbcu: goto label_28acbc;
        case 0x28acc0u: goto label_28acc0;
        case 0x28acc4u: goto label_28acc4;
        case 0x28acc8u: goto label_28acc8;
        case 0x28acccu: goto label_28accc;
        case 0x28acd0u: goto label_28acd0;
        case 0x28acd4u: goto label_28acd4;
        case 0x28acd8u: goto label_28acd8;
        case 0x28acdcu: goto label_28acdc;
        case 0x28ace0u: goto label_28ace0;
        case 0x28ace4u: goto label_28ace4;
        default: break;
    }

    ctx->pc = 0x28a988u;

label_28a988:
    // 0x28a988: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28a988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28a98c:
    // 0x28a98c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_28a990:
    // 0x28a990: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28a994:
    // 0x28a994: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28a994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a998:
    // 0x28a998: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_28a99c:
    // 0x28a99c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28a99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a9a0:
    // 0x28a9a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_28a9a4:
    // 0x28a9a4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_28a9a8:
    // 0x28a9a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_28a9ac:
    // 0x28a9ac: 0xc0a25ba  jal         func_2896E8
label_28a9b0:
    if (ctx->pc == 0x28A9B0u) {
        ctx->pc = 0x28A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9ACu;
        // 0x28a9b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9B4u;
        goto label_28a9b4;
    }
    ctx->pc = 0x28A9ACu;
    SET_GPR_U32(ctx, 31, 0x28A9B4u);
    ctx->pc = 0x28A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9ACu;
    // 0x28a9b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2896E8u, 0x28A9ACu, 0x28A9B4u)) {
        return;
    }
    ctx->pc = 0x28A9B4u;
label_28a9b4:
    // 0x28a9b4: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_28a9b8:
    if (ctx->pc == 0x28A9B8u) {
        ctx->pc = 0x28A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9B4u;
        // 0x28a9b8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9BCu;
        goto label_28a9bc;
    }
    ctx->pc = 0x28A9B4u;
    {
        const bool branch_taken_0x28a9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9B4u;
        // 0x28a9b8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9b4) {
            ctx->pc = 0x28AC0Cu;
            goto label_28ac0c;
        }
    }
    ctx->pc = 0x28A9BCu;
label_28a9bc:
    // 0x28a9bc: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x28a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_28a9c0:
    // 0x28a9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28a9c4:
    // 0x28a9c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28a9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28a9c8:
    // 0x28a9c8: 0xc0935aa  jal         func_24D6A8
label_28a9cc:
    if (ctx->pc == 0x28A9CCu) {
        ctx->pc = 0x28A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9C8u;
        // 0x28a9cc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9D0u;
        goto label_28a9d0;
    }
    ctx->pc = 0x28A9C8u;
    SET_GPR_U32(ctx, 31, 0x28A9D0u);
    ctx->pc = 0x28A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9C8u;
    // 0x28a9cc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x28A9C8u, 0x28A9D0u)) {
        return;
    }
    ctx->pc = 0x28A9D0u;
label_28a9d0:
    // 0x28a9d0: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_28a9d4:
    if (ctx->pc == 0x28A9D4u) {
        ctx->pc = 0x28A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9D0u;
        // 0x28a9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9D8u;
        goto label_28a9d8;
    }
    ctx->pc = 0x28A9D0u;
    {
        const bool branch_taken_0x28a9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9D0u;
        // 0x28a9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9d0) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28A9D8u;
label_28a9d8:
    // 0x28a9d8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_28a9dc:
    if (ctx->pc == 0x28A9DCu) {
        ctx->pc = 0x28A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9D8u;
        // 0x28a9dc: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9E0u;
        goto label_28a9e0;
    }
    ctx->pc = 0x28A9D8u;
    {
        const bool branch_taken_0x28a9d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9D8u;
        // 0x28a9dc: 0xafb20000  sw          $s2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9d8) {
            ctx->pc = 0x28AA38u;
            goto label_28aa38;
        }
    }
    ctx->pc = 0x28A9E0u;
label_28a9e0:
    // 0x28a9e0: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_28a9e4:
    // 0x28a9e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_28a9e8:
    // 0x28a9e8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x28a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_28a9ec:
    // 0x28a9ec: 0x2453bca8  addiu       $s3, $v0, -0x4358
    ctx->pc = 0x28a9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950056));
label_28a9f0:
    // 0x28a9f0: 0xc09292a  jal         func_24A4A8
label_28a9f4:
    if (ctx->pc == 0x28A9F4u) {
        ctx->pc = 0x28A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9F0u;
        // 0x28a9f4: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9F8u;
        goto label_28a9f8;
    }
    ctx->pc = 0x28A9F0u;
    SET_GPR_U32(ctx, 31, 0x28A9F8u);
    ctx->pc = 0x28A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9F0u;
    // 0x28a9f4: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28A9F0u, 0x28A9F8u)) {
        return;
    }
    ctx->pc = 0x28A9F8u;
label_28a9f8:
    // 0x28a9f8: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x28a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_28a9fc:
    // 0x28a9fc: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28aa00:
    // 0x28aa00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28aa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28aa04:
    // 0x28aa04: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28aa04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28aa08:
    // 0x28aa08: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28aa08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28aa0c:
    // 0x28aa0c: 0x121100ad  beq         $s0, $s1, . + 4 + (0xAD << 2)
label_28aa10:
    if (ctx->pc == 0x28AA10u) {
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA0Cu;
        // 0x28aa10: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA14u;
        goto label_28aa14;
    }
    ctx->pc = 0x28AA0Cu;
    {
        const bool branch_taken_0x28aa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA0Cu;
        // 0x28aa10: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa0c) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28AA14u;
label_28aa14:
    // 0x28aa14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28aa18:
    // 0x28aa18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28aa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aa1c:
    // 0x28aa1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28aa1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aa20:
    // 0x28aa20: 0x260f809  jalr        $s3
label_28aa24:
    if (ctx->pc == 0x28AA24u) {
        ctx->pc = 0x28AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA20u;
        // 0x28aa24: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA28u;
        goto label_28aa28;
    }
    ctx->pc = 0x28AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x28AA28u);
        ctx->pc = 0x28AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA20u;
        // 0x28aa24: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA20u, 0x28AA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AA28u;
label_28aa28:
    // 0x28aa28: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28aa2c:
    if (ctx->pc == 0x28AA2Cu) {
        ctx->pc = 0x28AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA28u;
        // 0x28aa2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA30u;
        goto label_28aa30;
    }
    ctx->pc = 0x28AA28u;
    {
        const bool branch_taken_0x28aa28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA28u;
        // 0x28aa2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa28) {
            ctx->pc = 0x28AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aa18;
        }
    }
    ctx->pc = 0x28AA30u;
label_28aa30:
    // 0x28aa30: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_28aa34:
    if (ctx->pc == 0x28AA34u) {
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA30u;
        // 0x28aa34: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA38u;
        goto label_28aa38;
    }
    ctx->pc = 0x28AA30u;
    {
        const bool branch_taken_0x28aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA30u;
        // 0x28aa34: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa30) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28AA38u;
label_28aa38:
    // 0x28aa38: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_28aa3c:
    // 0x28aa3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28aa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aa40:
    // 0x28aa40: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x28aa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28aa44:
    // 0x28aa44: 0x24a5bae0  addiu       $a1, $a1, -0x4520
    ctx->pc = 0x28aa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949600));
label_28aa48:
    // 0x28aa48: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x28aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_28aa4c:
    // 0x28aa4c: 0xc0a2db6  jal         func_28B6D8
label_28aa50:
    if (ctx->pc == 0x28AA50u) {
        ctx->pc = 0x28AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA4Cu;
        // 0x28aa50: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA54u;
        goto label_28aa54;
    }
    ctx->pc = 0x28AA4Cu;
    SET_GPR_U32(ctx, 31, 0x28AA54u);
    ctx->pc = 0x28AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA4Cu;
    // 0x28aa50: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28AA4Cu, 0x28AA54u)) {
        return;
    }
    ctx->pc = 0x28AA54u;
label_28aa54:
    // 0x28aa54: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x28aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_28aa58:
    // 0x28aa58: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_28aa5c:
    if (ctx->pc == 0x28AA5Cu) {
        ctx->pc = 0x28AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA58u;
        // 0x28aa5c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA60u;
        goto label_28aa60;
    }
    ctx->pc = 0x28AA58u;
    {
        const bool branch_taken_0x28aa58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA58u;
        // 0x28aa5c: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa58) {
            ctx->pc = 0x28AAB0u;
            goto label_28aab0;
        }
    }
    ctx->pc = 0x28AA60u;
label_28aa60:
    // 0x28aa60: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28aa60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28aa64:
    // 0x28aa64: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28aa68:
    // 0x28aa68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28aa6c:
    // 0x28aa6c: 0x40f809  jalr        $v0
label_28aa70:
    if (ctx->pc == 0x28AA70u) {
        ctx->pc = 0x28AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA6Cu;
        // 0x28aa70: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA74u;
        goto label_28aa74;
    }
    ctx->pc = 0x28AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28AA74u);
        ctx->pc = 0x28AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA6Cu;
        // 0x28aa70: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA6Cu, 0x28AA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AA74u;
label_28aa74:
    // 0x28aa74: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_28aa78:
    if (ctx->pc == 0x28AA78u) {
        ctx->pc = 0x28AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA74u;
        // 0x28aa78: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA7Cu;
        goto label_28aa7c;
    }
    ctx->pc = 0x28AA74u;
    {
        const bool branch_taken_0x28aa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA74u;
        // 0x28aa78: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa74) {
            ctx->pc = 0x28AAB4u;
            goto label_28aab4;
        }
    }
    ctx->pc = 0x28AA7Cu;
label_28aa7c:
    // 0x28aa7c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x28aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_28aa80:
    // 0x28aa80: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_28aa84:
    // 0x28aa84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_28aa88:
    // 0x28aa88: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_28aa8c:
    // 0x28aa8c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28aa90:
    // 0x28aa90: 0xc092848  jal         func_24A120
label_28aa94:
    if (ctx->pc == 0x28AA94u) {
        ctx->pc = 0x28AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA90u;
        // 0x28aa94: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA98u;
        goto label_28aa98;
    }
    ctx->pc = 0x28AA90u;
    SET_GPR_U32(ctx, 31, 0x28AA98u);
    ctx->pc = 0x28AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA90u;
    // 0x28aa94: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x28AA90u, 0x28AA98u)) {
        return;
    }
    ctx->pc = 0x28AA98u;
label_28aa98:
    // 0x28aa98: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x28aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_28aa9c:
    // 0x28aa9c: 0xc09281a  jal         func_24A068
label_28aaa0:
    if (ctx->pc == 0x28AAA0u) {
        ctx->pc = 0x28AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA9Cu;
        // 0x28aaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAA4u;
        goto label_28aaa4;
    }
    ctx->pc = 0x28AA9Cu;
    SET_GPR_U32(ctx, 31, 0x28AAA4u);
    ctx->pc = 0x28AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA9Cu;
    // 0x28aaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x28AA9Cu, 0x28AAA4u)) {
        return;
    }
    ctx->pc = 0x28AAA4u;
label_28aaa4:
    // 0x28aaa4: 0x1000000a  b           . + 4 + (0xA << 2)
label_28aaa8:
    if (ctx->pc == 0x28AAA8u) {
        ctx->pc = 0x28AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAA4u;
        // 0x28aaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAACu;
        goto label_28aaac;
    }
    ctx->pc = 0x28AAA4u;
    {
        const bool branch_taken_0x28aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAA4u;
        // 0x28aaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaa4) {
            ctx->pc = 0x28AAD0u;
            goto label_28aad0;
        }
    }
    ctx->pc = 0x28AAACu;
label_28aaac:
    // 0x28aaac: 0x0  nop
    ctx->pc = 0x28aaacu;
    // NOP
label_28aab0:
    // 0x28aab0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28aab4:
    // 0x28aab4: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x28aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_28aab8:
    // 0x28aab8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x28aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_28aabc:
    // 0x28aabc: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x28aabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
label_28aac0:
    // 0x28aac0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28aac4:
    // 0x28aac4: 0xc0a2db6  jal         func_28B6D8
label_28aac8:
    if (ctx->pc == 0x28AAC8u) {
        ctx->pc = 0x28AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAC4u;
        // 0x28aac8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AACCu;
        goto label_28aacc;
    }
    ctx->pc = 0x28AAC4u;
    SET_GPR_U32(ctx, 31, 0x28AACCu);
    ctx->pc = 0x28AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAC4u;
    // 0x28aac8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28B6D8u, 0x28AAC4u, 0x28AACCu)) {
        return;
    }
    ctx->pc = 0x28AACCu;
label_28aacc:
    // 0x28aacc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28aad0:
    // 0x28aad0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_28aad4:
    if (ctx->pc == 0x28AAD4u) {
        ctx->pc = 0x28AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD0u;
        // 0x28aad4: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAD8u;
        goto label_28aad8;
    }
    ctx->pc = 0x28AAD0u;
    {
        const bool branch_taken_0x28aad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAD0u;
        // 0x28aad4: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aad0) {
            ctx->pc = 0x28AC0Cu;
            goto label_28ac0c;
        }
    }
    ctx->pc = 0x28AAD8u;
label_28aad8:
    // 0x28aad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28aad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28aadc:
    // 0x28aadc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x28aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_28aae0:
    // 0x28aae0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28aae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28aae4:
    // 0x28aae4: 0xc092782  jal         func_249E08
label_28aae8:
    if (ctx->pc == 0x28AAE8u) {
        ctx->pc = 0x28AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAE4u;
        // 0x28aae8: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAECu;
        goto label_28aaec;
    }
    ctx->pc = 0x28AAE4u;
    SET_GPR_U32(ctx, 31, 0x28AAECu);
    ctx->pc = 0x28AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAE4u;
    // 0x28aae8: 0xafb30038  sw          $s3, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x28AAE4u, 0x28AAECu)) {
        return;
    }
    ctx->pc = 0x28AAECu;
label_28aaec:
    // 0x28aaec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28aaf0:
    if (ctx->pc == 0x28AAF0u) {
        ctx->pc = 0x28AAF4u;
        goto label_28aaf4;
    }
    ctx->pc = 0x28AAECu;
    {
        const bool branch_taken_0x28aaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28aaec) {
            ctx->pc = 0x28AAFCu;
            goto label_28aafc;
        }
    }
    ctx->pc = 0x28AAF4u;
label_28aaf4:
    // 0x28aaf4: 0x10000043  b           . + 4 + (0x43 << 2)
label_28aaf8:
    if (ctx->pc == 0x28AAF8u) {
        ctx->pc = 0x28AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAF4u;
        // 0x28aaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAFCu;
        goto label_28aafc;
    }
    ctx->pc = 0x28AAF4u;
    {
        const bool branch_taken_0x28aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAF4u;
        // 0x28aaf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaf4) {
            ctx->pc = 0x28AC04u;
            goto label_28ac04;
        }
    }
    ctx->pc = 0x28AAFCu;
label_28aafc:
    // 0x28aafc: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
label_28ab00:
    if (ctx->pc == 0x28AB00u) {
        ctx->pc = 0x28AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAFCu;
        // 0x28ab00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB04u;
        goto label_28ab04;
    }
    ctx->pc = 0x28AAFCu;
    {
        const bool branch_taken_0x28aafc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAFCu;
        // 0x28ab00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aafc) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28AB04u;
label_28ab04:
    // 0x28ab04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ab08:
    // 0x28ab08: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
label_28ab0c:
    if (ctx->pc == 0x28AB0Cu) {
        ctx->pc = 0x28AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB08u;
        // 0x28ab0c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB10u;
        goto label_28ab10;
    }
    ctx->pc = 0x28AB08u;
    {
        const bool branch_taken_0x28ab08 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x28AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB08u;
        // 0x28ab0c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab08) {
            ctx->pc = 0x28AB68u;
            goto label_28ab68;
        }
    }
    ctx->pc = 0x28AB10u;
label_28ab10:
    // 0x28ab10: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_28ab14:
    if (ctx->pc == 0x28AB14u) {
        ctx->pc = 0x28AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB10u;
        // 0x28ab14: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB18u;
        goto label_28ab18;
    }
    ctx->pc = 0x28AB10u;
    {
        const bool branch_taken_0x28ab10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB10u;
        // 0x28ab14: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab10) {
            ctx->pc = 0x28AB94u;
            goto label_28ab94;
        }
    }
    ctx->pc = 0x28AB18u;
label_28ab18:
    // 0x28ab18: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28ab18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_28ab1c:
    // 0x28ab1c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_28ab20:
    if (ctx->pc == 0x28AB20u) {
        ctx->pc = 0x28AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB1Cu;
        // 0x28ab20: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB24u;
        goto label_28ab24;
    }
    ctx->pc = 0x28AB1Cu;
    {
        const bool branch_taken_0x28ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB1Cu;
        // 0x28ab20: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab1c) {
            ctx->pc = 0x28AB6Cu;
            goto label_28ab6c;
        }
    }
    ctx->pc = 0x28AB24u;
label_28ab24:
    // 0x28ab24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28ab24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_28ab28:
    // 0x28ab28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28ab2c:
    if (ctx->pc == 0x28AB2Cu) {
        ctx->pc = 0x28AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB28u;
        // 0x28ab2c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB30u;
        goto label_28ab30;
    }
    ctx->pc = 0x28AB28u;
    {
        const bool branch_taken_0x28ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB28u;
        // 0x28ab2c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab28) {
            ctx->pc = 0x28AB4Cu;
            goto label_28ab4c;
        }
    }
    ctx->pc = 0x28AB30u;
label_28ab30:
    // 0x28ab30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ab30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ab34:
    // 0x28ab34: 0xc0a364c  jal         func_28D930
label_28ab38:
    if (ctx->pc == 0x28AB38u) {
        ctx->pc = 0x28AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB34u;
        // 0x28ab38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB3Cu;
        goto label_28ab3c;
    }
    ctx->pc = 0x28AB34u;
    SET_GPR_U32(ctx, 31, 0x28AB3Cu);
    ctx->pc = 0x28AB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB34u;
    // 0x28ab38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28AB34u, 0x28AB3Cu)) {
        return;
    }
    ctx->pc = 0x28AB3Cu;
label_28ab3c:
    // 0x28ab3c: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_28ab40:
    if (ctx->pc == 0x28AB40u) {
        ctx->pc = 0x28AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB3Cu;
        // 0x28ab40: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB44u;
        goto label_28ab44;
    }
    ctx->pc = 0x28AB3Cu;
    {
        const bool branch_taken_0x28ab3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB3Cu;
        // 0x28ab40: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab3c) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28AB44u;
label_28ab44:
    // 0x28ab44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ab44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ab48:
    // 0x28ab48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ab4c:
    // 0x28ab4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ab50:
    // 0x28ab50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28ab54:
    // 0x28ab54: 0xc0a364c  jal         func_28D930
label_28ab58:
    if (ctx->pc == 0x28AB58u) {
        ctx->pc = 0x28AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB54u;
        // 0x28ab58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB5Cu;
        goto label_28ab5c;
    }
    ctx->pc = 0x28AB54u;
    SET_GPR_U32(ctx, 31, 0x28AB5Cu);
    ctx->pc = 0x28AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB54u;
    // 0x28ab58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28AB54u, 0x28AB5Cu)) {
        return;
    }
    ctx->pc = 0x28AB5Cu;
label_28ab5c:
    // 0x28ab5c: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_28ab60:
    if (ctx->pc == 0x28AB60u) {
        ctx->pc = 0x28AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB5Cu;
        // 0x28ab60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB64u;
        goto label_28ab64;
    }
    ctx->pc = 0x28AB5Cu;
    {
        const bool branch_taken_0x28ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB5Cu;
        // 0x28ab60: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab5c) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28AB64u;
label_28ab64:
    // 0x28ab64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28ab64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28ab68:
    // 0x28ab68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ab6c:
    // 0x28ab6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ab70:
    // 0x28ab70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28ab74:
    // 0x28ab74: 0xc0a364c  jal         func_28D930
label_28ab78:
    if (ctx->pc == 0x28AB78u) {
        ctx->pc = 0x28AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB74u;
        // 0x28ab78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB7Cu;
        goto label_28ab7c;
    }
    ctx->pc = 0x28AB74u;
    SET_GPR_U32(ctx, 31, 0x28AB7Cu);
    ctx->pc = 0x28AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB74u;
    // 0x28ab78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28AB74u, 0x28AB7Cu)) {
        return;
    }
    ctx->pc = 0x28AB7Cu;
label_28ab7c:
    // 0x28ab7c: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
label_28ab80:
    if (ctx->pc == 0x28AB80u) {
        ctx->pc = 0x28AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB7Cu;
        // 0x28ab80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB84u;
        goto label_28ab84;
    }
    ctx->pc = 0x28AB7Cu;
    {
        const bool branch_taken_0x28ab7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB7Cu;
        // 0x28ab80: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab7c) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28AB84u;
label_28ab84:
    // 0x28ab84: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x28ab84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_28ab88:
    // 0x28ab88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_28ab8c:
    if (ctx->pc == 0x28AB8Cu) {
        ctx->pc = 0x28AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB88u;
        // 0x28ab8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AB90u;
        goto label_28ab90;
    }
    ctx->pc = 0x28AB88u;
    {
        const bool branch_taken_0x28ab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB88u;
        // 0x28ab8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab88) {
            ctx->pc = 0x28AC00u;
            goto label_28ac00;
        }
    }
    ctx->pc = 0x28AB90u;
label_28ab90:
    // 0x28ab90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ab94:
    // 0x28ab94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ab98:
    // 0x28ab98: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28ab9c:
    // 0x28ab9c: 0xc0a364c  jal         func_28D930
label_28aba0:
    if (ctx->pc == 0x28ABA0u) {
        ctx->pc = 0x28ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AB9Cu;
        // 0x28aba0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABA4u;
        goto label_28aba4;
    }
    ctx->pc = 0x28AB9Cu;
    SET_GPR_U32(ctx, 31, 0x28ABA4u);
    ctx->pc = 0x28ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AB9Cu;
    // 0x28aba0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28AB9Cu, 0x28ABA4u)) {
        return;
    }
    ctx->pc = 0x28ABA4u;
label_28aba4:
    // 0x28aba4: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
label_28aba8:
    if (ctx->pc == 0x28ABA8u) {
        ctx->pc = 0x28ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABA4u;
        // 0x28aba8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABACu;
        goto label_28abac;
    }
    ctx->pc = 0x28ABA4u;
    {
        const bool branch_taken_0x28aba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABA4u;
        // 0x28aba8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aba4) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28ABACu;
label_28abac:
    // 0x28abac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28abacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28abb0:
    // 0x28abb0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28abb4:
    // 0x28abb4: 0xc0a364c  jal         func_28D930
label_28abb8:
    if (ctx->pc == 0x28ABB8u) {
        ctx->pc = 0x28ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB4u;
        // 0x28abb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABBCu;
        goto label_28abbc;
    }
    ctx->pc = 0x28ABB4u;
    SET_GPR_U32(ctx, 31, 0x28ABBCu);
    ctx->pc = 0x28ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABB4u;
    // 0x28abb8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28ABB4u, 0x28ABBCu)) {
        return;
    }
    ctx->pc = 0x28ABBCu;
label_28abbc:
    // 0x28abbc: 0x1040ffcd  beqz        $v0, . + 4 + (-0x33 << 2)
label_28abc0:
    if (ctx->pc == 0x28ABC0u) {
        ctx->pc = 0x28ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABBCu;
        // 0x28abc0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABC4u;
        goto label_28abc4;
    }
    ctx->pc = 0x28ABBCu;
    {
        const bool branch_taken_0x28abbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABBCu;
        // 0x28abc0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abbc) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28ABC4u;
label_28abc4:
    // 0x28abc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28abc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28abc8:
    // 0x28abc8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28abcc:
    // 0x28abcc: 0xc0a364c  jal         func_28D930
label_28abd0:
    if (ctx->pc == 0x28ABD0u) {
        ctx->pc = 0x28ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABCCu;
        // 0x28abd0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABD4u;
        goto label_28abd4;
    }
    ctx->pc = 0x28ABCCu;
    SET_GPR_U32(ctx, 31, 0x28ABD4u);
    ctx->pc = 0x28ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABCCu;
    // 0x28abd0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28ABCCu, 0x28ABD4u)) {
        return;
    }
    ctx->pc = 0x28ABD4u;
label_28abd4:
    // 0x28abd4: 0x1040ffc7  beqz        $v0, . + 4 + (-0x39 << 2)
label_28abd8:
    if (ctx->pc == 0x28ABD8u) {
        ctx->pc = 0x28ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD4u;
        // 0x28abd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABDCu;
        goto label_28abdc;
    }
    ctx->pc = 0x28ABD4u;
    {
        const bool branch_taken_0x28abd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABD4u;
        // 0x28abd8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abd4) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28ABDCu;
label_28abdc:
    // 0x28abdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28abe0:
    // 0x28abe0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28abe4:
    // 0x28abe4: 0xc0a364c  jal         func_28D930
label_28abe8:
    if (ctx->pc == 0x28ABE8u) {
        ctx->pc = 0x28ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABE4u;
        // 0x28abe8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABECu;
        goto label_28abec;
    }
    ctx->pc = 0x28ABE4u;
    SET_GPR_U32(ctx, 31, 0x28ABECu);
    ctx->pc = 0x28ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABE4u;
    // 0x28abe8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D930u, 0x28ABE4u, 0x28ABECu)) {
        return;
    }
    ctx->pc = 0x28ABECu;
label_28abec:
    // 0x28abec: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
label_28abf0:
    if (ctx->pc == 0x28ABF0u) {
        ctx->pc = 0x28ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABECu;
        // 0x28abf0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ABF4u;
        goto label_28abf4;
    }
    ctx->pc = 0x28ABECu;
    {
        const bool branch_taken_0x28abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABECu;
        // 0x28abf0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abec) {
            ctx->pc = 0x28AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aaf4;
        }
    }
    ctx->pc = 0x28ABF4u;
label_28abf4:
    // 0x28abf4: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x28abf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_28abf8:
    // 0x28abf8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_28abfc:
    if (ctx->pc == 0x28ABFCu) {
        ctx->pc = 0x28ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF8u;
        // 0x28abfc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC00u;
        goto label_28ac00;
    }
    ctx->pc = 0x28ABF8u;
    {
        const bool branch_taken_0x28abf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABF8u;
        // 0x28abfc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28abf8) {
            ctx->pc = 0x28AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ab90;
        }
    }
    ctx->pc = 0x28AC00u;
label_28ac00:
    // 0x28ac00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28ac04:
    // 0x28ac04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28ac08:
    if (ctx->pc == 0x28AC08u) {
        ctx->pc = 0x28AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC04u;
        // 0x28ac08: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC0Cu;
        goto label_28ac0c;
    }
    ctx->pc = 0x28AC04u;
    {
        const bool branch_taken_0x28ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC04u;
        // 0x28ac08: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac04) {
            ctx->pc = 0x28AC14u;
            goto label_28ac14;
        }
    }
    ctx->pc = 0x28AC0Cu;
label_28ac0c:
    // 0x28ac0c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_28ac10:
    if (ctx->pc == 0x28AC10u) {
        ctx->pc = 0x28AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC0Cu;
        // 0x28ac10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC14u;
        goto label_28ac14;
    }
    ctx->pc = 0x28AC0Cu;
    {
        const bool branch_taken_0x28ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC0Cu;
        // 0x28ac10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac0c) {
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28AC14u;
label_28ac14:
    // 0x28ac14: 0x8e8400b0  lw          $a0, 0xB0($s4)
    ctx->pc = 0x28ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
label_28ac18:
    // 0x28ac18: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_28ac1c:
    // 0x28ac1c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x28ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_28ac20:
    // 0x28ac20: 0x2453bca8  addiu       $s3, $v0, -0x4358
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950056));
label_28ac24:
    // 0x28ac24: 0xc09292a  jal         func_24A4A8
label_28ac28:
    if (ctx->pc == 0x28AC28u) {
        ctx->pc = 0x28AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC24u;
        // 0x28ac28: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC2Cu;
        goto label_28ac2c;
    }
    ctx->pc = 0x28AC24u;
    SET_GPR_U32(ctx, 31, 0x28AC2Cu);
    ctx->pc = 0x28AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC24u;
    // 0x28ac28: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28AC24u, 0x28AC2Cu)) {
        return;
    }
    ctx->pc = 0x28AC2Cu;
label_28ac2c:
    // 0x28ac2c: 0x8e8400b4  lw          $a0, 0xB4($s4)
    ctx->pc = 0x28ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
label_28ac30:
    // 0x28ac30: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28ac34:
    // 0x28ac34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ac34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ac38:
    // 0x28ac38: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28ac38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28ac3c:
    // 0x28ac3c: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28ac3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28ac40:
    // 0x28ac40: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_28ac44:
    if (ctx->pc == 0x28AC44u) {
        ctx->pc = 0x28AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC40u;
        // 0x28ac44: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC48u;
        goto label_28ac48;
    }
    ctx->pc = 0x28AC40u;
    {
        const bool branch_taken_0x28ac40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC40u;
        // 0x28ac44: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac40) {
            ctx->pc = 0x28AC6Cu;
            goto label_28ac6c;
        }
    }
    ctx->pc = 0x28AC48u;
label_28ac48:
    // 0x28ac48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ac4c:
    // 0x28ac4c: 0x0  nop
    ctx->pc = 0x28ac4cu;
    // NOP
label_28ac50:
    // 0x28ac50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28ac54:
    // 0x28ac54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ac54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ac58:
    // 0x28ac58: 0x260f809  jalr        $s3
label_28ac5c:
    if (ctx->pc == 0x28AC5Cu) {
        ctx->pc = 0x28AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC58u;
        // 0x28ac5c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC60u;
        goto label_28ac60;
    }
    ctx->pc = 0x28AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x28AC60u);
        ctx->pc = 0x28AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC58u;
        // 0x28ac5c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC58u, 0x28AC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28AC60u;
label_28ac60:
    // 0x28ac60: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28ac64:
    if (ctx->pc == 0x28AC64u) {
        ctx->pc = 0x28AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC60u;
        // 0x28ac64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC68u;
        goto label_28ac68;
    }
    ctx->pc = 0x28AC60u;
    {
        const bool branch_taken_0x28ac60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC60u;
        // 0x28ac64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac60) {
            ctx->pc = 0x28AC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ac50;
        }
    }
    ctx->pc = 0x28AC68u;
label_28ac68:
    // 0x28ac68: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28ac6c:
    // 0x28ac6c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_28ac70:
    if (ctx->pc == 0x28AC70u) {
        ctx->pc = 0x28AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC6Cu;
        // 0x28ac70: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC74u;
        goto label_28ac74;
    }
    ctx->pc = 0x28AC6Cu;
    {
        const bool branch_taken_0x28ac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ac6c) {
            ctx->pc = 0x28AC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AC6Cu;
            // 0x28ac70: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ACC4u;
            goto label_28acc4;
        }
    }
    ctx->pc = 0x28AC74u;
label_28ac74:
    // 0x28ac74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_28ac78:
    if (ctx->pc == 0x28AC78u) {
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC7Cu;
        goto label_28ac7c;
    }
    ctx->pc = 0x28AC74u;
    {
        const bool branch_taken_0x28ac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC74u;
        // 0x28ac78: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ac74) {
            ctx->pc = 0x28ACACu;
            goto label_28acac;
        }
    }
    ctx->pc = 0x28AC7Cu;
label_28ac7c:
    // 0x28ac7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28ac7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ac80:
    // 0x28ac80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28ac84:
    // 0x28ac84: 0x0  nop
    ctx->pc = 0x28ac84u;
    // NOP
label_28ac88:
    // 0x28ac88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ac88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ac8c:
    // 0x28ac8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28ac90:
    // 0x28ac90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28ac94:
    // 0x28ac94: 0xc0a3434  jal         func_28D0D0
label_28ac98:
    if (ctx->pc == 0x28AC98u) {
        ctx->pc = 0x28AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC94u;
        // 0x28ac98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AC9Cu;
        goto label_28ac9c;
    }
    ctx->pc = 0x28AC94u;
    SET_GPR_U32(ctx, 31, 0x28AC9Cu);
    ctx->pc = 0x28AC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AC94u;
    // 0x28ac98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D0D0u, 0x28AC94u, 0x28AC9Cu)) {
        return;
    }
    ctx->pc = 0x28AC9Cu;
label_28ac9c:
    // 0x28ac9c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x28ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28aca0:
    // 0x28aca0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x28aca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28aca4:
    // 0x28aca4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_28aca8:
    if (ctx->pc == 0x28ACA8u) {
        ctx->pc = 0x28ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA4u;
        // 0x28aca8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACACu;
        goto label_28acac;
    }
    ctx->pc = 0x28ACA4u;
    {
        const bool branch_taken_0x28aca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACA4u;
        // 0x28aca8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aca4) {
            ctx->pc = 0x28AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ac88;
        }
    }
    ctx->pc = 0x28ACACu;
label_28acac:
    // 0x28acac: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28acb0:
    // 0x28acb0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x28acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28acb4:
    // 0x28acb4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28acb8:
    // 0x28acb8: 0x60f809  jalr        $v1
label_28acbc:
    if (ctx->pc == 0x28ACBCu) {
        ctx->pc = 0x28ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACB8u;
        // 0x28acbc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACC0u;
        goto label_28acc0;
    }
    ctx->pc = 0x28ACB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28ACC0u);
        ctx->pc = 0x28ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACB8u;
        // 0x28acbc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ACB8u, 0x28ACC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28ACC0u;
label_28acc0:
    // 0x28acc0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28acc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28acc4:
    // 0x28acc4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28acc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28acc8:
    // 0x28acc8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28acc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28accc:
    // 0x28accc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28acccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28acd0:
    // 0x28acd0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28acd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28acd4:
    // 0x28acd4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28acd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28acd8:
    // 0x28acd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28acd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28acdc:
    // 0x28acdc: 0x3e00008  jr          $ra
label_28ace0:
    if (ctx->pc == 0x28ACE0u) {
        ctx->pc = 0x28ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACDCu;
        // 0x28ace0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28ACE4u;
        goto label_28ace4;
    }
    ctx->pc = 0x28ACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ACDCu;
        // 0x28ace0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ACE4u;
label_28ace4:
    // 0x28ace4: 0x0  nop
    ctx->pc = 0x28ace4u;
    // NOP
    ctx->pc = 0x28ace8u;
}
