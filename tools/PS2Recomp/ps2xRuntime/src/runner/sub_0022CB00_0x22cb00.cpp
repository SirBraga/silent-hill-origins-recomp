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

// Function: sub_0022CB00
// Address: 0x22cb00 - 0x22cdd0
void sub_0022CB00_0x22cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB00_0x22cb00");
#endif

    switch (ctx->pc) {
        case 0x22cb48u: goto label_22cb48;
        case 0x22cb58u: goto label_22cb58;
        case 0x22cb68u: goto label_22cb68;
        case 0x22cb98u: goto label_22cb98;
        case 0x22cbc4u: goto label_22cbc4;
        case 0x22cc20u: goto label_22cc20;
        case 0x22cc48u: goto label_22cc48;
        case 0x22cc58u: goto label_22cc58;
        case 0x22ccc0u: goto label_22ccc0;
        case 0x22ccd4u: goto label_22ccd4;
        case 0x22ccecu: goto label_22ccec;
        case 0x22cd60u: goto label_22cd60;
        case 0x22cd74u: goto label_22cd74;
        case 0x22cd84u: goto label_22cd84;
        default: break;
    }

    ctx->pc = 0x22cb00u;

    // 0x22cb00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x22cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x22cb04: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x22cb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x22cb08: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x22cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x22cb0c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22cb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb10: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22cb14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb1c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x22cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x22cb20: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x22cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x22cb24: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x22cb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x22cb28: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x22cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x22cb2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x22cb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x22cb30: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x22cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x22cb34: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x22cb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x22cb38: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x22cb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x22cb3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22cb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22cb40: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x22CB40u;
    SET_GPR_U32(ctx, 31, 0x22CB48u);
    ctx->pc = 0x22CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB40u;
    // 0x22cb44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x22CB40u, 0x22CB48u)) {
        return;
    }
    ctx->pc = 0x22CB48u;
label_22cb48:
    // 0x22cb48: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x22cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cb4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22cb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cb50: 0xc08b216  jal         func_22C858
    ctx->pc = 0x22CB50u;
    SET_GPR_U32(ctx, 31, 0x22CB58u);
    ctx->pc = 0x22CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB50u;
    // 0x22cb54: 0x8f8683f8  lw          $a2, -0x7C08($gp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C858u, 0x22CB50u, 0x22CB58u)) {
        return;
    }
    ctx->pc = 0x22CB58u;
label_22cb58:
    // 0x22cb58: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x22cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22cb5c: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CB5Cu;
    {
        const bool branch_taken_0x22cb5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x22CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB5Cu;
        // 0x22cb60: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb5c) {
            ctx->pc = 0x22CB84u;
            goto label_22cb84;
        }
    }
    ctx->pc = 0x22CB64u;
    // 0x22cb64: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x22cb64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_22cb68:
    // 0x22cb68: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x22cb68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cb6c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22cb70: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x22cb70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cb74: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x22cb74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cb78: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x22cb78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22cb7c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22CB7Cu;
    {
        const bool branch_taken_0x22cb7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CB7Cu;
        // 0x22cb80: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cb7c) {
            ctx->pc = 0x22CB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cb68;
        }
    }
    ctx->pc = 0x22CB84u;
label_22cb84:
    // 0x22cb84: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22cb88: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x22cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cb8c: 0x8f8583f8  lw          $a1, -0x7C08($gp)
    ctx->pc = 0x22cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cb90: 0xc08b264  jal         func_22C990
    ctx->pc = 0x22CB90u;
    SET_GPR_U32(ctx, 31, 0x22CB98u);
    ctx->pc = 0x22CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CB90u;
    // 0x22cb94: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C990u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C990u, 0x22CB90u, 0x22CB98u)) {
        return;
    }
    ctx->pc = 0x22CB98u;
label_22cb98:
    // 0x22cb98: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22cb9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22cb9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cba0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x22cba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22cba4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22CBA4u;
    {
        const bool branch_taken_0x22cba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22cba4) {
            ctx->pc = 0x22CBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CBA4u;
            // 0x22cba8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CBCCu;
            goto label_22cbcc;
        }
    }
    ctx->pc = 0x22CBACu;
    // 0x22cbac: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cbb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22cbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbb4: 0x8f8783f8  lw          $a3, -0x7C08($gp)
    ctx->pc = 0x22cbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cbb8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cbbc: 0xc08b284  jal         func_22CA10
    ctx->pc = 0x22CBBCu;
    SET_GPR_U32(ctx, 31, 0x22CBC4u);
    ctx->pc = 0x22CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CBBCu;
    // 0x22cbc0: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CA10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CA10u, 0x22CBBCu, 0x22CBC4u)) {
        return;
    }
    ctx->pc = 0x22CBC4u;
label_22cbc4:
    // 0x22cbc4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x22CBC4u;
    {
        const bool branch_taken_0x22cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CBC4u;
        // 0x22cbc8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cbc4) {
            ctx->pc = 0x22CD9Cu;
            goto label_22cd9c;
        }
    }
    ctx->pc = 0x22CBCCu;
