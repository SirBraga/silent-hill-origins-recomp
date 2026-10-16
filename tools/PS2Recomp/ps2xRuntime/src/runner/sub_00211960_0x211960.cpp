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

// Function: sub_00211960
// Address: 0x211960 - 0x211bd0
void sub_00211960_0x211960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211960_0x211960");
#endif

    switch (ctx->pc) {
        case 0x211960u: goto label_211960;
        case 0x211964u: goto label_211964;
        case 0x211968u: goto label_211968;
        case 0x21196cu: goto label_21196c;
        case 0x211970u: goto label_211970;
        case 0x211974u: goto label_211974;
        case 0x211978u: goto label_211978;
        case 0x21197cu: goto label_21197c;
        case 0x211980u: goto label_211980;
        case 0x211984u: goto label_211984;
        case 0x211988u: goto label_211988;
        case 0x21198cu: goto label_21198c;
        case 0x211990u: goto label_211990;
        case 0x211994u: goto label_211994;
        case 0x211998u: goto label_211998;
        case 0x21199cu: goto label_21199c;
        case 0x2119a0u: goto label_2119a0;
        case 0x2119a4u: goto label_2119a4;
        case 0x2119a8u: goto label_2119a8;
        case 0x2119acu: goto label_2119ac;
        case 0x2119b0u: goto label_2119b0;
        case 0x2119b4u: goto label_2119b4;
        case 0x2119b8u: goto label_2119b8;
        case 0x2119bcu: goto label_2119bc;
        case 0x2119c0u: goto label_2119c0;
        case 0x2119c4u: goto label_2119c4;
        case 0x2119c8u: goto label_2119c8;
        case 0x2119ccu: goto label_2119cc;
        case 0x2119d0u: goto label_2119d0;
        case 0x2119d4u: goto label_2119d4;
        case 0x2119d8u: goto label_2119d8;
        case 0x2119dcu: goto label_2119dc;
        case 0x2119e0u: goto label_2119e0;
        case 0x2119e4u: goto label_2119e4;
        case 0x2119e8u: goto label_2119e8;
        case 0x2119ecu: goto label_2119ec;
        case 0x2119f0u: goto label_2119f0;
        case 0x2119f4u: goto label_2119f4;
        case 0x2119f8u: goto label_2119f8;
        case 0x2119fcu: goto label_2119fc;
        case 0x211a00u: goto label_211a00;
        case 0x211a04u: goto label_211a04;
        case 0x211a08u: goto label_211a08;
        case 0x211a0cu: goto label_211a0c;
        case 0x211a10u: goto label_211a10;
        case 0x211a14u: goto label_211a14;
        case 0x211a18u: goto label_211a18;
        case 0x211a1cu: goto label_211a1c;
        case 0x211a20u: goto label_211a20;
        case 0x211a24u: goto label_211a24;
        case 0x211a28u: goto label_211a28;
        case 0x211a2cu: goto label_211a2c;
        case 0x211a30u: goto label_211a30;
        case 0x211a34u: goto label_211a34;
        case 0x211a38u: goto label_211a38;
        case 0x211a3cu: goto label_211a3c;
        case 0x211a40u: goto label_211a40;
        case 0x211a44u: goto label_211a44;
        case 0x211a48u: goto label_211a48;
        case 0x211a4cu: goto label_211a4c;
        case 0x211a50u: goto label_211a50;
        case 0x211a54u: goto label_211a54;
        case 0x211a58u: goto label_211a58;
        case 0x211a5cu: goto label_211a5c;
        case 0x211a60u: goto label_211a60;
        case 0x211a64u: goto label_211a64;
        case 0x211a68u: goto label_211a68;
        case 0x211a6cu: goto label_211a6c;
        case 0x211a70u: goto label_211a70;
        case 0x211a74u: goto label_211a74;
        case 0x211a78u: goto label_211a78;
        case 0x211a7cu: goto label_211a7c;
        case 0x211a80u: goto label_211a80;
        case 0x211a84u: goto label_211a84;
        case 0x211a88u: goto label_211a88;
        case 0x211a8cu: goto label_211a8c;
        case 0x211a90u: goto label_211a90;
        case 0x211a94u: goto label_211a94;
        case 0x211a98u: goto label_211a98;
        case 0x211a9cu: goto label_211a9c;
        case 0x211aa0u: goto label_211aa0;
        case 0x211aa4u: goto label_211aa4;
        case 0x211aa8u: goto label_211aa8;
        case 0x211aacu: goto label_211aac;
        case 0x211ab0u: goto label_211ab0;
        case 0x211ab4u: goto label_211ab4;
        case 0x211ab8u: goto label_211ab8;
        case 0x211abcu: goto label_211abc;
        case 0x211ac0u: goto label_211ac0;
        case 0x211ac4u: goto label_211ac4;
        case 0x211ac8u: goto label_211ac8;
        case 0x211accu: goto label_211acc;
        case 0x211ad0u: goto label_211ad0;
        case 0x211ad4u: goto label_211ad4;
        case 0x211ad8u: goto label_211ad8;
        case 0x211adcu: goto label_211adc;
        case 0x211ae0u: goto label_211ae0;
        case 0x211ae4u: goto label_211ae4;
        case 0x211ae8u: goto label_211ae8;
        case 0x211aecu: goto label_211aec;
        case 0x211af0u: goto label_211af0;
        case 0x211af4u: goto label_211af4;
        case 0x211af8u: goto label_211af8;
        case 0x211afcu: goto label_211afc;
        case 0x211b00u: goto label_211b00;
        case 0x211b04u: goto label_211b04;
        case 0x211b08u: goto label_211b08;
        case 0x211b0cu: goto label_211b0c;
        case 0x211b10u: goto label_211b10;
        case 0x211b14u: goto label_211b14;
        case 0x211b18u: goto label_211b18;
        case 0x211b1cu: goto label_211b1c;
        case 0x211b20u: goto label_211b20;
        case 0x211b24u: goto label_211b24;
        case 0x211b28u: goto label_211b28;
        case 0x211b2cu: goto label_211b2c;
        case 0x211b30u: goto label_211b30;
        case 0x211b34u: goto label_211b34;
        case 0x211b38u: goto label_211b38;
        case 0x211b3cu: goto label_211b3c;
        case 0x211b40u: goto label_211b40;
        case 0x211b44u: goto label_211b44;
        case 0x211b48u: goto label_211b48;
        case 0x211b4cu: goto label_211b4c;
        case 0x211b50u: goto label_211b50;
        case 0x211b54u: goto label_211b54;
        case 0x211b58u: goto label_211b58;
        case 0x211b5cu: goto label_211b5c;
        case 0x211b60u: goto label_211b60;
        case 0x211b64u: goto label_211b64;
        case 0x211b68u: goto label_211b68;
        case 0x211b6cu: goto label_211b6c;
        case 0x211b70u: goto label_211b70;
        case 0x211b74u: goto label_211b74;
        case 0x211b78u: goto label_211b78;
        case 0x211b7cu: goto label_211b7c;
        case 0x211b80u: goto label_211b80;
        case 0x211b84u: goto label_211b84;
        case 0x211b88u: goto label_211b88;
        case 0x211b8cu: goto label_211b8c;
        case 0x211b90u: goto label_211b90;
        case 0x211b94u: goto label_211b94;
        case 0x211b98u: goto label_211b98;
        case 0x211b9cu: goto label_211b9c;
        case 0x211ba0u: goto label_211ba0;
        case 0x211ba4u: goto label_211ba4;
        case 0x211ba8u: goto label_211ba8;
        case 0x211bacu: goto label_211bac;
        case 0x211bb0u: goto label_211bb0;
        case 0x211bb4u: goto label_211bb4;
        case 0x211bb8u: goto label_211bb8;
        case 0x211bbcu: goto label_211bbc;
        case 0x211bc0u: goto label_211bc0;
        case 0x211bc4u: goto label_211bc4;
        case 0x211bc8u: goto label_211bc8;
        case 0x211bccu: goto label_211bcc;
        default: break;
    }

    ctx->pc = 0x211960u;

