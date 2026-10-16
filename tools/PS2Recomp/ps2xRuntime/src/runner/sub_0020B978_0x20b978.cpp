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

// Function: sub_0020B978
// Address: 0x20b978 - 0x20bca0
void sub_0020B978_0x20b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B978_0x20b978");
#endif

    switch (ctx->pc) {
        case 0x20b978u: goto label_20b978;
        case 0x20b97cu: goto label_20b97c;
        case 0x20b980u: goto label_20b980;
        case 0x20b984u: goto label_20b984;
        case 0x20b988u: goto label_20b988;
        case 0x20b98cu: goto label_20b98c;
        case 0x20b990u: goto label_20b990;
        case 0x20b994u: goto label_20b994;
        case 0x20b998u: goto label_20b998;
        case 0x20b99cu: goto label_20b99c;
        case 0x20b9a0u: goto label_20b9a0;
        case 0x20b9a4u: goto label_20b9a4;
        case 0x20b9a8u: goto label_20b9a8;
        case 0x20b9acu: goto label_20b9ac;
        case 0x20b9b0u: goto label_20b9b0;
        case 0x20b9b4u: goto label_20b9b4;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20b9bcu: goto label_20b9bc;
        case 0x20b9c0u: goto label_20b9c0;
        case 0x20b9c4u: goto label_20b9c4;
        case 0x20b9c8u: goto label_20b9c8;
        case 0x20b9ccu: goto label_20b9cc;
        case 0x20b9d0u: goto label_20b9d0;
        case 0x20b9d4u: goto label_20b9d4;
        case 0x20b9d8u: goto label_20b9d8;
        case 0x20b9dcu: goto label_20b9dc;
        case 0x20b9e0u: goto label_20b9e0;
        case 0x20b9e4u: goto label_20b9e4;
        case 0x20b9e8u: goto label_20b9e8;
        case 0x20b9ecu: goto label_20b9ec;
        case 0x20b9f0u: goto label_20b9f0;
        case 0x20b9f4u: goto label_20b9f4;
        case 0x20b9f8u: goto label_20b9f8;
        case 0x20b9fcu: goto label_20b9fc;
        case 0x20ba00u: goto label_20ba00;
        case 0x20ba04u: goto label_20ba04;
        case 0x20ba08u: goto label_20ba08;
        case 0x20ba0cu: goto label_20ba0c;
        case 0x20ba10u: goto label_20ba10;
        case 0x20ba14u: goto label_20ba14;
        case 0x20ba18u: goto label_20ba18;
        case 0x20ba1cu: goto label_20ba1c;
        case 0x20ba20u: goto label_20ba20;
        case 0x20ba24u: goto label_20ba24;
        case 0x20ba28u: goto label_20ba28;
        case 0x20ba2cu: goto label_20ba2c;
        case 0x20ba30u: goto label_20ba30;
        case 0x20ba34u: goto label_20ba34;
        case 0x20ba38u: goto label_20ba38;
        case 0x20ba3cu: goto label_20ba3c;
        case 0x20ba40u: goto label_20ba40;
        case 0x20ba44u: goto label_20ba44;
        case 0x20ba48u: goto label_20ba48;
        case 0x20ba4cu: goto label_20ba4c;
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba54u: goto label_20ba54;
        case 0x20ba58u: goto label_20ba58;
        case 0x20ba5cu: goto label_20ba5c;
        case 0x20ba60u: goto label_20ba60;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba68u: goto label_20ba68;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba70u: goto label_20ba70;
        case 0x20ba74u: goto label_20ba74;
        case 0x20ba78u: goto label_20ba78;
        case 0x20ba7cu: goto label_20ba7c;
        case 0x20ba80u: goto label_20ba80;
        case 0x20ba84u: goto label_20ba84;
        case 0x20ba88u: goto label_20ba88;
        case 0x20ba8cu: goto label_20ba8c;
        case 0x20ba90u: goto label_20ba90;
        case 0x20ba94u: goto label_20ba94;
        case 0x20ba98u: goto label_20ba98;
        case 0x20ba9cu: goto label_20ba9c;
        case 0x20baa0u: goto label_20baa0;
        case 0x20baa4u: goto label_20baa4;
        case 0x20baa8u: goto label_20baa8;
        case 0x20baacu: goto label_20baac;
        case 0x20bab0u: goto label_20bab0;
        case 0x20bab4u: goto label_20bab4;
        case 0x20bab8u: goto label_20bab8;
        case 0x20babcu: goto label_20babc;
        case 0x20bac0u: goto label_20bac0;
        case 0x20bac4u: goto label_20bac4;
        case 0x20bac8u: goto label_20bac8;
        case 0x20baccu: goto label_20bacc;
        case 0x20bad0u: goto label_20bad0;
        case 0x20bad4u: goto label_20bad4;
        case 0x20bad8u: goto label_20bad8;
        case 0x20badcu: goto label_20badc;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae4u: goto label_20bae4;
        case 0x20bae8u: goto label_20bae8;
        case 0x20baecu: goto label_20baec;
        case 0x20baf0u: goto label_20baf0;
        case 0x20baf4u: goto label_20baf4;
        case 0x20baf8u: goto label_20baf8;
        case 0x20bafcu: goto label_20bafc;
        case 0x20bb00u: goto label_20bb00;
        case 0x20bb04u: goto label_20bb04;
        case 0x20bb08u: goto label_20bb08;
        case 0x20bb0cu: goto label_20bb0c;
        case 0x20bb10u: goto label_20bb10;
        case 0x20bb14u: goto label_20bb14;
        case 0x20bb18u: goto label_20bb18;
        case 0x20bb1cu: goto label_20bb1c;
        case 0x20bb20u: goto label_20bb20;
        case 0x20bb24u: goto label_20bb24;
        case 0x20bb28u: goto label_20bb28;
        case 0x20bb2cu: goto label_20bb2c;
        case 0x20bb30u: goto label_20bb30;
        case 0x20bb34u: goto label_20bb34;
        case 0x20bb38u: goto label_20bb38;
        case 0x20bb3cu: goto label_20bb3c;
        case 0x20bb40u: goto label_20bb40;
        case 0x20bb44u: goto label_20bb44;
        case 0x20bb48u: goto label_20bb48;
        case 0x20bb4cu: goto label_20bb4c;
        case 0x20bb50u: goto label_20bb50;
        case 0x20bb54u: goto label_20bb54;
        case 0x20bb58u: goto label_20bb58;
        case 0x20bb5cu: goto label_20bb5c;
        case 0x20bb60u: goto label_20bb60;
        case 0x20bb64u: goto label_20bb64;
        case 0x20bb68u: goto label_20bb68;
        case 0x20bb6cu: goto label_20bb6c;
        case 0x20bb70u: goto label_20bb70;
        case 0x20bb74u: goto label_20bb74;
        case 0x20bb78u: goto label_20bb78;
        case 0x20bb7cu: goto label_20bb7c;
        case 0x20bb80u: goto label_20bb80;
        case 0x20bb84u: goto label_20bb84;
        case 0x20bb88u: goto label_20bb88;
        case 0x20bb8cu: goto label_20bb8c;
        case 0x20bb90u: goto label_20bb90;
        case 0x20bb94u: goto label_20bb94;
        case 0x20bb98u: goto label_20bb98;
        case 0x20bb9cu: goto label_20bb9c;
        case 0x20bba0u: goto label_20bba0;
        case 0x20bba4u: goto label_20bba4;
        case 0x20bba8u: goto label_20bba8;
        case 0x20bbacu: goto label_20bbac;
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbb4u: goto label_20bbb4;
        case 0x20bbb8u: goto label_20bbb8;
        case 0x20bbbcu: goto label_20bbbc;
        case 0x20bbc0u: goto label_20bbc0;
        case 0x20bbc4u: goto label_20bbc4;
        case 0x20bbc8u: goto label_20bbc8;
        case 0x20bbccu: goto label_20bbcc;
        case 0x20bbd0u: goto label_20bbd0;
        case 0x20bbd4u: goto label_20bbd4;
        case 0x20bbd8u: goto label_20bbd8;
        case 0x20bbdcu: goto label_20bbdc;
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        case 0x20bc80u: goto label_20bc80;
        case 0x20bc84u: goto label_20bc84;
        case 0x20bc88u: goto label_20bc88;
        case 0x20bc8cu: goto label_20bc8c;
        case 0x20bc90u: goto label_20bc90;
        case 0x20bc94u: goto label_20bc94;
        case 0x20bc98u: goto label_20bc98;
        case 0x20bc9cu: goto label_20bc9c;
        default: break;
    }

    ctx->pc = 0x20b978u;

