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

// Function: sub_002F7968
// Address: 0x2f7968 - 0x2f7b00
void sub_002F7968_0x2f7968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7968_0x2f7968");
#endif

    switch (ctx->pc) {
        case 0x2f79c0u: goto label_2f79c0;
        case 0x2f7a3cu: goto label_2f7a3c;
        case 0x2f7a48u: goto label_2f7a48;
        case 0x2f7a5cu: goto label_2f7a5c;
        case 0x2f7a6cu: goto label_2f7a6c;
        case 0x2f7a98u: goto label_2f7a98;
        case 0x2f7aacu: goto label_2f7aac;
        case 0x2f7abcu: goto label_2f7abc;
        default: break;
    }

    ctx->pc = 0x2f7968u;

    // 0x2f7968: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f796c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7970: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7974: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7978: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2f7978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f797c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7980: 0x247114c8  addiu       $s1, $v1, 0x14C8
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7984: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f7988: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f7988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f798c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f7990: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f7994: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f7994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7998: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f799c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f799cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f79a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f79a4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f79a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f79ac: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x2f79acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f79b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f79b4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2f79b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79b8: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F79B8u;
    SET_GPR_U32(ctx, 31, 0x2F79C0u);
    ctx->pc = 0x2F79BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79B8u;
    // 0x2f79bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F79B8u, 0x2F79C0u)) {
        return;
    }
    ctx->pc = 0x2F79C0u;
label_2f79c0:
    // 0x2f79c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f79c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f79c4: 0x1043002c  beq         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F79C4u;
    {
        const bool branch_taken_0x2f79c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79C4u;
        // 0x2f79c8: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79c4) {
            ctx->pc = 0x2F7A78u;
            goto label_2f7a78;
        }
    }
    ctx->pc = 0x2F79CCu;
    // 0x2f79cc: 0x3c120072  lui         $s2, 0x72
    ctx->pc = 0x2f79ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)114 << 16));
    // 0x2f79d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f79d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79d4: 0x24082080  addiu       $t0, $zero, 0x2080
    ctx->pc = 0x2f79d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f79d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f79d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79dc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2f79dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f79e0: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x2f79e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f79e4: 0x26421540  addiu       $v0, $s2, 0x1540
    ctx->pc = 0x2f79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5440));
    // 0x2f79e8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2f79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2f79ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f79ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79f0: 0xac550024  sw          $s5, 0x24($v0)
    ctx->pc = 0x2f79f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x721564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721564u, _value); } while (0);
    // 0x2f79f4: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f79f8: 0xae561540  sw          $s6, 0x1540($s2)
    ctx->pc = 0x2f79f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 22)); ps2TraceGuestWrite(rdram, 0x721540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721540u, _value); } while (0);
    // 0x2f79fc: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2f79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2f7a00: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2f7a00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x721548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721548u, _value); } while (0);
    // 0x2f7a04: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2f7a04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2f7a08: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x2f7a08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x72154Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72154Cu, _value); } while (0);
    // 0x2f7a0c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f7a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f7a10: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2f7a10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x721550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721550u, _value); } while (0);
    // 0x2f7a14: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2f7a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a18: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x2f7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x2f7a1c: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x2f7a1cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
    // 0x2f7a20: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x2f7a20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x721544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721544u, _value); } while (0);
    // 0x2f7a24: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f7a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7a28: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f7a28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721554u, _value); } while (0);
    // 0x2f7a2c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f7a2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x721558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721558u, _value); } while (0);
    // 0x2f7a30: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2f7a30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72155Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72155Cu, _value); } while (0);
    // 0x2f7a34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7A34u;
    SET_GPR_U32(ctx, 31, 0x2F7A3Cu);
    ctx->pc = 0x2F7A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A34u;
    // 0x2f7a38: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7A34u, 0x2F7A3Cu)) {
        return;
    }
    ctx->pc = 0x2F7A3Cu;