label_22cbcc:
    // 0x22cbcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22cbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cbd0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x22cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x22cbd4: 0x26442400  addiu       $a0, $s2, 0x2400
    ctx->pc = 0x22cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9216));
    // 0x22cbd8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x22cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x22cbdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22cbdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbe0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x22cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x22cbe4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x22cbe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22cbe8: 0x8e454000  lw          $a1, 0x4000($s2)
    ctx->pc = 0x22cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cbec: 0x8f8283f8  lw          $v0, -0x7C08($gp)
    ctx->pc = 0x22cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cbf0: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x22cbf4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x22cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x22cbf8: 0x8f8383f8  lw          $v1, -0x7C08($gp)
    ctx->pc = 0x22cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cbfc: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x22cc00: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x22cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x22cc04: 0x8f8283f8  lw          $v0, -0x7C08($gp)
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cc08: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x22cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x22cc0c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x22cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x22cc10: 0x8f8383f8  lw          $v1, -0x7C08($gp)
    ctx->pc = 0x22cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22cc14: 0x673804  sllv        $a3, $a3, $v1
    ctx->pc = 0x22cc14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x22cc18: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22CC18u;
    SET_GPR_U32(ctx, 31, 0x22CC20u);
    ctx->pc = 0x22CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CC18u;
    // 0x22cc1c: 0xae47001c  sw          $a3, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C4E0u, 0x22CC18u, 0x22CC20u)) {
        return;
    }
    ctx->pc = 0x22CC20u;
label_22cc20:
    // 0x22cc20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x22cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22cc24: 0xc6402414  lwc1        $f0, 0x2414($s2)
    ctx->pc = 0x22cc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 9236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc28: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x22cc28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22cc2c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x22CC2Cu;
    {
        const bool branch_taken_0x22cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC2Cu;
        // 0x22cc30: 0xe6402000  swc1        $f0, 0x2000($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc2c) {
            ctx->pc = 0x22CD44u;
            goto label_22cd44;
        }
    }
    ctx->pc = 0x22CC34u;
    // 0x22cc34: 0x26442414  addiu       $a0, $s2, 0x2414
    ctx->pc = 0x22cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 9236));
    // 0x22cc38: 0x265e2000  addiu       $fp, $s2, 0x2000
    ctx->pc = 0x22cc38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 8192));
    // 0x22cc3c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x22cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x22cc40: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc44: 0x0  nop
    ctx->pc = 0x22cc44u;
    // NOP
label_22cc48:
    // 0x22cc48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x22cc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22cc4c: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x22CC4Cu;
    {
        const bool branch_taken_0x22cc4c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x22CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC4Cu;
        // 0x22cc50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc4c) {
            ctx->pc = 0x22CC84u;
            goto label_22cc84;
        }
    }
    ctx->pc = 0x22CC54u;
    // 0x22cc54: 0x26442000  addiu       $a0, $s2, 0x2000
    ctx->pc = 0x22cc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8192));
label_22cc58:
    // 0x22cc58: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x22cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cc5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22cc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22cc60: 0x0  nop
    ctx->pc = 0x22cc60u;
    // NOP
    // 0x22cc64: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x22CC64u;
    {
        const bool branch_taken_0x22cc64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22cc64) {
            ctx->pc = 0x22CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22CC64u;
            // 0x22cc68: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CC78u;
            goto label_22cc78;
        }
    }
    ctx->pc = 0x22CC6Cu;
    // 0x22cc6c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x22cc6cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x22cc70: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x22cc70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22cc78:
    // 0x22cc78: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x22cc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22cc7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22CC7Cu;
    {
        const bool branch_taken_0x22cc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC7Cu;
        // 0x22cc80: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc7c) {
            ctx->pc = 0x22CC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cc58;
        }
    }
    ctx->pc = 0x22CC84u;
label_22cc84:
    // 0x22cc84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc88: 0x12a2002e  beq         $s5, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x22CC88u;
    {
        const bool branch_taken_0x22cc88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x22CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CC88u;
        // 0x22cc8c: 0x2417001c  addiu       $s7, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cc88) {
            ctx->pc = 0x22CD44u;
            goto label_22cd44;
        }
    }
    ctx->pc = 0x22CC90u;
    // 0x22cc90: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x22cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x22cc94: 0x2b7b018  mult        $s6, $s5, $s7
    ctx->pc = 0x22cc94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x22cc98: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x22cc98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22cc9c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x22cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x22cca0: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cca4: 0x243a021  addu        $s4, $s2, $v1
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x22cca8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22cca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22ccacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ccb0: 0x26c22400  addiu       $v0, $s6, 0x2400
    ctx->pc = 0x22ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9216));
    // 0x22ccb4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22ccb8: 0xc08b1b8  jal         func_22C6E0
    ctx->pc = 0x22CCB8u;
    SET_GPR_U32(ctx, 31, 0x22CCC0u);
    ctx->pc = 0x22CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCB8u;
    // 0x22ccbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C6E0u, 0x22CCB8u, 0x22CCC0u)) {
        return;
    }
    ctx->pc = 0x22CCC0u;
