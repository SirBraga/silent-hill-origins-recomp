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

// Function: sub_0030A9E8
// Address: 0x30a9e8 - 0x30abd8
void sub_0030A9E8_0x30a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A9E8_0x30a9e8");
#endif

    switch (ctx->pc) {
        case 0x30aa20u: goto label_30aa20;
        case 0x30aa58u: goto label_30aa58;
        case 0x30aa74u: goto label_30aa74;
        case 0x30aa90u: goto label_30aa90;
        case 0x30aab8u: goto label_30aab8;
        case 0x30aadcu: goto label_30aadc;
        case 0x30ab00u: goto label_30ab00;
        case 0x30ab20u: goto label_30ab20;
        case 0x30ab44u: goto label_30ab44;
        case 0x30ab68u: goto label_30ab68;
        default: break;
    }

    ctx->pc = 0x30a9e8u;

    // 0x30a9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30a9ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30a9f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30a9f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30a9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30a9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30aa04: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30aa08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AA0Cu;
    {
        const bool branch_taken_0x30aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA0Cu;
        // 0x30aa10: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa0c) {
            ctx->pc = 0x30AA28u;
            goto label_30aa28;
        }
    }
    ctx->pc = 0x30AA14u;
    // 0x30aa14: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x30aa14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x30aa18: 0xc092782  jal         func_249E08
    ctx->pc = 0x30AA18u;
    SET_GPR_U32(ctx, 31, 0x30AA20u);
    ctx->pc = 0x30AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA18u;
    // 0x30aa1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30AA18u, 0x30AA20u)) {
        return;
    }
    ctx->pc = 0x30AA20u;