label_20b978:
    // 0x20b978: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20b97c:
    // 0x20b97c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20b97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20b980:
    // 0x20b980: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20b980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20b984:
    // 0x20b984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20b984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b988:
    // 0x20b988: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20b98c:
    // 0x20b98c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b990:
    // 0x20b990: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20b994:
    // 0x20b994: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20b998:
    // 0x20b998: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20b99c:
    // 0x20b99c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20b99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20b9a0:
    // 0x20b9a0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20b9a4:
    // 0x20b9a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20b9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20b9a8:
    // 0x20b9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b9ac:
    // 0x20b9ac: 0x8e220190  lw          $v0, 0x190($s1)
    ctx->pc = 0x20b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_20b9b0:
    // 0x20b9b0: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x20b9b0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20b9b4:
    // 0x20b9b4: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
label_20b9b8:
    if (ctx->pc == 0x20B9B8u) {
        ctx->pc = 0x20B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B4u;
        // 0x20b9b8: 0x8e3501bc  lw          $s5, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9BCu;
        goto label_20b9bc;
    }
    ctx->pc = 0x20B9B4u;
    {
        const bool branch_taken_0x20b9b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B4u;
        // 0x20b9b8: 0x8e3501bc  lw          $s5, 0x1BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9b4) {
            ctx->pc = 0x20B9C8u;
            goto label_20b9c8;
        }
    }
    ctx->pc = 0x20B9BCu;
