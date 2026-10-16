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

// Function: sub_002F9D28
// Address: 0x2f9d28 - 0x2f9fb8
void sub_002F9D28_0x2f9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9D28_0x2f9d28");
#endif

    switch (ctx->pc) {
        case 0x2f9e10u: goto label_2f9e10;
        case 0x2f9e20u: goto label_2f9e20;
        case 0x2f9e28u: goto label_2f9e28;
        case 0x2f9e6cu: goto label_2f9e6c;
        case 0x2f9e80u: goto label_2f9e80;
        case 0x2f9ea4u: goto label_2f9ea4;
        case 0x2f9ee8u: goto label_2f9ee8;
        case 0x2f9ef8u: goto label_2f9ef8;
        case 0x2f9f20u: goto label_2f9f20;
        default: break;
    }

    ctx->pc = 0x2f9d28u;

    // 0x2f9d28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f9d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f9d2c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2f9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2f9d30: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f9d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f9d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9d38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f9d3c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2f9d3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d40: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2f9d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2f9d44: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f9d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f9d48: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f9d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f9d4c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f9d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f9d50: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f9d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f9d54: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f9d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f9d58: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f9d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f9d5c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f9d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f9d60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f9d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f9d64: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2f9d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9d68: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2f9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2f9d6c: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x2f9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x2f9d70: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x2f9d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x2f9d74: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x2f9d74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9d78: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2f9d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2f9d7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9d80: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9D80u;
    {
        const bool branch_taken_0x2f9d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D80u;
        // 0x2f9d84: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d80) {
            ctx->pc = 0x2F9D9Cu;
            goto label_2f9d9c;
        }
    }
    ctx->pc = 0x2F9D88u;
    // 0x2f9d88: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x2f9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x2f9d8c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F9D8Cu;
    {
        const bool branch_taken_0x2f9d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D8Cu;
        // 0x2f9d90: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d8c) {
            ctx->pc = 0x2F9DD4u;
            goto label_2f9dd4;
        }
    }
    ctx->pc = 0x2F9D94u;
    // 0x2f9d94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9D94u;
    {
        const bool branch_taken_0x2f9d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9D94u;
        // 0x2f9d98: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9d94) {
            ctx->pc = 0x2F9DA8u;
            goto label_2f9da8;
        }
    }
    ctx->pc = 0x2F9D9Cu;
label_2f9d9c:
    // 0x2f9d9c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2f9d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9da0: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x2f9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x2f9da4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2f9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_2f9da8:
    // 0x2f9da8: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x2f9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2f9dac: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x2f9dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2f9db0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9DB0u;
    {
        const bool branch_taken_0x2f9db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DB0u;
        // 0x2f9db4: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9db0) {
            ctx->pc = 0x2F9DC4u;
            goto label_2f9dc4;
        }
    }
    ctx->pc = 0x2F9DB8u;
    // 0x2f9db8: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x2f9db8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2f9dbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9DBCu;
    {
        const bool branch_taken_0x2f9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DBCu;
        // 0x2f9dc0: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dbc) {
            ctx->pc = 0x2F9DC8u;
            goto label_2f9dc8;
        }
    }
    ctx->pc = 0x2F9DC4u;
label_2f9dc4:
    // 0x2f9dc4: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f9dc8:
    // 0x2f9dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9dcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F9DCCu;
    {
        const bool branch_taken_0x2f9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DCCu;
        // 0x2f9dd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9dcc) {
            ctx->pc = 0x2F9DFCu;
            goto label_2f9dfc;
        }
    }
    ctx->pc = 0x2F9DD4u;
