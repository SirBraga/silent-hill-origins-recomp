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

// Function: sub_00308990
// Address: 0x308990 - 0x308be0
void sub_00308990_0x308990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308990_0x308990");
#endif

    switch (ctx->pc) {
        case 0x308990u: goto label_308990;
        case 0x308994u: goto label_308994;
        case 0x308998u: goto label_308998;
        case 0x30899cu: goto label_30899c;
        case 0x3089a0u: goto label_3089a0;
        case 0x3089a4u: goto label_3089a4;
        case 0x3089a8u: goto label_3089a8;
        case 0x3089acu: goto label_3089ac;
        case 0x3089b0u: goto label_3089b0;
        case 0x3089b4u: goto label_3089b4;
        case 0x3089b8u: goto label_3089b8;
        case 0x3089bcu: goto label_3089bc;
        case 0x3089c0u: goto label_3089c0;
        case 0x3089c4u: goto label_3089c4;
        case 0x3089c8u: goto label_3089c8;
        case 0x3089ccu: goto label_3089cc;
        case 0x3089d0u: goto label_3089d0;
        case 0x3089d4u: goto label_3089d4;
        case 0x3089d8u: goto label_3089d8;
        case 0x3089dcu: goto label_3089dc;
        case 0x3089e0u: goto label_3089e0;
        case 0x3089e4u: goto label_3089e4;
        case 0x3089e8u: goto label_3089e8;
        case 0x3089ecu: goto label_3089ec;
        case 0x3089f0u: goto label_3089f0;
        case 0x3089f4u: goto label_3089f4;
        case 0x3089f8u: goto label_3089f8;
        case 0x3089fcu: goto label_3089fc;
        case 0x308a00u: goto label_308a00;
        case 0x308a04u: goto label_308a04;
        case 0x308a08u: goto label_308a08;
        case 0x308a0cu: goto label_308a0c;
        case 0x308a10u: goto label_308a10;
        case 0x308a14u: goto label_308a14;
        case 0x308a18u: goto label_308a18;
        case 0x308a1cu: goto label_308a1c;
        case 0x308a20u: goto label_308a20;
        case 0x308a24u: goto label_308a24;
        case 0x308a28u: goto label_308a28;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a30u: goto label_308a30;
        case 0x308a34u: goto label_308a34;
        case 0x308a38u: goto label_308a38;
        case 0x308a3cu: goto label_308a3c;
        case 0x308a40u: goto label_308a40;
        case 0x308a44u: goto label_308a44;
        case 0x308a48u: goto label_308a48;
        case 0x308a4cu: goto label_308a4c;
        case 0x308a50u: goto label_308a50;
        case 0x308a54u: goto label_308a54;
        case 0x308a58u: goto label_308a58;
        case 0x308a5cu: goto label_308a5c;
        case 0x308a60u: goto label_308a60;
        case 0x308a64u: goto label_308a64;
        case 0x308a68u: goto label_308a68;
        case 0x308a6cu: goto label_308a6c;
        case 0x308a70u: goto label_308a70;
        case 0x308a74u: goto label_308a74;
        case 0x308a78u: goto label_308a78;
        case 0x308a7cu: goto label_308a7c;
        case 0x308a80u: goto label_308a80;
        case 0x308a84u: goto label_308a84;
        case 0x308a88u: goto label_308a88;
        case 0x308a8cu: goto label_308a8c;
        case 0x308a90u: goto label_308a90;
        case 0x308a94u: goto label_308a94;
        case 0x308a98u: goto label_308a98;
        case 0x308a9cu: goto label_308a9c;
        case 0x308aa0u: goto label_308aa0;
        case 0x308aa4u: goto label_308aa4;
        case 0x308aa8u: goto label_308aa8;
        case 0x308aacu: goto label_308aac;
        case 0x308ab0u: goto label_308ab0;
        case 0x308ab4u: goto label_308ab4;
        case 0x308ab8u: goto label_308ab8;
        case 0x308abcu: goto label_308abc;
        case 0x308ac0u: goto label_308ac0;
        case 0x308ac4u: goto label_308ac4;
        case 0x308ac8u: goto label_308ac8;
        case 0x308accu: goto label_308acc;
        case 0x308ad0u: goto label_308ad0;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ad8u: goto label_308ad8;
        case 0x308adcu: goto label_308adc;
        case 0x308ae0u: goto label_308ae0;
        case 0x308ae4u: goto label_308ae4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308aecu: goto label_308aec;
        case 0x308af0u: goto label_308af0;
        case 0x308af4u: goto label_308af4;
        case 0x308af8u: goto label_308af8;
        case 0x308afcu: goto label_308afc;
        case 0x308b00u: goto label_308b00;
        case 0x308b04u: goto label_308b04;
        case 0x308b08u: goto label_308b08;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b10u: goto label_308b10;
        case 0x308b14u: goto label_308b14;
        case 0x308b18u: goto label_308b18;
        case 0x308b1cu: goto label_308b1c;
        case 0x308b20u: goto label_308b20;
        case 0x308b24u: goto label_308b24;
        case 0x308b28u: goto label_308b28;
        case 0x308b2cu: goto label_308b2c;
        case 0x308b30u: goto label_308b30;
        case 0x308b34u: goto label_308b34;
        case 0x308b38u: goto label_308b38;
        case 0x308b3cu: goto label_308b3c;
        case 0x308b40u: goto label_308b40;
        case 0x308b44u: goto label_308b44;
        case 0x308b48u: goto label_308b48;
        case 0x308b4cu: goto label_308b4c;
        case 0x308b50u: goto label_308b50;
        case 0x308b54u: goto label_308b54;
        case 0x308b58u: goto label_308b58;
        case 0x308b5cu: goto label_308b5c;
        case 0x308b60u: goto label_308b60;
        case 0x308b64u: goto label_308b64;
        case 0x308b68u: goto label_308b68;
        case 0x308b6cu: goto label_308b6c;
        case 0x308b70u: goto label_308b70;
        case 0x308b74u: goto label_308b74;
        case 0x308b78u: goto label_308b78;
        case 0x308b7cu: goto label_308b7c;
        case 0x308b80u: goto label_308b80;
        case 0x308b84u: goto label_308b84;
        case 0x308b88u: goto label_308b88;
        case 0x308b8cu: goto label_308b8c;
        case 0x308b90u: goto label_308b90;
        case 0x308b94u: goto label_308b94;
        case 0x308b98u: goto label_308b98;
        case 0x308b9cu: goto label_308b9c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308ba4u: goto label_308ba4;
        case 0x308ba8u: goto label_308ba8;
        case 0x308bacu: goto label_308bac;
        case 0x308bb0u: goto label_308bb0;
        case 0x308bb4u: goto label_308bb4;
        case 0x308bb8u: goto label_308bb8;
        case 0x308bbcu: goto label_308bbc;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bc4u: goto label_308bc4;
        case 0x308bc8u: goto label_308bc8;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd0u: goto label_308bd0;
        case 0x308bd4u: goto label_308bd4;
        case 0x308bd8u: goto label_308bd8;
        case 0x308bdcu: goto label_308bdc;
        default: break;
    }

    ctx->pc = 0x308990u;