label_20b9bc:
    // 0x20b9bc: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x20b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_20b9c0:
    // 0x20b9c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_20b9c4:
    if (ctx->pc == 0x20B9C4u) {
        ctx->pc = 0x20B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9C0u;
        // 0x20b9c4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9C8u;
        goto label_20b9c8;
    }
    ctx->pc = 0x20B9C0u;
    {
        const bool branch_taken_0x20b9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9C0u;
        // 0x20b9c4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9c0) {
            ctx->pc = 0x20B9F8u;
            goto label_20b9f8;
        }
    }
    ctx->pc = 0x20B9C8u;
label_20b9c8:
    // 0x20b9c8: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_20b9cc:
    // 0x20b9cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20b9ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20b9d0:
    // 0x20b9d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_20b9d4:
    if (ctx->pc == 0x20B9D4u) {
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9D8u;
        goto label_20b9d8;
    }
    ctx->pc = 0x20B9D0u;
    {
        const bool branch_taken_0x20b9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b9d0) {
            ctx->pc = 0x20B9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B9D0u;
            // 0x20b9d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B9E8u;
            goto label_20b9e8;
        }
    }
    ctx->pc = 0x20B9D8u;
label_20b9d8:
    // 0x20b9d8: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x20b9d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_20b9dc:
    // 0x20b9dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_20b9e0:
    if (ctx->pc == 0x20B9E0u) {
        ctx->pc = 0x20B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9DCu;
        // 0x20b9e0: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B9E4u;
        goto label_20b9e4;
    }
    ctx->pc = 0x20B9DCu;
    {
        const bool branch_taken_0x20b9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b9dc) {
            ctx->pc = 0x20B9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B9DCu;
            // 0x20b9e0: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B9ECu;
            goto label_20b9ec;
        }
    }
    ctx->pc = 0x20B9E4u;
label_20b9e4:
    // 0x20b9e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b9e8:
    // 0x20b9e8: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20b9ec:
    // 0x20b9ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b9f0:
    // 0x20b9f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20b9f4:
    // 0x20b9f4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x20b9f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_20b9f8:
    // 0x20b9f8: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x20b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_20b9fc:
    // 0x20b9fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20ba00:
    if (ctx->pc == 0x20BA00u) {
        ctx->pc = 0x20BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9FCu;
        // 0x20ba00: 0x8e25019c  lw          $a1, 0x19C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA04u;
        goto label_20ba04;
    }
    ctx->pc = 0x20B9FCu;
    {
        const bool branch_taken_0x20b9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9FCu;
        // 0x20ba00: 0x8e25019c  lw          $a1, 0x19C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9fc) {
            ctx->pc = 0x20BA14u;
            goto label_20ba14;
        }
    }
    ctx->pc = 0x20BA04u;