label_2f9dd4:
    // 0x2f9dd4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x2f9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x2f9dd8: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2f9dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2f9ddc: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f9de0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2f9de0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2f9de4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f9de4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f9de8: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x2f9de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x2f9dec: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x2f9decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x2f9df0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9df4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f9df8: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x2f9df8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_2f9dfc:
    // 0x2f9dfc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f9dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9e00: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x2F9E00u;
    {
        const bool branch_taken_0x2f9e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E00u;
        // 0x2f9e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e00) {
            ctx->pc = 0x2F9F88u;
            goto label_2f9f88;
        }
    }
    ctx->pc = 0x2F9E08u;
    // 0x2f9e08: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x2f9e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2f9e0c: 0x0  nop
    ctx->pc = 0x2f9e0cu;
    // NOP
label_2f9e10:
    // 0x2f9e10: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x2f9e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9e14: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2F9E14u;
    {
        const bool branch_taken_0x2f9e14 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2F9E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E14u;
        // 0x2f9e18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e14) {
            ctx->pc = 0x2F9F54u;
            goto label_2f9f54;
        }
    }
    ctx->pc = 0x2F9E1Cu;
    // 0x2f9e1c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x2f9e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2f9e20:
    // 0x2f9e20: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2F9E20u;
    SET_GPR_U32(ctx, 31, 0x2F9E28u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2F9E20u, 0x2F9E28u)) {
        return;
    }
    ctx->pc = 0x2F9E28u;
label_2f9e28:
    // 0x2f9e28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9e2c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9e30: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x2f9e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x2f9e34: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x2f9e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x2f9e38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f9e38u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x2f9e3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9e40: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x2f9e40u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x1000d410
    // 0x2f9e44: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x2f9e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x2f9e48: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9e4c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2f9e4cu;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20)); // MMIO: 0x1000d420
    // 0x2f9e50: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x2f9e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x2f9e54: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x2f9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2f9e58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f9e58u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3)); // MMIO: 0x1000d400
    // 0x2f9e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9E5Cu;
    {
        const bool branch_taken_0x2f9e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E5Cu;
        // 0x2f9e60: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e5c) {
            ctx->pc = 0x2F9E70u;
            goto label_2f9e70;
        }
    }
    ctx->pc = 0x2F9E64u;
    // 0x2f9e64: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2F9E64u;
    SET_GPR_U32(ctx, 31, 0x2F9E6Cu);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2F9E64u, 0x2F9E6Cu)) {
        return;
    }
    ctx->pc = 0x2F9E6Cu;
label_2f9e6c:
    // 0x2f9e6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2f9e70:
    // 0x2f9e70: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x2f9e70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2f9e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f9e78: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x2f9e7c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x2f9e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_2f9e80:
    // 0x2f9e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x2f9e84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2f9e88: 0x0  nop
    ctx->pc = 0x2f9e88u;
    // NOP
    // 0x2f9e8c: 0x0  nop
    ctx->pc = 0x2f9e8cu;
    // NOP
    // 0x2f9e90: 0x0  nop
    ctx->pc = 0x2f9e90u;
    // NOP
    // 0x2f9e94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F9E94u;
    {
        const bool branch_taken_0x2f9e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9e94) {
            ctx->pc = 0x2F9E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9e80;
        }
    }
    ctx->pc = 0x2F9E9Cu;
    // 0x2f9e9c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2F9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9EA4u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2F9E9Cu, 0x2F9EA4u)) {
        return;
    }
    ctx->pc = 0x2F9EA4u;
label_2f9ea4:
    // 0x2f9ea4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9ea8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9eac: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x2f9eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x2f9eb0: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x2f9eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x2f9eb4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f9eb4u;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x1000d080
    // 0x2f9eb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9ebc: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x2f9ebcu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x2f9ec0: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x2f9ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x2f9ec4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2f9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9ec8: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x2f9ec8u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x1000d020
    // 0x2f9ecc: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x2f9eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x2f9ed0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f9ed4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2f9ed4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x2f9ed8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9ED8u;
    {
        const bool branch_taken_0x2f9ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ED8u;
        // 0x2f9edc: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ed8) {
            ctx->pc = 0x2F9EECu;
            goto label_2f9eec;
        }
    }
    ctx->pc = 0x2F9EE0u;
    // 0x2f9ee0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2F9EE0u;
    SET_GPR_U32(ctx, 31, 0x2F9EE8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2F9EE0u, 0x2F9EE8u)) {
        return;
    }
    ctx->pc = 0x2F9EE8u;