label_22ccc0:
    // 0x22ccc0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x22CCC0u;
    {
        const bool branch_taken_0x22ccc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CCC0u;
        // 0x22ccc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ccc0) {
            ctx->pc = 0x22CD20u;
            goto label_22cd20;
        }
    }
    ctx->pc = 0x22CCC8u;
    // 0x22ccc8: 0x8e454000  lw          $a1, 0x4000($s2)
    ctx->pc = 0x22ccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cccc: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22CCCCu;
    SET_GPR_U32(ctx, 31, 0x22CCD4u);
    ctx->pc = 0x22CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCCCu;
    // 0x22ccd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C4E0u, 0x22CCCCu, 0x22CCD4u)) {
        return;
    }
    ctx->pc = 0x22CCD4u;
label_22ccd4:
    // 0x22ccd4: 0x2378018  mult        $s0, $s1, $s7
    ctx->pc = 0x22ccd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x22ccd8: 0x8e454000  lw          $a1, 0x4000($s2)
    ctx->pc = 0x22ccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22ccdc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22ccdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cce0: 0x26042400  addiu       $a0, $s0, 0x2400
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9216));
    // 0x22cce4: 0xc08b138  jal         func_22C4E0
    ctx->pc = 0x22CCE4u;
    SET_GPR_U32(ctx, 31, 0x22CCECu);
    ctx->pc = 0x22CCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CCE4u;
    // 0x22cce8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C4E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C4E0u, 0x22CCE4u, 0x22CCECu)) {
        return;
    }
    ctx->pc = 0x22CCECu;
label_22ccec:
    // 0x22ccec: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x22ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22ccf0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x22ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x22ccf4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22ccf8: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x22ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x22ccfc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x22ccfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cd00: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x22cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x22cd04: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x22cd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x22cd08: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x22cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x22cd0c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x22cd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x22cd10: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x22cd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x22cd14: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x22cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22cd18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CD18u;
    {
        const bool branch_taken_0x22cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD18u;
        // 0x22cd1c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd18) {
            ctx->pc = 0x22CD30u;
            goto label_22cd30;
        }
    }
    ctx->pc = 0x22CD20u;
label_22cd20:
    // 0x22cd20: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x22cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x22cd24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22cd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22cd28: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x22cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x22cd2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_22cd30:
    // 0x22cd30: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22cd34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22cd34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22cd38: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x22cd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22cd3c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x22CD3Cu;
    {
        const bool branch_taken_0x22cd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD3Cu;
        // 0x22cd40: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd3c) {
            ctx->pc = 0x22CC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cc48;
        }
    }
    ctx->pc = 0x22CD44u;
label_22cd44:
    // 0x22cd44: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22cd48: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22CD48u;
    {
        const bool branch_taken_0x22cd48 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x22CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD48u;
        // 0x22cd4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd48) {
            ctx->pc = 0x22CD98u;
            goto label_22cd98;
        }
    }
    ctx->pc = 0x22CD50u;
    // 0x22cd50: 0x8fb40010  lw          $s4, 0x10($sp)
    ctx->pc = 0x22cd50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cd54: 0x26532400  addiu       $s3, $s2, 0x2400
    ctx->pc = 0x22cd54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 9216));
    // 0x22cd58: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x22cd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd5c: 0x0  nop
    ctx->pc = 0x22cd5cu;
    // NOP
label_22cd60:
    // 0x22cd60: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x22cd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22cd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22cd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd6c: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x22CD6Cu;
    SET_GPR_U32(ctx, 31, 0x22CD74u);
    ctx->pc = 0x22CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD6Cu;
    // 0x22cd70: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22C270u, 0x22CD6Cu, 0x22CD74u)) {
        return;
    }
    ctx->pc = 0x22CD74u;
label_22cd74:
    // 0x22cd74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22cd74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22cd78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22cd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd7c: 0xc08af0e  jal         func_22BC38
    ctx->pc = 0x22CD7Cu;
    SET_GPR_U32(ctx, 31, 0x22CD84u);
    ctx->pc = 0x22CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CD7Cu;
    // 0x22cd80: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BC38u, 0x22CD7Cu, 0x22CD84u)) {
        return;
    }
    ctx->pc = 0x22CD84u;
label_22cd84:
    // 0x22cd84: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x22cd84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x22cd88: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x22cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x22cd8c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x22cd8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22cd90: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22CD90u;
    {
        const bool branch_taken_0x22cd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CD90u;
        // 0x22cd94: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22cd90) {
            ctx->pc = 0x22CD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd60;
        }
    }
    ctx->pc = 0x22CD98u;
label_22cd98:
    // 0x22cd98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x22cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_22cd9c:
    // 0x22cd9c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x22cd9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22cda0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x22cda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22cda4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x22cda4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22cda8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x22cda8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cdac: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x22cdacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22cdb0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22cdb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22cdb4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x22cdb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22cdb8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x22cdb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cdbc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x22cdbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cdc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22cdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CDC4u;
        // 0x22cdc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CDCCu;
    // 0x22cdcc: 0x0  nop
    ctx->pc = 0x22cdccu;
    // NOP
    ctx->pc = 0x22cdd0u;
}