label_308990:
    // 0x308990: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x308990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_308994:
    // 0x308994: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x308994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_308998:
    // 0x308998: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x308998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_30899c:
    // 0x30899c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30899cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3089a0:
    // 0x3089a0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3089a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3089a4:
    // 0x3089a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3089a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3089a8:
    // 0x3089a8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3089a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3089ac:
    // 0x3089ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3089acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3089b0:
    // 0x3089b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3089b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3089b4:
    // 0x3089b4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3089b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3089b8:
    // 0x3089b8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3089b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3089bc:
    // 0x3089bc: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3089bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3089c0:
    // 0x3089c0: 0x12a00077  beqz        $s5, . + 4 + (0x77 << 2)
label_3089c4:
    if (ctx->pc == 0x3089C4u) {
        ctx->pc = 0x3089C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089C0u;
        // 0x3089c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089C8u;
        goto label_3089c8;
    }
    ctx->pc = 0x3089C0u;
    {
        const bool branch_taken_0x3089c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3089C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089C0u;
        // 0x3089c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089c0) {
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x3089C8u;
label_3089c8:
    // 0x3089c8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3089cc:
    // 0x3089cc: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
label_3089d0:
    if (ctx->pc == 0x3089D0u) {
        ctx->pc = 0x3089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089CCu;
        // 0x3089d0: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089D4u;
        goto label_3089d4;
    }
    ctx->pc = 0x3089CCu;
    {
        const bool branch_taken_0x3089cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3089cc) {
            ctx->pc = 0x3089D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3089CCu;
            // 0x3089d0: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B98u;
            goto label_308b98;
        }
    }
    ctx->pc = 0x3089D4u;