label_2f9ee8:
    // 0x2f9ee8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_2f9eec:
    // 0x2f9eec: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x2f9eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x2f9ef0: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x2f9ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x2f9ef4: 0x0  nop
    ctx->pc = 0x2f9ef4u;
    // NOP
label_2f9ef8:
    // 0x2f9ef8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d000
    // 0x2f9efc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2f9efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2f9f00: 0x0  nop
    ctx->pc = 0x2f9f00u;
    // NOP
    // 0x2f9f04: 0x0  nop
    ctx->pc = 0x2f9f04u;
    // NOP
    // 0x2f9f08: 0x0  nop
    ctx->pc = 0x2f9f08u;
    // NOP
    // 0x2f9f0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F9F0Cu;
    {
        const bool branch_taken_0x2f9f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f0c) {
            ctx->pc = 0x2F9EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9ef8;
        }
    }
    ctx->pc = 0x2F9F14u;
    // 0x2f9f14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2f9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2f9f18: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x2f9f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x2f9f1c: 0x0  nop
    ctx->pc = 0x2f9f1cu;
    // NOP
label_2f9f20:
    // 0x2f9f20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d020
    // 0x2f9f24: 0x0  nop
    ctx->pc = 0x2f9f24u;
    // NOP
    // 0x2f9f28: 0x0  nop
    ctx->pc = 0x2f9f28u;
    // NOP
    // 0x2f9f2c: 0x0  nop
    ctx->pc = 0x2f9f2cu;
    // NOP
    // 0x2f9f30: 0x0  nop
    ctx->pc = 0x2f9f30u;
    // NOP
    // 0x2f9f34: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F9F34u;
    {
        const bool branch_taken_0x2f9f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9f34) {
            ctx->pc = 0x2F9F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9f20;
        }
    }
    ctx->pc = 0x2F9F3Cu;
    // 0x2f9f3c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2f9f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f40: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2f9f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2f9f44: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2F9F44u;
    {
        const bool branch_taken_0x2f9f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F44u;
        // 0x2f9f48: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f44) {
            ctx->pc = 0x2F9E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9e20;
        }
    }
    ctx->pc = 0x2F9F4Cu;
    // 0x2f9f4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9F4Cu;
    {
        const bool branch_taken_0x2f9f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F4Cu;
        // 0x2f9f50: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f4c) {
            ctx->pc = 0x2F9F5Cu;
            goto label_2f9f5c;
        }
    }
    ctx->pc = 0x2F9F54u;
label_2f9f54:
    // 0x2f9f54: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x2f9f54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f9f58: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2f9f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9f5c:
    // 0x2f9f5c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2f9f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f60: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x2f9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2f9f64: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x2f9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x2f9f68: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2f9f68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f9f6c: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x2f9f6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2f9f70: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9f74: 0xe00013  mtlo        $a3
    ctx->pc = 0x2f9f74u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x2f9f78: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x2f9f78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2f9f7c: 0x3812  mflo        $a3
    ctx->pc = 0x2f9f7cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2f9f80: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x2F9F80u;
    {
        const bool branch_taken_0x2f9f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F80u;
        // 0x2f9f84: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f80) {
            ctx->pc = 0x2F9E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f9e10;
        }
    }
    ctx->pc = 0x2F9F88u;
label_2f9f88:
    // 0x2f9f88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f9f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f9f8c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f9f8cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f9f90: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f9f90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f9f94: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f9f94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f9f98: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f9f98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f9f9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f9f9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9fa0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f9fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f9fa4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f9fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9fa8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f9fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f9facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FB0u;
        // 0x2f9fb4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9FB8u;
}