label_211960:
    // 0x211960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x211960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_211964:
    // 0x211964: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x211964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_211968:
    // 0x211968: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x211968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_21196c:
    // 0x21196c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21196cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_211970:
    // 0x211970: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x211970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_211974:
    // 0x211974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_211978:
    // 0x211978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21197c:
    // 0x21197c: 0x8e1201cc  lw          $s2, 0x1CC($s0)
    ctx->pc = 0x21197cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_211980:
    // 0x211980: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x211980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_211984:
    // 0x211984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_211988:
    if (ctx->pc == 0x211988u) {
        ctx->pc = 0x211988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211984u;
        // 0x211988: 0x8e530018  lw          $s3, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21198Cu;
        goto label_21198c;
    }
    ctx->pc = 0x211984u;
    {
        const bool branch_taken_0x211984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211984u;
        // 0x211988: 0x8e530018  lw          $s3, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211984) {
            ctx->pc = 0x211994u;
            goto label_211994;
        }
    }
    ctx->pc = 0x21198Cu;
label_21198c:
    // 0x21198c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211990:
    // 0x211990: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x211990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_211994:
    // 0x211994: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_211998:
    if (ctx->pc == 0x211998u) {
        ctx->pc = 0x211998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211994u;
        // 0x211998: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21199Cu;
        goto label_21199c;
    }
    ctx->pc = 0x211994u;
    {
        const bool branch_taken_0x211994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x211998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211994u;
        // 0x211998: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211994) {
            ctx->pc = 0x2119BCu;
            goto label_2119bc;
        }
    }
    ctx->pc = 0x21199Cu;
