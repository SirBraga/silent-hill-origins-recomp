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

// Function: sub_00303A88
// Address: 0x303a88 - 0x303c60
void sub_00303A88_0x303a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303A88_0x303a88");
#endif

    switch (ctx->pc) {
        case 0x303ad0u: goto label_303ad0;
        case 0x303ae8u: goto label_303ae8;
        case 0x303af4u: goto label_303af4;
        case 0x303b1cu: goto label_303b1c;
        case 0x303b28u: goto label_303b28;
        case 0x303b60u: goto label_303b60;
        case 0x303b6cu: goto label_303b6c;
        case 0x303bb8u: goto label_303bb8;
        default: break;
    }

    ctx->pc = 0x303a88u;

    // 0x303a88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x303a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x303a8c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x303a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x303a90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x303a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x303a94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x303a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a98: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x303a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x303a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aa0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x303aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x303aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x303aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x303aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x303aac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x303aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ab0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x303ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x303ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ab8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x303ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x303abc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x303abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303ac0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x303ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x303ac4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x303ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303ac8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x303AC8u;
    SET_GPR_U32(ctx, 31, 0x303AD0u);
    ctx->pc = 0x303ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AC8u;
    // 0x303acc: 0x8e90002c  lw          $s0, 0x2C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x303AC8u, 0x303AD0u)) {
        return;
    }
    ctx->pc = 0x303AD0u;
label_303ad0:
    // 0x303ad0: 0x2e030021  sltiu       $v1, $s0, 0x21
    ctx->pc = 0x303ad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x303ad4: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x303AD4u;
    {
        const bool branch_taken_0x303ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ad4) {
            ctx->pc = 0x303AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303AD4u;
            // 0x303ad8: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x303B00u;
            goto label_303b00;
        }
    }
    ctx->pc = 0x303ADCu;
    // 0x303adc: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x303adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x303ae0: 0xc092848  jal         func_24A120
    ctx->pc = 0x303AE0u;
    SET_GPR_U32(ctx, 31, 0x303AE8u);
    ctx->pc = 0x303AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AE0u;
    // 0x303ae4: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x303AE0u, 0x303AE8u)) {
        return;
    }
    ctx->pc = 0x303AE8u;
label_303ae8:
    // 0x303ae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303aec: 0xc09281a  jal         func_24A068
    ctx->pc = 0x303AECu;
    SET_GPR_U32(ctx, 31, 0x303AF4u);
    ctx->pc = 0x303AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303AECu;
    // 0x303af0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303AECu, 0x303AF4u)) {
        return;
    }
    ctx->pc = 0x303AF4u;
label_303af4:
    // 0x303af4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303af8: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x303af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x303afc: 0x0  nop
    ctx->pc = 0x303afcu;
    // NOP
label_303b00:
    // 0x303b00: 0x2c420021  sltiu       $v0, $v0, 0x21
    ctx->pc = 0x303b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x303b04: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x303B04u;
    {
        const bool branch_taken_0x303b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B04u;
        // 0x303b08: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b04) {
            ctx->pc = 0x303B30u;
            goto label_303b30;
        }
    }
    ctx->pc = 0x303B0Cu;
    // 0x303b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303b10: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x303b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303b14: 0xc092848  jal         func_24A120
    ctx->pc = 0x303B14u;
    SET_GPR_U32(ctx, 31, 0x303B1Cu);
    ctx->pc = 0x303B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B14u;
    // 0x303b18: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x303B14u, 0x303B1Cu)) {
        return;
    }
    ctx->pc = 0x303B1Cu;
label_303b1c:
    // 0x303b1c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x303b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x303b20: 0xc09281a  jal         func_24A068
    ctx->pc = 0x303B20u;
    SET_GPR_U32(ctx, 31, 0x303B28u);
    ctx->pc = 0x303B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B20u;
    // 0x303b24: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303B20u, 0x303B28u)) {
        return;
    }
    ctx->pc = 0x303B28u;