label_20ba04:
    // 0x20ba04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20ba08:
    // 0x20ba08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba0c:
    // 0x20ba0c: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x20ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
label_20ba10:
    // 0x20ba10: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x20ba10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_20ba14:
    // 0x20ba14: 0x28a3000e  slti        $v1, $a1, 0xE
    ctx->pc = 0x20ba14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
label_20ba18:
    // 0x20ba18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba1c:
    // 0x20ba1c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x20ba1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_20ba20:
    // 0x20ba20: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_20ba24:
    if (ctx->pc == 0x20BA24u) {
        ctx->pc = 0x20BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA20u;
        // 0x20ba24: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA28u;
        goto label_20ba28;
    }
    ctx->pc = 0x20BA20u;
    {
        const bool branch_taken_0x20ba20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA20u;
        // 0x20ba24: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba20) {
            ctx->pc = 0x20BA70u;
            goto label_20ba70;
        }
    }
    ctx->pc = 0x20BA28u;
label_20ba28:
    // 0x20ba28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba2c:
    // 0x20ba2c: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x20ba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_20ba30:
    // 0x20ba30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba34:
    // 0x20ba34: 0x8e220190  lw          $v0, 0x190($s1)
    ctx->pc = 0x20ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_20ba38:
    // 0x20ba38: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x20ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_20ba3c:
    // 0x20ba3c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba40:
    // 0x20ba40: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x20ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_20ba44:
    // 0x20ba44: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x20ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_20ba48:
    // 0x20ba48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba4c:
    // 0x20ba4c: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x20ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_20ba50:
    // 0x20ba50: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x20ba50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_20ba54:
    // 0x20ba54: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x20ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_20ba58:
    // 0x20ba58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba5c:
    // 0x20ba5c: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x20ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
label_20ba60:
    // 0x20ba60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ba64:
    // 0x20ba64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20ba68:
    // 0x20ba68: 0x40f809  jalr        $v0
label_20ba6c:
    if (ctx->pc == 0x20BA6Cu) {
        ctx->pc = 0x20BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA68u;
        // 0x20ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA70u;
        goto label_20ba70;
    }
    ctx->pc = 0x20BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BA70u);
        ctx->pc = 0x20BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA68u;
        // 0x20ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA68u, 0x20BA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BA70u;
label_20ba70:
    // 0x20ba70: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20ba74:
    // 0x20ba74: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_20ba78:
    if (ctx->pc == 0x20BA78u) {
        ctx->pc = 0x20BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA74u;
        // 0x20ba78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BA7Cu;
        goto label_20ba7c;
    }
    ctx->pc = 0x20BA74u;
    {
        const bool branch_taken_0x20ba74 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA74u;
        // 0x20ba78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba74) {
            ctx->pc = 0x20BB78u;
            goto label_20bb78;
        }
    }
    ctx->pc = 0x20BA7Cu;
label_20ba7c:
    // 0x20ba7c: 0x2622014c  addiu       $v0, $s1, 0x14C
    ctx->pc = 0x20ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_20ba80:
    // 0x20ba80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_20ba84:
    // 0x20ba84: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20ba88:
    // 0x20ba88: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x20ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_20ba8c:
    // 0x20ba8c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x20ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_20ba90:
    // 0x20ba90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ba94:
    // 0x20ba94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ba98:
    // 0x20ba98: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x20ba98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_20ba9c:
    // 0x20ba9c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
label_20baa0:
    // 0x20baa0: 0x17c00010  bnez        $fp, . + 4 + (0x10 << 2)
label_20baa4:
    if (ctx->pc == 0x20BAA4u) {
        ctx->pc = 0x20BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAA0u;
        // 0x20baa4: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAA8u;
        goto label_20baa8;
    }
    ctx->pc = 0x20BAA0u;
    {
        const bool branch_taken_0x20baa0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAA0u;
        // 0x20baa4: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baa0) {
            ctx->pc = 0x20BAE4u;
            goto label_20bae4;
        }
    }
    ctx->pc = 0x20BAA8u;