label_3089d4:
    // 0x3089d4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3089d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3089d8:
    // 0x3089d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3089dc:
    if (ctx->pc == 0x3089DCu) {
        ctx->pc = 0x3089DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089D8u;
        // 0x3089dc: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089E0u;
        goto label_3089e0;
    }
    ctx->pc = 0x3089D8u;
    {
        const bool branch_taken_0x3089d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3089DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089D8u;
        // 0x3089dc: 0x2a0982d  daddu       $s3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3089d8) {
            ctx->pc = 0x3089F8u;
            goto label_3089f8;
        }
    }
    ctx->pc = 0x3089E0u;
label_3089e0:
    // 0x3089e0: 0xc0a2354  jal         func_288D50
label_3089e4:
    if (ctx->pc == 0x3089E4u) {
        ctx->pc = 0x3089E8u;
        goto label_3089e8;
    }
    ctx->pc = 0x3089E0u;
    SET_GPR_U32(ctx, 31, 0x3089E8u);
    ctx->pc = 0x288D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288D50u, 0x3089E0u, 0x3089E8u)) {
        return;
    }
    ctx->pc = 0x3089E8u;
label_3089e8:
    // 0x3089e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3089e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3089ec:
    // 0x3089ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3089ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3089f0:
    // 0x3089f0: 0xc0a2048  jal         func_288120
label_3089f4:
    if (ctx->pc == 0x3089F4u) {
        ctx->pc = 0x3089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3089F0u;
        // 0x3089f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3089F8u;
        goto label_3089f8;
    }
    ctx->pc = 0x3089F0u;
    SET_GPR_U32(ctx, 31, 0x3089F8u);
    ctx->pc = 0x3089F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3089F0u;
    // 0x3089f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288120u, 0x3089F0u, 0x3089F8u)) {
        return;
    }
    ctx->pc = 0x3089F8u;
label_3089f8:
    // 0x3089f8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3089f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3089fc:
    // 0x3089fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3089fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308a00:
    // 0x308a00: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_308a04:
    if (ctx->pc == 0x308A04u) {
        ctx->pc = 0x308A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A00u;
        // 0x308a04: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A08u;
        goto label_308a08;
    }
    ctx->pc = 0x308A00u;
    {
        const bool branch_taken_0x308a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308a00) {
            ctx->pc = 0x308A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A00u;
            // 0x308a04: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A1Cu;
            goto label_308a1c;
        }
    }
    ctx->pc = 0x308A08u;
label_308a08:
    // 0x308a08: 0xc09292a  jal         func_24A4A8
label_308a0c:
    if (ctx->pc == 0x308A0Cu) {
        ctx->pc = 0x308A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A08u;
        // 0x308a0c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A10u;
        goto label_308a10;
    }
    ctx->pc = 0x308A08u;
    SET_GPR_U32(ctx, 31, 0x308A10u);
    ctx->pc = 0x308A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A08u;
    // 0x308a0c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x308A08u, 0x308A10u)) {
        return;
    }
    ctx->pc = 0x308A10u;
label_308a10:
    // 0x308a10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x308a10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308a14:
    // 0x308a14: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x308a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_308a18:
    // 0x308a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308a1c:
    // 0x308a1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_308a20:
    if (ctx->pc == 0x308A20u) {
        ctx->pc = 0x308A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A1Cu;
        // 0x308a20: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A24u;
        goto label_308a24;
    }
    ctx->pc = 0x308A1Cu;
    {
        const bool branch_taken_0x308a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A1Cu;
        // 0x308a20: 0x2474ffff  addiu       $s4, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a1c) {
            ctx->pc = 0x308A30u;
            goto label_308a30;
        }
    }
    ctx->pc = 0x308A24u;
label_308a24:
    // 0x308a24: 0xc09294c  jal         func_24A530
label_308a28:
    if (ctx->pc == 0x308A28u) {
        ctx->pc = 0x308A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A24u;
        // 0x308a28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A2Cu;
        goto label_308a2c;
    }
    ctx->pc = 0x308A24u;
    SET_GPR_U32(ctx, 31, 0x308A2Cu);
    ctx->pc = 0x308A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A24u;
    // 0x308a28: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x308A24u, 0x308A2Cu)) {
        return;
    }
    ctx->pc = 0x308A2Cu;
