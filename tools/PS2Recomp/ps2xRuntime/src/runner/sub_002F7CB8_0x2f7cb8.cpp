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

// Function: sub_002F7CB8
// Address: 0x2f7cb8 - 0x2f7de8
void sub_002F7CB8_0x2f7cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7CB8_0x2f7cb8");
#endif

    switch (ctx->pc) {
        case 0x2f7cfcu: goto label_2f7cfc;
        case 0x2f7d80u: goto label_2f7d80;
        case 0x2f7d8cu: goto label_2f7d8c;
        case 0x2f7d98u: goto label_2f7d98;
        case 0x2f7dacu: goto label_2f7dac;
        case 0x2f7dbcu: goto label_2f7dbc;
        default: break;
    }

    ctx->pc = 0x2f7cb8u;

    // 0x2f7cb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f7cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f7cbc: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7cc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7cc4: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7cc8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2f7cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f7ccc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7cd0: 0x247114c8  addiu       $s1, $v1, 0x14C8
    ctx->pc = 0x2f7cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7cd4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7cd8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7cdc: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2f7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f7ce0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f7ce4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f7ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ce8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f7ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f7cec: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2f7cecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f7cf0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7cf4: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F7CF4u;
    SET_GPR_U32(ctx, 31, 0x2F7CFCu);
    ctx->pc = 0x2F7CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CF4u;
    // 0x2f7cf8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F7CF4u, 0x2F7CFCu)) {
        return;
    }
    ctx->pc = 0x2F7CFCu;
label_2f7cfc:
    // 0x2f7cfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7d00: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7D00u;
    {
        const bool branch_taken_0x2f7d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F7D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D00u;
        // 0x2f7d04: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d00) {
            ctx->pc = 0x2F7D10u;
            goto label_2f7d10;
        }
    }
    ctx->pc = 0x2F7D08u;
    // 0x2f7d08: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2F7D08u;
    {
        const bool branch_taken_0x2f7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D08u;
        // 0x2f7d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d08) {
            ctx->pc = 0x2F7DC4u;
            goto label_2f7dc4;
        }
    }
    ctx->pc = 0x2F7D10u;
label_2f7d10:
    // 0x2f7d10: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f7d10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f7d14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f7d14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d18: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x2f7d18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f7d1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f7d1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d20: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2f7d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7d24: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x2f7d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f7d28: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d30: 0xac540020  sw          $s4, 0x20($v0)
    ctx->pc = 0x2f7d30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x721560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721560u, _value); } while (0);
    // 0x2f7d34: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2f7d34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x721548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721548u, _value); } while (0);
    // 0x2f7d38: 0x24072080  addiu       $a3, $zero, 0x2080
    ctx->pc = 0x2f7d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f7d3c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2f7d3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x721544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721544u, _value); } while (0);
    // 0x2f7d40: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f7d40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f7d44: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x2f7d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x72154Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72154Cu, _value); } while (0);
    // 0x2f7d48: 0x261035c0  addiu       $s0, $s0, 0x35C0
    ctx->pc = 0x2f7d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f7d4c: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x2f7d4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x721550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721550u, _value); } while (0);
    // 0x2f7d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d54: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2f7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2f7d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d5c: 0xae601540  sw          $zero, 0x1540($s3)
    ctx->pc = 0x2f7d5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721540u, _value); } while (0);
    // 0x2f7d60: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f7d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f7d64: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f7d64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721554u, _value); } while (0);
    // 0x2f7d68: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x2f7d68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x2f7d6c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f7d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721558u, _value); } while (0);
    // 0x2f7d70: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x2f7d70u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    // 0x2f7d74: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2f7d74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72155Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72155Cu, _value); } while (0);
    // 0x2f7d78: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7D78u;
    SET_GPR_U32(ctx, 31, 0x2F7D80u);
    ctx->pc = 0x2F7D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D78u;
    // 0x2f7d7c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7D78u, 0x2F7D80u)) {
        return;
    }
    ctx->pc = 0x2F7D80u;
label_2f7d80:
    // 0x2f7d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d84: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F7D84u;
    SET_GPR_U32(ctx, 31, 0x2F7D8Cu);
    ctx->pc = 0x2F7D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D84u;
    // 0x2f7d88: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F7D84u, 0x2F7D8Cu)) {
        return;
    }
    ctx->pc = 0x2F7D8Cu;
label_2f7d8c:
    // 0x2f7d8c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2f7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f7d90: 0xae22664c  sw          $v0, 0x664C($s1)
    ctx->pc = 0x2f7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26188), GPR_U32(ctx, 2));
    // 0x2f7d94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f7d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f7d98:
    // 0x2f7d98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d9c: 0x8e25664c  lw          $a1, 0x664C($s1)
    ctx->pc = 0x2f7d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26188)));
    // 0x2f7da0: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f7da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7da4: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F7DA4u;
    SET_GPR_U32(ctx, 31, 0x2F7DACu);
    ctx->pc = 0x2F7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7DA4u;
    // 0x2f7da8: 0x26a870e8  addiu       $t0, $s5, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F7DA4u, 0x2F7DACu)) {
        return;
    }
    ctx->pc = 0x2F7DACu;
label_2f7dac:
    // 0x2f7dac: 0x5454fffa  bnel        $v0, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7DACu;
    {
        const bool branch_taken_0x2f7dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2f7dac) {
            ctx->pc = 0x2F7DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7DACu;
            // 0x2f7db0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7d98;
        }
    }
    ctx->pc = 0x2F7DB4u;
    // 0x2f7db4: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F7DB4u;
    SET_GPR_U32(ctx, 31, 0x2F7DBCu);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F7DB4u, 0x2F7DBCu)) {
        return;
    }
    ctx->pc = 0x2F7DBCu;
label_2f7dbc:
    // 0x2f7dbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7dc0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f7dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f7dc4:
    // 0x2f7dc4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f7dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7dc8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7dc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7dcc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7dd0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7dd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7dd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7dd8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7ddc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7de0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7DE0u;
        // 0x2f7de4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7DE8u;
}