label_20baa8:
    // 0x20baa8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x20baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20baac:
    // 0x20baac: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
label_20bab0:
    if (ctx->pc == 0x20BAB0u) {
        ctx->pc = 0x20BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAACu;
        // 0x20bab0: 0x8e300190  lw          $s0, 0x190($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAB4u;
        goto label_20bab4;
    }
    ctx->pc = 0x20BAACu;
    {
        const bool branch_taken_0x20baac = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x20baac) {
            ctx->pc = 0x20BAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BAACu;
            // 0x20bab0: 0x8e300190  lw          $s0, 0x190($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BAE8u;
            goto label_20bae8;
        }
    }
    ctx->pc = 0x20BAB4u;
label_20bab4:
    // 0x20bab4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bab8:
    // 0x20bab8: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_20babc:
    // 0x20babc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bac0:
    // 0x20bac0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20bac4:
    // 0x20bac4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bac8:
    // 0x20bac8: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x20bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
label_20bacc:
    // 0x20bacc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bad0:
    // 0x20bad0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x20bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_20bad4:
    // 0x20bad4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bad8:
    // 0x20bad8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20badc:
    // 0x20badc: 0x60f809  jalr        $v1
label_20bae0:
    if (ctx->pc == 0x20BAE0u) {
        ctx->pc = 0x20BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BADCu;
        // 0x20bae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAE4u;
        goto label_20bae4;
    }
    ctx->pc = 0x20BADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BAE4u);
        ctx->pc = 0x20BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BADCu;
        // 0x20bae0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BADCu, 0x20BAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BAE4u;
label_20bae4:
    // 0x20bae4: 0x8e300190  lw          $s0, 0x190($s1)
    ctx->pc = 0x20bae4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
label_20bae8:
    // 0x20bae8: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x20bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_20baec:
    // 0x20baec: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20baecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_20baf0:
    // 0x20baf0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_20baf4:
    if (ctx->pc == 0x20BAF4u) {
        ctx->pc = 0x20BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAF0u;
        // 0x20baf4: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BAF8u;
        goto label_20baf8;
    }
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAF0u;
        // 0x20baf4: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20BB64u;
            goto label_20bb64;
        }
    }
    ctx->pc = 0x20BAF8u;
label_20baf8:
    // 0x20baf8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x20baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20bafc:
    // 0x20bafc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x20bafcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20bb00:
    // 0x20bb00: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_20bb04:
    // 0x20bb04: 0x24140073  addiu       $s4, $zero, 0x73
    ctx->pc = 0x20bb04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_20bb08:
    // 0x20bb08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20bb0c:
    // 0x20bb0c: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_20bb10:
    // 0x20bb10: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x20bb10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bb14:
    // 0x20bb14: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x20bb14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_20bb18:
    // 0x20bb18: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_20bb1c:
    if (ctx->pc == 0x20BB1Cu) {
        ctx->pc = 0x20BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB18u;
        // 0x20bb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB20u;
        goto label_20bb20;
    }
    ctx->pc = 0x20BB18u;
    {
        const bool branch_taken_0x20bb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB18u;
        // 0x20bb1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb18) {
            ctx->pc = 0x20BB48u;
            goto label_20bb48;
        }
    }
    ctx->pc = 0x20BB20u;
label_20bb20:
    // 0x20bb20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bb24:
    // 0x20bb24: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x20bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
label_20bb28:
    // 0x20bb28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bb2c:
    // 0x20bb2c: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x20bb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
label_20bb30:
    // 0x20bb30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bb34:
    // 0x20bb34: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x20bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
label_20bb38:
    // 0x20bb38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20bb3c:
    // 0x20bb3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20bb40:
    // 0x20bb40: 0x60f809  jalr        $v1
label_20bb44:
    if (ctx->pc == 0x20BB44u) {
        ctx->pc = 0x20BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB40u;
        // 0x20bb44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB48u;
        goto label_20bb48;
    }
    ctx->pc = 0x20BB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BB48u);
        ctx->pc = 0x20BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB40u;
        // 0x20bb44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB40u, 0x20BB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BB48u;
label_20bb48:
    // 0x20bb48: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x20bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