label_308a2c:
    // 0x308a2c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x308a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_308a30:
    // 0x308a30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x308a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_308a34:
    // 0x308a34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x308a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_308a38:
    // 0x308a38: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x308a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_308a3c:
    // 0x308a3c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_308a40:
    // 0x308a40: 0x83a00a  movz        $s4, $a0, $v1
    ctx->pc = 0x308a40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4));
label_308a44:
    // 0x308a44: 0x8ee50068  lw          $a1, 0x68($s7)
    ctx->pc = 0x308a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_308a48:
    // 0x308a48: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x308a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_308a4c:
    // 0x308a4c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x308a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_308a50:
    // 0x308a50: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_308a54:
    if (ctx->pc == 0x308A54u) {
        ctx->pc = 0x308A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A50u;
        // 0x308a54: 0x2c2f021  addu        $fp, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A58u;
        goto label_308a58;
    }
    ctx->pc = 0x308A50u;
    {
        const bool branch_taken_0x308a50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A50u;
        // 0x308a54: 0x2c2f021  addu        $fp, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a50) {
            ctx->pc = 0x308AB8u;
            goto label_308ab8;
        }
    }
    ctx->pc = 0x308A58u;
label_308a58:
    // 0x308a58: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x308a58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_308a5c:
    // 0x308a5c: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x308a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_308a60:
    // 0x308a60: 0x26520fc8  addiu       $s2, $s2, 0xFC8
    ctx->pc = 0x308a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_308a64:
    // 0x308a64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x308a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308a68:
    // 0x308a68: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x308a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_308a6c:
    // 0x308a6c: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x308a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_308a70:
    // 0x308a70: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x308a70u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_308a74:
    // 0x308a74: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x308a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_308a78:
    // 0x308a78: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x308a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_308a7c:
    // 0x308a7c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308a80:
    // 0x308a80: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x308a80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_308a84:
    // 0x308a84: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x308a84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_308a88:
    // 0x308a88: 0x40f809  jalr        $v0
label_308a8c:
    if (ctx->pc == 0x308A8Cu) {
        ctx->pc = 0x308A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A88u;
        // 0x308a8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A90u;
        goto label_308a90;
    }
    ctx->pc = 0x308A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308A90u);
        ctx->pc = 0x308A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A88u;
        // 0x308a8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A88u, 0x308A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308A90u;
label_308a90:
    // 0x308a90: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308a94:
    // 0x308a94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x308a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308a98:
    // 0x308a98: 0x40f809  jalr        $v0
label_308a9c:
    if (ctx->pc == 0x308A9Cu) {
        ctx->pc = 0x308A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A98u;
        // 0x308a9c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AA0u;
        goto label_308aa0;
    }
    ctx->pc = 0x308A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308AA0u);
        ctx->pc = 0x308A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A98u;
        // 0x308a9c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A98u, 0x308AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308AA0u;
label_308aa0:
    // 0x308aa0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308aa4:
    // 0x308aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308aa8:
    // 0x308aa8: 0x40f809  jalr        $v0
label_308aac:
    if (ctx->pc == 0x308AACu) {
        ctx->pc = 0x308AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA8u;
        // 0x308aac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AB0u;
        goto label_308ab0;
    }
    ctx->pc = 0x308AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308AB0u);
        ctx->pc = 0x308AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA8u;
        // 0x308aac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AA8u, 0x308AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308AB0u;
label_308ab0:
    // 0x308ab0: 0x10000007  b           . + 4 + (0x7 << 2)
label_308ab4:
    if (ctx->pc == 0x308AB4u) {
        ctx->pc = 0x308AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AB0u;
        // 0x308ab4: 0xc6c10004  lwc1        $f1, 0x4($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AB8u;
        goto label_308ab8;
    }
    ctx->pc = 0x308AB0u;
    {
        const bool branch_taken_0x308ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AB0u;
        // 0x308ab4: 0xc6c10004  lwc1        $f1, 0x4($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ab0) {
            ctx->pc = 0x308AD0u;
            goto label_308ad0;
        }
    }
    ctx->pc = 0x308AB8u;