label_21199c:
    // 0x21199c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x21199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_2119a0:
    // 0x2119a0: 0x24421e78  addiu       $v0, $v0, 0x1E78
    ctx->pc = 0x2119a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7800));
label_2119a4:
    // 0x2119a4: 0x24632048  addiu       $v1, $v1, 0x2048
    ctx->pc = 0x2119a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8264));
label_2119a8:
    // 0x2119a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2119a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2119ac:
    // 0x2119ac: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2119acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2119b0:
    // 0x2119b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2119b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_2119b4:
    // 0x2119b4: 0x10000072  b           . + 4 + (0x72 << 2)
label_2119b8:
    if (ctx->pc == 0x2119B8u) {
        ctx->pc = 0x2119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119B4u;
        // 0x2119b8: 0xae44001c  sw          $a0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119BCu;
        goto label_2119bc;
    }
    ctx->pc = 0x2119B4u;
    {
        const bool branch_taken_0x2119b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119B4u;
        // 0x2119b8: 0xae44001c  sw          $a0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119b4) {
            ctx->pc = 0x211B80u;
            goto label_211b80;
        }
    }
    ctx->pc = 0x2119BCu;
label_2119bc:
    // 0x2119bc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2119bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2119c0:
    // 0x2119c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2119c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2119c4:
    // 0x2119c4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2119c8:
    if (ctx->pc == 0x2119C8u) {
        ctx->pc = 0x2119C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119C4u;
        // 0x2119c8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119CCu;
        goto label_2119cc;
    }
    ctx->pc = 0x2119C4u;
    {
        const bool branch_taken_0x2119c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2119c4) {
            ctx->pc = 0x2119C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2119C4u;
            // 0x2119c8: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2119D8u;
            goto label_2119d8;
        }
    }
    ctx->pc = 0x2119CCu;