label_20bb4c:
    // 0x20bb4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20bb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20bb50:
    // 0x20bb50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x20bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_20bb54:
    // 0x20bb54: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x20bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_20bb58:
    // 0x20bb58: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x20bb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_20bb5c:
    // 0x20bb5c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
label_20bb60:
    if (ctx->pc == 0x20BB60u) {
        ctx->pc = 0x20BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB5Cu;
        // 0x20bb60: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB64u;
        goto label_20bb64;
    }
    ctx->pc = 0x20BB5Cu;
    {
        const bool branch_taken_0x20bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB5Cu;
        // 0x20bb60: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb5c) {
            ctx->pc = 0x20BB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bb08;
        }
    }
    ctx->pc = 0x20BB64u;
label_20bb64:
    // 0x20bb64: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20bb68:
    // 0x20bb68: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x20bb68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20bb6c:
    // 0x20bb6c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20bb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bb70:
    // 0x20bb70: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_20bb74:
    if (ctx->pc == 0x20BB74u) {
        ctx->pc = 0x20BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB70u;
        // 0x20bb74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB78u;
        goto label_20bb78;
    }
    ctx->pc = 0x20BB70u;
    {
        const bool branch_taken_0x20bb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB70u;
        // 0x20bb74: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb70) {
            ctx->pc = 0x20BA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ba88;
        }
    }
    ctx->pc = 0x20BB78u;
label_20bb78:
    // 0x20bb78: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x20bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_20bb7c:
    // 0x20bb7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_20bb80:
    if (ctx->pc == 0x20BB80u) {
        ctx->pc = 0x20BB84u;
        goto label_20bb84;
    }
    ctx->pc = 0x20BB7Cu;
    {
        const bool branch_taken_0x20bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bb7c) {
            ctx->pc = 0x20BBA0u;
            goto label_20bba0;
        }
    }
    ctx->pc = 0x20BB84u;
label_20bb84:
    // 0x20bb84: 0x53c00004  beql        $fp, $zero, . + 4 + (0x4 << 2)
label_20bb88:
    if (ctx->pc == 0x20BB88u) {
        ctx->pc = 0x20BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB84u;
        // 0x20bb88: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB8Cu;
        goto label_20bb8c;
    }
    ctx->pc = 0x20BB84u;
    {
        const bool branch_taken_0x20bb84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb84) {
            ctx->pc = 0x20BB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BB84u;
            // 0x20bb88: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BB98u;
            goto label_20bb98;
        }
    }
    ctx->pc = 0x20BB8Cu;
label_20bb8c:
    // 0x20bb8c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20bb90:
    // 0x20bb90: 0x10000009  b           . + 4 + (0x9 << 2)
label_20bb94:
    if (ctx->pc == 0x20BB94u) {
        ctx->pc = 0x20BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB90u;
        // 0x20bb94: 0x2442bca0  addiu       $v0, $v0, -0x4360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BB98u;
        goto label_20bb98;
    }
    ctx->pc = 0x20BB90u;
    {
        const bool branch_taken_0x20bb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB90u;
        // 0x20bb94: 0x2442bca0  addiu       $v0, $v0, -0x4360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb90) {
            ctx->pc = 0x20BBB8u;
            goto label_20bbb8;
        }
    }
    ctx->pc = 0x20BB98u;
label_20bb98:
    // 0x20bb98: 0x10000007  b           . + 4 + (0x7 << 2)
label_20bb9c:
    if (ctx->pc == 0x20BB9Cu) {
        ctx->pc = 0x20BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB98u;
        // 0x20bb9c: 0x2442bfe0  addiu       $v0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBA0u;
        goto label_20bba0;
    }
    ctx->pc = 0x20BB98u;
    {
        const bool branch_taken_0x20bb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB98u;
        // 0x20bb9c: 0x2442bfe0  addiu       $v0, $v0, -0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb98) {
            ctx->pc = 0x20BBB8u;
            goto label_20bbb8;
        }
    }
    ctx->pc = 0x20BBA0u;
label_20bba0:
    // 0x20bba0: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_20bba4:
    if (ctx->pc == 0x20BBA4u) {
        ctx->pc = 0x20BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA0u;
        // 0x20bba4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBA8u;
        goto label_20bba8;
    }
    ctx->pc = 0x20BBA0u;
    {
        const bool branch_taken_0x20bba0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA0u;
        // 0x20bba4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bba0) {
            ctx->pc = 0x20BBB0u;
            goto label_20bbb0;
        }
    }
    ctx->pc = 0x20BBA8u;