label_308ab8:
    // 0x308ab8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x308ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_308abc:
    // 0x308abc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308ac0:
    // 0x308ac0: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x308ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_308ac4:
    // 0x308ac4: 0x40f809  jalr        $v0
label_308ac8:
    if (ctx->pc == 0x308AC8u) {
        ctx->pc = 0x308AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC4u;
        // 0x308ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308ACCu;
        goto label_308acc;
    }
    ctx->pc = 0x308AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308ACCu);
        ctx->pc = 0x308AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC4u;
        // 0x308ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AC4u, 0x308ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308ACCu;
label_308acc:
    // 0x308acc: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x308accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308ad0:
    // 0x308ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x308ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308ad4:
    // 0x308ad4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x308ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_308ad8:
    // 0x308ad8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x308ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_308adc:
    // 0x308adc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x308adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_308ae0:
    // 0x308ae0: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x308ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308ae4:
    // 0x308ae4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x308ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_308ae8:
    // 0x308ae8: 0xc0a236a  jal         func_288DA8
label_308aec:
    if (ctx->pc == 0x308AECu) {
        ctx->pc = 0x308AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AE8u;
        // 0x308aec: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AF0u;
        goto label_308af0;
    }
    ctx->pc = 0x308AE8u;
    SET_GPR_U32(ctx, 31, 0x308AF0u);
    ctx->pc = 0x308AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AE8u;
    // 0x308aec: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x288DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288DA8u, 0x308AE8u, 0x308AF0u)) {
        return;
    }
    ctx->pc = 0x308AF0u;
label_308af0:
    // 0x308af0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x308af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_308af4:
    // 0x308af4: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x308af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_308af8:
    // 0x308af8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x308af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_308afc:
    // 0x308afc: 0x261063b0  addiu       $s0, $s0, 0x63B0
    ctx->pc = 0x308afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
label_308b00:
    // 0x308b00: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x308b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308b04:
    // 0x308b04: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x308b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308b08:
    // 0x308b08: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x308b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_308b0c:
    // 0x308b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_308b10:
    // 0x308b10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x308b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_308b14:
    // 0x308b14: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x308b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_308b18:
    // 0x308b18: 0xe604074c  swc1        $f4, 0x74C($s0)
    ctx->pc = 0x308b18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1868), bits); }
label_308b1c:
    // 0x308b1c: 0xe6030750  swc1        $f3, 0x750($s0)
    ctx->pc = 0x308b1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1872), bits); }
label_308b20:
    // 0x308b20: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x308b20u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
label_308b24:
    // 0x308b24: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x308b24u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
label_308b28:
    // 0x308b28: 0xe600075c  swc1        $f0, 0x75C($s0)
    ctx->pc = 0x308b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1884), bits); }
label_308b2c:
    // 0x308b2c: 0xe6010760  swc1        $f1, 0x760($s0)
    ctx->pc = 0x308b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1888), bits); }
label_308b30:
    // 0x308b30: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x308b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308b34:
    // 0x308b34: 0xae170728  sw          $s7, 0x728($s0)
    ctx->pc = 0x308b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1832), GPR_U32(ctx, 23));
label_308b38:
    // 0x308b38: 0xe6000740  swc1        $f0, 0x740($s0)
    ctx->pc = 0x308b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
label_308b3c:
    // 0x308b3c: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x308b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308b40:
    // 0x308b40: 0xe6020744  swc1        $f2, 0x744($s0)
    ctx->pc = 0x308b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1860), bits); }
label_308b44:
    // 0x308b44: 0xc09223e  jal         func_2488F8
label_308b48:
    if (ctx->pc == 0x308B48u) {
        ctx->pc = 0x308B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B44u;
        // 0x308b48: 0xe6010740  swc1        $f1, 0x740($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B4Cu;
        goto label_308b4c;
    }
    ctx->pc = 0x308B44u;
    SET_GPR_U32(ctx, 31, 0x308B4Cu);
    ctx->pc = 0x308B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B44u;
    // 0x308b48: 0xe6010740  swc1        $f1, 0x740($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1856), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2488F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2488F8u, 0x308B44u, 0x308B4Cu)) {
        return;
    }
    ctx->pc = 0x308B4Cu;
label_308b4c:
    // 0x308b4c: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x308b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_308b50:
    // 0x308b50: 0xae160738  sw          $s6, 0x738($s0)
    ctx->pc = 0x308b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 22));
