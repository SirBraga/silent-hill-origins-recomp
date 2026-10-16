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

// Function: sub_002F7B20
// Address: 0x2f7b20 - 0x2f7cb8
void sub_002F7B20_0x2f7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7B20_0x2f7b20");
#endif

    switch (ctx->pc) {
        case 0x2f7b70u: goto label_2f7b70;
        case 0x2f7ba4u: goto label_2f7ba4;
        case 0x2f7c1cu: goto label_2f7c1c;
        case 0x2f7c3cu: goto label_2f7c3c;
        case 0x2f7c48u: goto label_2f7c48;
        case 0x2f7c58u: goto label_2f7c58;
        case 0x2f7c6cu: goto label_2f7c6c;
        case 0x2f7c7cu: goto label_2f7c7c;
        default: break;
    }

    ctx->pc = 0x2f7b20u;

    // 0x2f7b20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f7b24: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7b28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7b2c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7b30: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2f7b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f7b34: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7b38: 0x247114c8  addiu       $s1, $v1, 0x14C8
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7b3c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f7b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f7b40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f7b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f7b44: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2f7b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f7b48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7b4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f7b4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b50: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7b54: 0x202a021  addu        $s4, $s0, $v0
    ctx->pc = 0x2f7b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f7b58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f7b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f7b5c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f7b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b60: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7b64: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f7b64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b68: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F7B68u;
    SET_GPR_U32(ctx, 31, 0x2F7B70u);
    ctx->pc = 0x2F7B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B68u;
    // 0x2f7b6c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F7B68u, 0x2F7B70u)) {
        return;
    }
    ctx->pc = 0x2F7B70u;
label_2f7b70:
    // 0x2f7b70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7b74: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7B74u;
    {
        const bool branch_taken_0x2f7b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B74u;
        // 0x2f7b78: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b74) {
            ctx->pc = 0x2F7B84u;
            goto label_2f7b84;
        }
    }
    ctx->pc = 0x2F7B7Cu;
    // 0x2f7b7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2F7B7Cu;
    {
        const bool branch_taken_0x2f7b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B7Cu;
        // 0x2f7b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b7c) {
            ctx->pc = 0x2F7C88u;
            goto label_2f7c88;
        }
    }
    ctx->pc = 0x2F7B84u;
label_2f7b84:
    // 0x2f7b84: 0x8c4c0008  lw          $t4, 0x8($v0)
    ctx->pc = 0x2f7b84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7b88: 0x1925818  mult        $t3, $t4, $s2
    ctx->pc = 0x2f7b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f7b8c: 0x2d622001  sltiu       $v0, $t3, 0x2001
    ctx->pc = 0x2f7b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
    // 0x2f7b90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7B90u;
    {
        const bool branch_taken_0x2f7b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B90u;
        // 0x2f7b94: 0x2303021  addu        $a2, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b90) {
            ctx->pc = 0x2F7BACu;
            goto label_2f7bac;
        }
    }
    ctx->pc = 0x2F7B98u;
    // 0x2f7b98: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f7b9c: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F7B9Cu;
    SET_GPR_U32(ctx, 31, 0x2F7BA4u);
    ctx->pc = 0x2F7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B9Cu;
    // 0x2f7ba0: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F7B9Cu, 0x2F7BA4u)) {
        return;
    }
    ctx->pc = 0x2F7BA4u;
label_2f7ba4:
    // 0x2f7ba4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F7BA4u;
    {
        const bool branch_taken_0x2f7ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BA4u;
        // 0x2f7ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ba4) {
            ctx->pc = 0x2F7C88u;
            goto label_2f7c88;
        }
    }
    ctx->pc = 0x2F7BACu;