label_303b28:
    // 0x303b28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b2c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x303b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_303b30:
    // 0x303b30: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x303b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x303b34: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x303b34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x303b38: 0x24550fc8  addiu       $s5, $v0, 0xFC8
    ctx->pc = 0x303b38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x303b3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x303b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303b40: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x303b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x303b44: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x303b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x303b48: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x303b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303b4c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303B4Cu;
    {
        const bool branch_taken_0x303b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B4Cu;
        // 0x303b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b4c) {
            ctx->pc = 0x303B70u;
            goto label_303b70;
        }
    }
    ctx->pc = 0x303B54u;
    // 0x303b54: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x303b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x303b58: 0xc092848  jal         func_24A120
    ctx->pc = 0x303B58u;
    SET_GPR_U32(ctx, 31, 0x303B60u);
    ctx->pc = 0x303B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B58u;
    // 0x303b5c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x303B58u, 0x303B60u)) {
        return;
    }
    ctx->pc = 0x303B60u;
label_303b60:
    // 0x303b60: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x303b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x303b64: 0xc09281a  jal         func_24A068
    ctx->pc = 0x303B64u;
    SET_GPR_U32(ctx, 31, 0x303B6Cu);
    ctx->pc = 0x303B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303B64u;
    // 0x303b68: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303B64u, 0x303B6Cu)) {
        return;
    }
    ctx->pc = 0x303B6Cu;
label_303b6c:
    // 0x303b6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303b70:
    // 0x303b70: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x303B70u;
    {
        const bool branch_taken_0x303b70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B70u;
        // 0x303b74: 0x8f829120  lw          $v0, -0x6EE0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b70) {
            ctx->pc = 0x303C34u;
            goto label_303c34;
        }
    }
    ctx->pc = 0x303B78u;
    // 0x303b78: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x303b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x303b7c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x303b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x303b80: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x303b84: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x303b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x303b88: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x303b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303b8c: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x303b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x303b90: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x303b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x303b94: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x303b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x303b98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x303b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303b9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x303b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303ba0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x303ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x303ba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303ba8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x303BA8u;
    {
        const bool branch_taken_0x303ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BA8u;
        // 0x303bac: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ba8) {
            ctx->pc = 0x303BD0u;
            goto label_303bd0;
        }
    }
    ctx->pc = 0x303BB0u;
    // 0x303bb0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x303bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x303bb4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x303bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_303bb8:
    // 0x303bb8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x303bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x303bbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x303bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x303bc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x303bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x303bc4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x303bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303bc8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x303BC8u;
    {
        const bool branch_taken_0x303bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BC8u;
        // 0x303bcc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bc8) {
            ctx->pc = 0x303BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303bb8;
        }
    }
    ctx->pc = 0x303BD0u;
label_303bd0:
    // 0x303bd0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x303bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x303bd4: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x303bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x303bd8: 0x26c20fc8  addiu       $v0, $s6, 0xFC8
    ctx->pc = 0x303bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4040));
    // 0x303bdc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x303bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x303be0: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x303be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x303be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x303be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303be8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x303be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x303bec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x303becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x303bf0: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x303bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x303bf4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x303bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x303bf8: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x303bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x303bfc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x303bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x303c00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x303c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x303c04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x303c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x303c08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x303c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x303c0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x303c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x303c10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x303c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x303c14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x303c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x303c18: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x303c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x303c1c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x303c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x303c20: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x303c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x303c24: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x303c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x303c28: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x303c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x303c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x303c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303c30: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x303c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_303c34:
    // 0x303c34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x303c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c38: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x303c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x303c3c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x303c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x303c40: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x303c40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x303c44: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x303c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x303c48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x303c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x303c4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x303c4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x303c50: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x303c50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x303c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x303c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303c58: 0x3e00008  jr          $ra
    ctx->pc = 0x303C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C58u;
        // 0x303c5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303C60u;
}