label_2119cc:
    // 0x2119cc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2119d0:
    // 0x2119d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2119d4:
    if (ctx->pc == 0x2119D4u) {
        ctx->pc = 0x2119D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119D0u;
        // 0x2119d4: 0x244215f0  addiu       $v0, $v0, 0x15F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119D8u;
        goto label_2119d8;
    }
    ctx->pc = 0x2119D0u;
    {
        const bool branch_taken_0x2119d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2119D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119D0u;
        // 0x2119d4: 0x244215f0  addiu       $v0, $v0, 0x15F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119d0) {
            ctx->pc = 0x2119DCu;
            goto label_2119dc;
        }
    }
    ctx->pc = 0x2119D8u;
label_2119d8:
    // 0x2119d8: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
label_2119dc:
    // 0x2119dc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2119dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2119e0:
    // 0x2119e0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x2119e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_2119e4:
    // 0x2119e4: 0x24422168  addiu       $v0, $v0, 0x2168
    ctx->pc = 0x2119e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8552));
label_2119e8:
    // 0x2119e8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2119e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2119ec:
    // 0x2119ec: 0x8e110084  lw          $s1, 0x84($s0)
    ctx->pc = 0x2119ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2119f0:
    // 0x2119f0: 0x1e20000c  bgtz        $s1, . + 4 + (0xC << 2)
label_2119f4:
    if (ctx->pc == 0x2119F4u) {
        ctx->pc = 0x2119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119F0u;
        // 0x2119f4: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2119F8u;
        goto label_2119f8;
    }
    ctx->pc = 0x2119F0u;
    {
        const bool branch_taken_0x2119f0 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x2119F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2119F0u;
        // 0x2119f4: 0x2a220101  slti        $v0, $s1, 0x101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2119f0) {
            ctx->pc = 0x211A24u;
            goto label_211a24;
        }
    }
    ctx->pc = 0x2119F8u;
label_2119f8:
    // 0x2119f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2119f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2119fc:
    // 0x2119fc: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x2119fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_211a00:
    // 0x211a00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211a04:
    // 0x211a04: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x211a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_211a08:
    // 0x211a08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211a0c:
    // 0x211a0c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x211a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_211a10:
    // 0x211a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x211a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211a14:
    // 0x211a14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211a18:
    // 0x211a18: 0x40f809  jalr        $v0
label_211a1c:
    if (ctx->pc == 0x211A1Cu) {
        ctx->pc = 0x211A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A18u;
        // 0x211a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A20u;
        goto label_211a20;
    }
    ctx->pc = 0x211A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211A20u);
        ctx->pc = 0x211A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A18u;
        // 0x211a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A18u, 0x211A20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A20u;
label_211a20:
    // 0x211a20: 0x2a220101  slti        $v0, $s1, 0x101
    ctx->pc = 0x211a20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)257) ? 1 : 0);
label_211a24:
    // 0x211a24: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_211a28:
    if (ctx->pc == 0x211A28u) {
        ctx->pc = 0x211A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A24u;
        // 0x211a28: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A2Cu;
        goto label_211a2c;
    }
    ctx->pc = 0x211A24u;
    {
        const bool branch_taken_0x211a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211a24) {
            ctx->pc = 0x211A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A24u;
            // 0x211a28: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211A58u;
            goto label_211a58;
        }
    }
    ctx->pc = 0x211A2Cu;
label_211a2c:
    // 0x211a2c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x211a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211a30:
    // 0x211a30: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x211a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_211a34:
    // 0x211a34: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x211a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_211a38:
    // 0x211a38: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x211a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_211a3c:
    // 0x211a3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x211a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211a40:
    // 0x211a40: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x211a40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_211a44:
    // 0x211a44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x211a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211a48:
    // 0x211a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211a4c:
    // 0x211a4c: 0x40f809  jalr        $v0
label_211a50:
    if (ctx->pc == 0x211A50u) {
        ctx->pc = 0x211A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A4Cu;
        // 0x211a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A54u;
        goto label_211a54;
    }
    ctx->pc = 0x211A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211A54u);
        ctx->pc = 0x211A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A4Cu;
        // 0x211a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A4Cu, 0x211A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A54u;