label_20bba8:
    // 0x20bba8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20bbac:
    if (ctx->pc == 0x20BBACu) {
        ctx->pc = 0x20BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA8u;
        // 0x20bbac: 0x2442c340  addiu       $v0, $v0, -0x3CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBB0u;
        goto label_20bbb0;
    }
    ctx->pc = 0x20BBA8u;
    {
        const bool branch_taken_0x20bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA8u;
        // 0x20bbac: 0x2442c340  addiu       $v0, $v0, -0x3CC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bba8) {
            ctx->pc = 0x20BBB8u;
            goto label_20bbb8;
        }
    }
    ctx->pc = 0x20BBB0u;
label_20bbb0:
    // 0x20bbb0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20bbb4:
    // 0x20bbb4: 0x2442c518  addiu       $v0, $v0, -0x3AE8
    ctx->pc = 0x20bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952216));
label_20bbb8:
    // 0x20bbb8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x20bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_20bbbc:
    // 0x20bbbc: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20bbc0:
    // 0x20bbc0: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_20bbc4:
    if (ctx->pc == 0x20BBC4u) {
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBC8u;
        goto label_20bbc8;
    }
    ctx->pc = 0x20BBC0u;
    {
        const bool branch_taken_0x20bbc0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC0u;
        // 0x20bbc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbc0) {
            ctx->pc = 0x20BC54u;
            goto label_20bc54;
        }
    }
    ctx->pc = 0x20BBC8u;
label_20bbc8:
    // 0x20bbc8: 0x26b60038  addiu       $s6, $s5, 0x38
    ctx->pc = 0x20bbc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 56));
label_20bbcc:
    // 0x20bbcc: 0x26b40024  addiu       $s4, $s5, 0x24
    ctx->pc = 0x20bbccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
label_20bbd0:
    // 0x20bbd0: 0x2633014c  addiu       $s3, $s1, 0x14C
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
label_20bbd4:
    // 0x20bbd4: 0x0  nop
    ctx->pc = 0x20bbd4u;
    // NOP
label_20bbd8:
    // 0x20bbd8: 0x13c0000d  beqz        $fp, . + 4 + (0xD << 2)
label_20bbdc:
    if (ctx->pc == 0x20BBDCu) {
        ctx->pc = 0x20BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD8u;
        // 0x20bbdc: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBE0u;
        goto label_20bbe0;
    }
    ctx->pc = 0x20BBD8u;
    {
        const bool branch_taken_0x20bbd8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD8u;
        // 0x20bbdc: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbd8) {
            ctx->pc = 0x20BC10u;
            goto label_20bc10;
        }
    }
    ctx->pc = 0x20BBE0u;
label_20bbe0:
    // 0x20bbe0: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_20bbe4:
    // 0x20bbe4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_20bbe8:
    if (ctx->pc == 0x20BBE8u) {
        ctx->pc = 0x20BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBE4u;
        // 0x20bbe8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BBECu;
        goto label_20bbec;
    }
    ctx->pc = 0x20BBE4u;
    {
        const bool branch_taken_0x20bbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bbe4) {
            ctx->pc = 0x20BBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BBE4u;
            // 0x20bbe8: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC3Cu;
            goto label_20bc3c;
        }
    }
    ctx->pc = 0x20BBECu;
label_20bbec:
    // 0x20bbec: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x20bbecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_20bbf0:
    // 0x20bbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bbf4:
    // 0x20bbf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bbf8:
    // 0x20bbf8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20bbfc:
    // 0x20bbfc: 0x24e70038  addiu       $a3, $a3, 0x38
    ctx->pc = 0x20bbfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
label_20bc00:
    // 0x20bc00: 0xc0878be  jal         func_21E2F8
label_20bc04:
    if (ctx->pc == 0x20BC04u) {
        ctx->pc = 0x20BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC00u;
        // 0x20bc04: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC08u;
        goto label_20bc08;
    }
    ctx->pc = 0x20BC00u;
    SET_GPR_U32(ctx, 31, 0x20BC08u);
    ctx->pc = 0x20BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC00u;
    // 0x20bc04: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E2F8u, 0x20BC00u, 0x20BC08u)) {
        return;
    }
    ctx->pc = 0x20BC08u;