label_308b54:
    // 0x308b54: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x308b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_308b58:
    // 0x308b58: 0xae1e073c  sw          $fp, 0x73C($s0)
    ctx->pc = 0x308b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1852), GPR_U32(ctx, 30));
label_308b5c:
    // 0x308b5c: 0xae030764  sw          $v1, 0x764($s0)
    ctx->pc = 0x308b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1892), GPR_U32(ctx, 3));
label_308b60:
    // 0x308b60: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x308b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_308b64:
    // 0x308b64: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_308b68:
    // 0x308b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308b6c:
    // 0x308b6c: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x308b6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1892)));
label_308b70:
    // 0x308b70: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x308b70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_308b74:
    // 0x308b74: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x308b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_308b78:
    // 0x308b78: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x308b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_308b7c:
    // 0x308b7c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x308b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_308b80:
    // 0x308b80: 0xc09240e  jal         func_249038
label_308b84:
    if (ctx->pc == 0x308B84u) {
        ctx->pc = 0x308B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B80u;
        // 0x308b84: 0x8e0407f0  lw          $a0, 0x7F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2032)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B88u;
        goto label_308b88;
    }
    ctx->pc = 0x308B80u;
    SET_GPR_U32(ctx, 31, 0x308B88u);
    ctx->pc = 0x308B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B80u;
    // 0x308b84: 0x8e0407f0  lw          $a0, 0x7F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2032)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x308B80u, 0x308B88u)) {
        return;
    }
    ctx->pc = 0x308B88u;
label_308b88:
    // 0x308b88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_308b8c:
    if (ctx->pc == 0x308B8Cu) {
        ctx->pc = 0x308B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B88u;
        // 0x308b8c: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B90u;
        goto label_308b90;
    }
    ctx->pc = 0x308B88u;
    {
        const bool branch_taken_0x308b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b88) {
            ctx->pc = 0x308B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B88u;
            // 0x308b8c: 0x8ea40014  lw          $a0, 0x14($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B98u;
            goto label_308b98;
        }
    }
    ctx->pc = 0x308B90u;
label_308b90:
    // 0x308b90: 0x10000004  b           . + 4 + (0x4 << 2)
label_308b94:
    if (ctx->pc == 0x308B94u) {
        ctx->pc = 0x308B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B90u;
        // 0x308b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B98u;
        goto label_308b98;
    }
    ctx->pc = 0x308B90u;
    {
        const bool branch_taken_0x308b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B90u;
        // 0x308b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b90) {
            ctx->pc = 0x308BA4u;
            goto label_308ba4;
        }
    }
    ctx->pc = 0x308B98u;
label_308b98:
    // 0x308b98: 0xc0c2264  jal         func_308990
label_308b9c:
    if (ctx->pc == 0x308B9Cu) {
        ctx->pc = 0x308B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B98u;
        // 0x308b9c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BA0u;
        goto label_308ba0;
    }
    ctx->pc = 0x308B98u;
    SET_GPR_U32(ctx, 31, 0x308BA0u);
    ctx->pc = 0x308B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B98u;
    // 0x308b9c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308990u;
    goto label_308990;
    ctx->pc = 0x308BA0u;
label_308ba0:
    // 0x308ba0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x308ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_308ba4:
    // 0x308ba4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x308ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_308ba8:
    // 0x308ba8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x308ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_308bac:
    // 0x308bac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x308bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_308bb0:
    // 0x308bb0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x308bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_308bb4:
    // 0x308bb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x308bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_308bb8:
    // 0x308bb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x308bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_308bbc:
    // 0x308bbc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x308bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_308bc0:
    // 0x308bc0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x308bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308bc4:
    // 0x308bc4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x308bc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_308bc8:
    // 0x308bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308bcc:
    // 0x308bcc: 0x3e00008  jr          $ra
label_308bd0:
    if (ctx->pc == 0x308BD0u) {
        ctx->pc = 0x308BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BCCu;
        // 0x308bd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BD4u;
        goto label_308bd4;
    }
    ctx->pc = 0x308BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BCCu;
        // 0x308bd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308BD4u;
label_308bd4:
    // 0x308bd4: 0x0  nop
    ctx->pc = 0x308bd4u;
    // NOP
label_308bd8:
    // 0x308bd8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_308bdc:
    // 0x308bdc: 0x0  nop
    ctx->pc = 0x308bdcu;
    // NOP
    ctx->pc = 0x308be0u;
}