label_211a54:
    // 0x211a54: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x211a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_211a58:
    // 0x211a58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x211a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_211a5c:
    // 0x211a5c: 0x54620049  bnel        $v1, $v0, . + 4 + (0x49 << 2)
label_211a60:
    if (ctx->pc == 0x211A60u) {
        ctx->pc = 0x211A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A5Cu;
        // 0x211a60: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A64u;
        goto label_211a64;
    }
    ctx->pc = 0x211A5Cu;
    {
        const bool branch_taken_0x211a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x211a5c) {
            ctx->pc = 0x211A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211A5Cu;
            // 0x211a60: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211B84u;
            goto label_211b84;
        }
    }
    ctx->pc = 0x211A64u;
label_211a64:
    // 0x211a64: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x211a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_211a68:
    // 0x211a68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x211a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_211a6c:
    // 0x211a6c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x211a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_211a70:
    // 0x211a70: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x211a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_211a74:
    // 0x211a74: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_211a78:
    if (ctx->pc == 0x211A78u) {
        ctx->pc = 0x211A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A74u;
        // 0x211a78: 0x438818  mult        $s1, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A7Cu;
        goto label_211a7c;
    }
    ctx->pc = 0x211A74u;
    {
        const bool branch_taken_0x211a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x211A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A74u;
        // 0x211a78: 0x438818  mult        $s1, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a74) {
            ctx->pc = 0x211A9Cu;
            goto label_211a9c;
        }
    }
    ctx->pc = 0x211A7Cu;
label_211a7c:
    // 0x211a7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211a80:
    // 0x211a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211a84:
    // 0x211a84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211a88:
    // 0x211a88: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x211a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_211a8c:
    // 0x211a8c: 0x40f809  jalr        $v0
label_211a90:
    if (ctx->pc == 0x211A90u) {
        ctx->pc = 0x211A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A8Cu;
        // 0x211a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211A94u;
        goto label_211a94;
    }
    ctx->pc = 0x211A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211A94u);
        ctx->pc = 0x211A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A8Cu;
        // 0x211a90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A8Cu, 0x211A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211A94u;
label_211a94:
    // 0x211a94: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x211a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_211a98:
    // 0x211a98: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x211a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_211a9c:
    // 0x211a9c: 0xc08489c  jal         func_212270
label_211aa0:
    if (ctx->pc == 0x211AA0u) {
        ctx->pc = 0x211AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A9Cu;
        // 0x211aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AA4u;
        goto label_211aa4;
    }
    ctx->pc = 0x211A9Cu;
    SET_GPR_U32(ctx, 31, 0x211AA4u);
    ctx->pc = 0x211AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A9Cu;
    // 0x211aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x211A9Cu, 0x211AA4u)) {
        return;
    }
    ctx->pc = 0x211AA4u;
label_211aa4:
    // 0x211aa4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x211aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_211aa8:
    // 0x211aa8: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_211aac:
    if (ctx->pc == 0x211AACu) {
        ctx->pc = 0x211AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AA8u;
        // 0x211aac: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211AB0u;
        goto label_211ab0;
    }
    ctx->pc = 0x211AA8u;
    {
        const bool branch_taken_0x211aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211aa8) {
            ctx->pc = 0x211AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211AA8u;
            // 0x211aac: 0xae400024  sw          $zero, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211B80u;
            goto label_211b80;
        }
    }
    ctx->pc = 0x211AB0u;
label_211ab0:
    // 0x211ab0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x211ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_211ab4:
    // 0x211ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_211ab8:
    // 0x211ab8: 0x8e1001cc  lw          $s0, 0x1CC($s0)
    ctx->pc = 0x211ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
label_211abc:
    // 0x211abc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x211abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_211ac0:
    // 0x211ac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x211ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_211ac4:
    // 0x211ac4: 0x40f809  jalr        $v0