label_20bc08:
    // 0x20bc08: 0x1000000c  b           . + 4 + (0xC << 2)
label_20bc0c:
    if (ctx->pc == 0x20BC0Cu) {
        ctx->pc = 0x20BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC08u;
        // 0x20bc0c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC10u;
        goto label_20bc10;
    }
    ctx->pc = 0x20BC08u;
    {
        const bool branch_taken_0x20bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC08u;
        // 0x20bc0c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc08) {
            ctx->pc = 0x20BC3Cu;
            goto label_20bc3c;
        }
    }
    ctx->pc = 0x20BC10u;
label_20bc10:
    // 0x20bc10: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_20bc14:
    // 0x20bc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20bc18:
    // 0x20bc18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20bc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20bc1c:
    // 0x20bc1c: 0x68080  sll         $s0, $a2, 2
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20bc20:
    // 0x20bc20: 0x26070038  addiu       $a3, $s0, 0x38
    ctx->pc = 0x20bc20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_20bc24:
    // 0x20bc24: 0xc0878be  jal         func_21E2F8
label_20bc28:
    if (ctx->pc == 0x20BC28u) {
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC2Cu;
        goto label_20bc2c;
    }
    ctx->pc = 0x20BC24u;
    SET_GPR_U32(ctx, 31, 0x20BC2Cu);
    ctx->pc = 0x20BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BC24u;
    // 0x20bc28: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E2F8u, 0x20BC24u, 0x20BC2Cu)) {
        return;
    }
    ctx->pc = 0x20BC2Cu;
label_20bc2c:
    // 0x20bc2c: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_20bc30:
    // 0x20bc30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20bc34:
    // 0x20bc34: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x20bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_20bc38:
    // 0x20bc38: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x20bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_20bc3c:
    // 0x20bc3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20bc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20bc40:
    // 0x20bc40: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x20bc40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_20bc44:
    // 0x20bc44: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_20bc48:
    // 0x20bc48: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x20bc48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20bc4c:
    // 0x20bc4c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_20bc50:
    if (ctx->pc == 0x20BC50u) {
        ctx->pc = 0x20BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC4Cu;
        // 0x20bc50: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC54u;
        goto label_20bc54;
    }
    ctx->pc = 0x20BC4Cu;
    {
        const bool branch_taken_0x20bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC4Cu;
        // 0x20bc50: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc4c) {
            ctx->pc = 0x20BBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20bbd8;
        }
    }
    ctx->pc = 0x20BC54u;
label_20bc54:
    // 0x20bc54: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x20bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_20bc58:
    // 0x20bc58: 0xfea00010  sd          $zero, 0x10($s5)
    ctx->pc = 0x20bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
label_20bc5c:
    // 0x20bc5c: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x20bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_20bc60:
    // 0x20bc60: 0xaea00020  sw          $zero, 0x20($s5)
    ctx->pc = 0x20bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 0));
label_20bc64:
    // 0x20bc64: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20bc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20bc68:
    // 0x20bc68: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x20bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_20bc6c:
    // 0x20bc6c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20bc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20bc70:
    // 0x20bc70: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x20bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_20bc74:
    // 0x20bc74: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20bc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20bc78:
    // 0x20bc78: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20bc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20bc7c:
    // 0x20bc7c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20bc7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20bc80:
    // 0x20bc80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20bc80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20bc84:
    // 0x20bc84: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20bc84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20bc88:
    // 0x20bc88: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20bc88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20bc8c:
    // 0x20bc8c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20bc8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20bc90:
    // 0x20bc90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20bc94:
    // 0x20bc94: 0x3e00008  jr          $ra
label_20bc98:
    if (ctx->pc == 0x20BC98u) {
        ctx->pc = 0x20BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC94u;
        // 0x20bc98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC9Cu;
        goto label_20bc9c;
    }
    ctx->pc = 0x20BC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC94u;
        // 0x20bc98: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BC9Cu;
label_20bc9c:
    // 0x20bc9c: 0x0  nop
    ctx->pc = 0x20bc9cu;
    // NOP
    ctx->pc = 0x20bca0u;
}