label_2f7a3c:
    // 0x2f7a3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7a40: 0xae03664c  sw          $v1, 0x664C($s0)
    ctx->pc = 0x2f7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26188), GPR_U32(ctx, 3));
    // 0x2f7a44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7a48:
    // 0x2f7a48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a4c: 0x8e05664c  lw          $a1, 0x664C($s0)
    ctx->pc = 0x2f7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26188)));
    // 0x2f7a50: 0x26471540  addiu       $a3, $s2, 0x1540
    ctx->pc = 0x2f7a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 5440));
    // 0x2f7a54: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F7A54u;
    SET_GPR_U32(ctx, 31, 0x2F7A5Cu);
    ctx->pc = 0x2F7A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A54u;
    // 0x2f7a58: 0x26a870e8  addiu       $t0, $s5, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F7A54u, 0x2F7A5Cu)) {
        return;
    }
    ctx->pc = 0x2F7A5Cu;
label_2f7a5c:
    // 0x2f7a5c: 0x5453fffa  bnel        $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7A5Cu;
    {
        const bool branch_taken_0x2f7a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f7a5c) {
            ctx->pc = 0x2F7A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7A5Cu;
            // 0x2f7a60: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7a48;
        }
    }
    ctx->pc = 0x2F7A64u;
    // 0x2f7a64: 0xc0bdc24  jal         func_2F7090
    ctx->pc = 0x2F7A64u;
    SET_GPR_U32(ctx, 31, 0x2F7A6Cu);
    ctx->pc = 0x2F7090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7090u, 0x2F7A64u, 0x2F7A6Cu)) {
        return;
    }
    ctx->pc = 0x2F7A6Cu;
label_2f7a6c:
    // 0x2f7a6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2f7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7a70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7A70u;
    {
        const bool branch_taken_0x2f7a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A70u;
        // 0x2f7a74: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a70) {
            ctx->pc = 0x2F7A80u;
            goto label_2f7a80;
        }
    }
    ctx->pc = 0x2F7A78u;
label_2f7a78:
    // 0x2f7a78: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2F7A78u;
    {
        const bool branch_taken_0x2f7a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A78u;
        // 0x2f7a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a78) {
            ctx->pc = 0x2F7AD0u;
            goto label_2f7ad0;
        }
    }
    ctx->pc = 0x2F7A80u;
label_2f7a80:
    // 0x2f7a80: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2f7a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a84: 0x1a800011  blez        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7A84u;
    {
        const bool branch_taken_0x2f7a84 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2F7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A84u;
        // 0x2f7a88: 0x24513640  addiu       $s1, $v0, 0x3640 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 13888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a84) {
            ctx->pc = 0x2F7ACCu;
            goto label_2f7acc;
        }
    }
    ctx->pc = 0x2F7A8Cu;
    // 0x2f7a8c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7a90: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2f7a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a94: 0x24531540  addiu       $s3, $v0, 0x1540
    ctx->pc = 0x2f7a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 5440));
label_2f7a98:
    // 0x2f7a98: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2f7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2f7a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f7a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7aa0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2f7aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f7aa4: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F7AA4u;
    SET_GPR_U32(ctx, 31, 0x2F7AACu);
    ctx->pc = 0x2F7AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AA4u;
    // 0x2f7aa8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F7AA4u, 0x2F7AACu)) {
        return;
    }
    ctx->pc = 0x2F7AACu;
label_2f7aac:
    // 0x2f7aac: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2f7aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2f7ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ab4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2F7AB4u;
    SET_GPR_U32(ctx, 31, 0x2F7ABCu);
    ctx->pc = 0x2F7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7AB4u;
    // 0x2f7ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2F7AB4u, 0x2F7ABCu)) {
        return;
    }
    ctx->pc = 0x2F7ABCu;
label_2f7abc:
    // 0x2f7abc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2f7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2f7ac0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2f7ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2f7ac4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F7AC4u;
    {
        const bool branch_taken_0x2f7ac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AC4u;
        // 0x2f7ac8: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ac4) {
            ctx->pc = 0x2F7A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7a98;
        }
    }
    ctx->pc = 0x2F7ACCu;
label_2f7acc:
    // 0x2f7acc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f7accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f7ad0:
    // 0x2f7ad0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f7ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7ad4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f7ad4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f7ad8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f7ad8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7adc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7adcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7ae0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7ae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7ae4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7ae8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7aec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7af0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7af4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AF4u;
        // 0x2f7af8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7AFCu;
    // 0x2f7afc: 0x0  nop
    ctx->pc = 0x2f7afcu;
    // NOP
    ctx->pc = 0x2f7b00u;
}