label_2f7bac:
    // 0x2f7bac: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f7bacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f7bb0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2f7bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bb4: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x2f7bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x2f7bb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f7bb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bc0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f7bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f7bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bc8: 0x8c890020  lw          $t1, 0x20($a0)
    ctx->pc = 0x2f7bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2f7bcc: 0x8caa001c  lw          $t2, 0x1C($a1)
    ctx->pc = 0x2f7bccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2f7bd0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2f7bd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f7bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7bd8: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2f7bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7bdc: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f7bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7be0: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f7be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7be4: 0xae761540  sw          $s6, 0x1540($s3)
    ctx->pc = 0x2f7be4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x721540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721540u, _value); } while (0);
    // 0x2f7be8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2f7be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2f7bec: 0xac4c0008  sw          $t4, 0x8($v0)
    ctx->pc = 0x2f7becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x721548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721548u, _value); } while (0);
    // 0x2f7bf0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2f7bf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x72154Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72154Cu, _value); } while (0);
    // 0x2f7bf4: 0x3c16002f  lui         $s6, 0x2F
    ctx->pc = 0x2f7bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)47 << 16));
    // 0x2f7bf8: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x2f7bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x721550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721550u, _value); } while (0);
    // 0x2f7bfc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f7bfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7c00: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x2f7c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x721554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721554u, _value); } while (0);
    // 0x2f7c04: 0xac4a0018  sw          $t2, 0x18($v0)
    ctx->pc = 0x2f7c04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x721558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721558u, _value); } while (0);
    // 0x2f7c08: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2f7c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x721564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721564u, _value); } while (0);
    // 0x2f7c0c: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x2f7c0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x721544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721544u, _value); } while (0);
    // 0x2f7c10: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2f7c10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72155Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72155Cu, _value); } while (0);
    // 0x2f7c14: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F7C14u;
    SET_GPR_U32(ctx, 31, 0x2F7C1Cu);
    ctx->pc = 0x2F7C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C14u;
    // 0x2f7c18: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F7C14u, 0x2F7C1Cu)) {
        return;
    }
    ctx->pc = 0x2F7C1Cu;
label_2f7c1c:
    // 0x2f7c1c: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f7c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f7c20: 0x24022080  addiu       $v0, $zero, 0x2080
    ctx->pc = 0x2f7c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f7c24: 0x261035c0  addiu       $s0, $s0, 0x35C0
    ctx->pc = 0x2f7c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f7c28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f7c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7C34u;
    SET_GPR_U32(ctx, 31, 0x2F7C3Cu);
    ctx->pc = 0x2F7C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C34u;
    // 0x2f7c38: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7C34u, 0x2F7C3Cu)) {
        return;
    }
    ctx->pc = 0x2F7C3Cu;
label_2f7c3c:
    // 0x2f7c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c40: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F7C40u;
    SET_GPR_U32(ctx, 31, 0x2F7C48u);
    ctx->pc = 0x2F7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C40u;
    // 0x2f7c44: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F7C40u, 0x2F7C48u)) {
        return;
    }
    ctx->pc = 0x2F7C48u;
label_2f7c48:
    // 0x2f7c48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7c4c: 0xae22664c  sw          $v0, 0x664C($s1)
    ctx->pc = 0x2f7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26188), GPR_U32(ctx, 2));
    // 0x2f7c50: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2f7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2f7c54: 0x0  nop
    ctx->pc = 0x2f7c54u;
    // NOP
label_2f7c58:
    // 0x2f7c58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c5c: 0x8e25664c  lw          $a1, 0x664C($s1)
    ctx->pc = 0x2f7c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26188)));
    // 0x2f7c60: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f7c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7c64: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F7C64u;
    SET_GPR_U32(ctx, 31, 0x2F7C6Cu);
    ctx->pc = 0x2F7C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7C64u;
    // 0x2f7c68: 0x26c870e8  addiu       $t0, $s6, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F7C64u, 0x2F7C6Cu)) {
        return;
    }
    ctx->pc = 0x2F7C6Cu;
label_2f7c6c:
    // 0x2f7c6c: 0x5455fffa  bnel        $v0, $s5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7C6Cu;
    {
        const bool branch_taken_0x2f7c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f7c6c) {
            ctx->pc = 0x2F7C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7C6Cu;
            // 0x2f7c70: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c58;
        }
    }
    ctx->pc = 0x2F7C74u;
    // 0x2f7c74: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F7C74u;
    SET_GPR_U32(ctx, 31, 0x2F7C7Cu);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F7C74u, 0x2F7C7Cu)) {
        return;
    }
    ctx->pc = 0x2F7C7Cu;
label_2f7c7c:
    // 0x2f7c7c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7c80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c84: 0x243100b  movn        $v0, $s2, $v1
    ctx->pc = 0x2f7c84u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18));
label_2f7c88:
    // 0x2f7c88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f7c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7c8c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f7c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7c90: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7c94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7c98: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7c9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7ca0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7ca4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CA8u;
        // 0x2f7cac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7CB0u;
    // 0x2f7cb0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2f7cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2f7cb4: 0x0  nop
    ctx->pc = 0x2f7cb4u;
    // NOP
    ctx->pc = 0x2f7cb8u;
}