label_30aa20:
    // 0x30aa20: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x30AA20u;
    {
        const bool branch_taken_0x30aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA20u;
        // 0x30aa24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa20) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AA28u;
label_30aa28:
    // 0x30aa28: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x30aa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x30aa2c: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x30aa2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x30aa30: 0x9624001e  lhu         $a0, 0x1E($s1)
    ctx->pc = 0x30aa30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x30aa34: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa38: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x30aa38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x30aa3c: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x30aa3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x30aa40: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x30AA40u;
    {
        const bool branch_taken_0x30aa40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA40u;
        // 0x30aa44: 0xa7a40004  sh          $a0, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa40) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AA48u;
    // 0x30aa48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x30aa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30aa50: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AA50u;
    SET_GPR_U32(ctx, 31, 0x30AA58u);
    ctx->pc = 0x30AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA50u;
    // 0x30aa54: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AA50u, 0x30AA58u)) {
        return;
    }
    ctx->pc = 0x30AA58u;
label_30aa58:
    // 0x30aa58: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x30AA58u;
    {
        const bool branch_taken_0x30aa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA58u;
        // 0x30aa5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa58) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AA60u;
    // 0x30aa60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa64: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x30AA64u;
    {
        const bool branch_taken_0x30aa64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA64u;
        // 0x30aa68: 0x37a50002  ori         $a1, $sp, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa64) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AA6Cu;
    // 0x30aa6c: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AA6Cu;
    SET_GPR_U32(ctx, 31, 0x30AA74u);
    ctx->pc = 0x30AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA6Cu;
    // 0x30aa70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AA6Cu, 0x30AA74u)) {
        return;
    }
    ctx->pc = 0x30AA74u;
label_30aa74:
    // 0x30aa74: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x30AA74u;
    {
        const bool branch_taken_0x30aa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA74u;
        // 0x30aa78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa74) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AA7Cu;
    // 0x30aa7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa80: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x30AA80u;
    {
        const bool branch_taken_0x30aa80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA80u;
        // 0x30aa84: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa80) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AA88u;
    // 0x30aa88: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AA88u;
    SET_GPR_U32(ctx, 31, 0x30AA90u);
    ctx->pc = 0x30AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA88u;
    // 0x30aa8c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AA88u, 0x30AA90u)) {
        return;
    }
    ctx->pc = 0x30AA90u;
label_30aa90:
    // 0x30aa90: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x30AA90u;
    {
        const bool branch_taken_0x30aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA90u;
        // 0x30aa94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa90) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AA98u;
    // 0x30aa98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa9c: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x30AA9Cu;
    {
        const bool branch_taken_0x30aa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AA9Cu;
        // 0x30aaa0: 0x97a60000  lhu         $a2, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aa9c) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AAA4u;
    // 0x30aaa4: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x30aaa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30aaa8: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30aaa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30aaac: 0x3012  mflo        $a2
    ctx->pc = 0x30aaacu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30aab0: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30AAB0u;
    SET_GPR_U32(ctx, 31, 0x30AAB8u);
    ctx->pc = 0x30AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAB0u;
    // 0x30aab4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30AAB0u, 0x30AAB8u)) {
        return;
    }
    ctx->pc = 0x30AAB8u;
label_30aab8:
    // 0x30aab8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x30AAB8u;
    {
        const bool branch_taken_0x30aab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAB8u;
        // 0x30aabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aab8) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AAC0u;
    // 0x30aac0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aac4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30AAC4u;
    {
        const bool branch_taken_0x30aac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAC4u;
        // 0x30aac8: 0x97a60004  lhu         $a2, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aac4) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AACCu;
    // 0x30aacc: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30aaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30aad0: 0x3012  mflo        $a2
    ctx->pc = 0x30aad0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30aad4: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30AAD4u;
    SET_GPR_U32(ctx, 31, 0x30AADCu);
    ctx->pc = 0x30AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAD4u;
    // 0x30aad8: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30AAD4u, 0x30AADCu)) {
        return;
    }
    ctx->pc = 0x30AADCu;
label_30aadc:
    // 0x30aadc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x30AADCu;
    {
        const bool branch_taken_0x30aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AADCu;
        // 0x30aae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aadc) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AAE4u;
    // 0x30aae4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aae8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x30AAE8u;
    {
        const bool branch_taken_0x30aae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAE8u;
        // 0x30aaec: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30aae8) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AAF0u;
    // 0x30aaf0: 0xd20018  mult        $zero, $a2, $s2
    ctx->pc = 0x30aaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30aaf4: 0x3012  mflo        $a2
    ctx->pc = 0x30aaf4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30aaf8: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AAF8u;
    SET_GPR_U32(ctx, 31, 0x30AB00u);
    ctx->pc = 0x30AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAF8u;
    // 0x30aafc: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AAF8u, 0x30AB00u)) {
        return;
    }
    ctx->pc = 0x30AB00u;
label_30ab00:
    // 0x30ab00: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x30AB00u;
    {
        const bool branch_taken_0x30ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB00u;
        // 0x30ab04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab00) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AB08u;
    // 0x30ab08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ab0c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30AB0Cu;
    {
        const bool branch_taken_0x30ab0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB0Cu;
        // 0x30ab10: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab0c) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AB14u;
    // 0x30ab14: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x30ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x30ab18: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AB18u;
    SET_GPR_U32(ctx, 31, 0x30AB20u);
    ctx->pc = 0x30AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB18u;
    // 0x30ab1c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AB18u, 0x30AB20u)) {
        return;
    }
    ctx->pc = 0x30AB20u;
label_30ab20:
    // 0x30ab20: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30AB20u;
    {
        const bool branch_taken_0x30ab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB20u;
        // 0x30ab24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab20) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AB28u;
    // 0x30ab28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ab2c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30AB2Cu;
    {
        const bool branch_taken_0x30ab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB2Cu;
        // 0x30ab30: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab2c) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AB34u;
    // 0x30ab34: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x30ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30ab38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30ab3c: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AB3Cu;
    SET_GPR_U32(ctx, 31, 0x30AB44u);
    ctx->pc = 0x30AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB3Cu;
    // 0x30ab40: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AB3Cu, 0x30AB44u)) {
        return;
    }
    ctx->pc = 0x30AB44u;
label_30ab44:
    // 0x30ab44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x30AB44u;
    {
        const bool branch_taken_0x30ab44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB44u;
        // 0x30ab48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab44) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AB4Cu;
    // 0x30ab4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ab50: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30AB50u;
    {
        const bool branch_taken_0x30ab50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB50u;
        // 0x30ab54: 0x97a60002  lhu         $a2, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab50) {
            ctx->pc = 0x30AB70u;
            goto label_30ab70;
        }
    }
    ctx->pc = 0x30AB58u;
    // 0x30ab58: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x30ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x30ab5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30ab60: 0xc09278c  jal         func_249E30
    ctx->pc = 0x30AB60u;
    SET_GPR_U32(ctx, 31, 0x30AB68u);
    ctx->pc = 0x30AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB60u;
    // 0x30ab64: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E30u, 0x30AB60u, 0x30AB68u)) {
        return;
    }
    ctx->pc = 0x30AB68u;
label_30ab68:
    // 0x30ab68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30AB68u;
    {
        const bool branch_taken_0x30ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB68u;
        // 0x30ab6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab68) {
            ctx->pc = 0x30ABC0u;
            goto label_30abc0;
        }
    }
    ctx->pc = 0x30AB70u;
label_30ab70:
    // 0x30ab70: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30AB70u;
    {
        const bool branch_taken_0x30ab70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB70u;
        // 0x30ab74: 0x97a50002  lhu         $a1, 0x2($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ab70) {
            ctx->pc = 0x30ABBCu;
            goto label_30abbc;
        }
    }
    ctx->pc = 0x30AB78u;
    // 0x30ab78: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x30ab78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30ab7c: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x30ab7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ab80: 0x97a70004  lhu         $a3, 0x4($sp)
    ctx->pc = 0x30ab80u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30ab84: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x30ab84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x30ab88: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30ab8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ab90: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x30ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x30ab94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30ab98: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x30ab98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30ab9c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x30ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x30aba0: 0x24c60006  addiu       $a2, $a2, 0x6
    ctx->pc = 0x30aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x30aba4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30aba8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x30aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x30abac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30abacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30abb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30abb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30abb8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x30abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_30abbc:
    // 0x30abbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30abc0:
    // 0x30abc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30abc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30abc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30abc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30abc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30abc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30abcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30abccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30abd0: 0x3e00008  jr          $ra
    ctx->pc = 0x30ABD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABD0u;
        // 0x30abd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ABD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ABD8u;
}