label_211ac8:
    if (ctx->pc == 0x211AC8u) {
        ctx->pc = 0x211AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC4u;
        // 0x211ac8: 0x240607fc  addiu       $a2, $zero, 0x7FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211ACCu;
        goto label_211acc;
    }
    ctx->pc = 0x211AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x211ACCu);
        ctx->pc = 0x211AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211AC4u;
        // 0x211ac8: 0x240607fc  addiu       $a2, $zero, 0x7FC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211AC4u, 0x211ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x211ACCu;
label_211acc:
    // 0x211acc: 0x244803fc  addiu       $t0, $v0, 0x3FC
    ctx->pc = 0x211accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1020));
label_211ad0:
    // 0x211ad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x211ad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_211ad4:
    // 0x211ad4: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x211ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
label_211ad8:
    // 0x211ad8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x211ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_211adc:
    // 0x211adc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x211adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_211ae0:
    // 0x211ae0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x211ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_211ae4:
    // 0x211ae4: 0x0  nop
    ctx->pc = 0x211ae4u;
    // NOP
label_211ae8:
    // 0x211ae8: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x211ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_211aec:
    // 0x211aec: 0x71023  negu        $v0, $a3
    ctx->pc = 0x211aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211af0:
    // 0x211af0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x211af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_211af4:
    // 0x211af4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x211af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_211af8:
    // 0x211af8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x211af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_211afc:
    // 0x211afc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x211afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_211b00:
    // 0x211b00: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
label_211b04:
    if (ctx->pc == 0x211B04u) {
        ctx->pc = 0x211B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B00u;
        // 0x211b04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B08u;
        goto label_211b08;
    }
    ctx->pc = 0x211B00u;
    {
        const bool branch_taken_0x211b00 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x211B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B00u;
        // 0x211b04: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b00) {
            ctx->pc = 0x211AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211ae8;
        }
    }
    ctx->pc = 0x211B08u;
label_211b08:
    // 0x211b08: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x211b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_211b0c:
    // 0x211b0c: 0x2506ffc0  addiu       $a2, $t0, -0x40
    ctx->pc = 0x211b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967232));
label_211b10:
    // 0x211b10: 0x25040040  addiu       $a0, $t0, 0x40
    ctx->pc = 0x211b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_211b14:
    // 0x211b14: 0x0  nop
    ctx->pc = 0x211b14u;
    // NOP
label_211b18:
    // 0x211b18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_211b1c:
    // 0x211b1c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x211b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_211b20:
    // 0x211b20: 0x71023  negu        $v0, $a3
    ctx->pc = 0x211b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211b24:
    // 0x211b24: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x211b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_211b28:
    // 0x211b28: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x211b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_211b2c:
    // 0x211b2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x211b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_211b30:
    // 0x211b30: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x211b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_211b34:
    // 0x211b34: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x211b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_211b38:
    // 0x211b38: 0x28a20030  slti        $v0, $a1, 0x30
    ctx->pc = 0x211b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
label_211b3c:
    // 0x211b3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_211b40:
    if (ctx->pc == 0x211B40u) {
        ctx->pc = 0x211B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B3Cu;
        // 0x211b40: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B44u;
        goto label_211b44;
    }
    ctx->pc = 0x211B3Cu;
    {
        const bool branch_taken_0x211b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B3Cu;
        // 0x211b40: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b3c) {
            ctx->pc = 0x211B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211b18;
        }
    }
    ctx->pc = 0x211B44u;
label_211b44:
    // 0x211b44: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x211b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_211b48:
    // 0x211b48: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_211b4c:
    if (ctx->pc == 0x211B4Cu) {
        ctx->pc = 0x211B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B48u;
        // 0x211b4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B50u;
        goto label_211b50;
    }
    ctx->pc = 0x211B48u;
    {
        const bool branch_taken_0x211b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B48u;
        // 0x211b4c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b48) {
            ctx->pc = 0x211B7Cu;
            goto label_211b7c;
        }
    }
    ctx->pc = 0x211B50u;
label_211b50:
    // 0x211b50: 0x73023  negu        $a2, $a3
    ctx->pc = 0x211b50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_211b54:
    // 0x211b54: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x211b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_211b58:
    // 0x211b58: 0x1021823  subu        $v1, $t0, $v0
    ctx->pc = 0x211b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_211b5c:
    // 0x211b5c: 0x0  nop
    ctx->pc = 0x211b5cu;
    // NOP
label_211b60:
    // 0x211b60: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x211b60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_211b64:
    // 0x211b64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x211b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_211b68:
    // 0x211b68: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x211b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_211b6c:
    // 0x211b6c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x211b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_211b70:
    // 0x211b70: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x211b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_211b74:
    // 0x211b74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_211b78:
    if (ctx->pc == 0x211B78u) {
        ctx->pc = 0x211B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B74u;
        // 0x211b78: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B7Cu;
        goto label_211b7c;
    }
    ctx->pc = 0x211B74u;
    {
        const bool branch_taken_0x211b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B74u;
        // 0x211b78: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b74) {
            ctx->pc = 0x211B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211b60;
        }
    }
    ctx->pc = 0x211B7Cu;
label_211b7c:
    // 0x211b7c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x211b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_211b80:
    // 0x211b80: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x211b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_211b84:
    // 0x211b84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_211b88:
    if (ctx->pc == 0x211B88u) {
        ctx->pc = 0x211B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B84u;
        // 0x211b88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211B8Cu;
        goto label_211b8c;
    }
    ctx->pc = 0x211B84u;
    {
        const bool branch_taken_0x211b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B84u;
        // 0x211b88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211b84) {
            ctx->pc = 0x211BB4u;
            goto label_211bb4;
        }
    }
    ctx->pc = 0x211B8Cu;
label_211b8c:
    // 0x211b8c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_211b90:
    // 0x211b90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x211b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211b94:
    // 0x211b94: 0x0  nop
    ctx->pc = 0x211b94u;
    // NOP
label_211b98:
    // 0x211b98: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x211b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_211b9c:
    // 0x211b9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x211b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_211ba0:
    // 0x211ba0: 0xc08489c  jal         func_212270
label_211ba4:
    if (ctx->pc == 0x211BA4u) {
        ctx->pc = 0x211BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BA0u;
        // 0x211ba4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BA8u;
        goto label_211ba8;
    }
    ctx->pc = 0x211BA0u;
    SET_GPR_U32(ctx, 31, 0x211BA8u);
    ctx->pc = 0x211BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211BA0u;
    // 0x211ba4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212270u, 0x211BA0u, 0x211BA8u)) {
        return;
    }
    ctx->pc = 0x211BA8u;
label_211ba8:
    // 0x211ba8: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
label_211bac:
    if (ctx->pc == 0x211BACu) {
        ctx->pc = 0x211BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BA8u;
        // 0x211bac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BB0u;
        goto label_211bb0;
    }
    ctx->pc = 0x211BA8u;
    {
        const bool branch_taken_0x211ba8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x211ba8) {
            ctx->pc = 0x211BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211BA8u;
            // 0x211bac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x211B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211b98;
        }
    }
    ctx->pc = 0x211BB0u;
label_211bb0:
    // 0x211bb0: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x211bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_211bb4:
    // 0x211bb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x211bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_211bb8:
    // 0x211bb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x211bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_211bbc:
    // 0x211bbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x211bbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_211bc0:
    // 0x211bc0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x211bc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_211bc4:
    // 0x211bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211bc8:
    // 0x211bc8: 0x3e00008  jr          $ra
label_211bcc:
    if (ctx->pc == 0x211BCCu) {
        ctx->pc = 0x211BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BC8u;
        // 0x211bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x211BD0u;
        goto label_fallthrough_0x211bc8;
    }
    ctx->pc = 0x211BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211BC8u;
        // 0x211bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x211bc8:
    ctx->pc = 0x211BD0u;
}
