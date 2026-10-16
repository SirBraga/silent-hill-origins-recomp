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

// Function: sub_0031DB00
// Address: 0x31db00 - 0x31dc70
void sub_0031DB00_0x31db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DB00_0x31db00");
#endif

    switch (ctx->pc) {
        case 0x31db28u: goto label_31db28;
        case 0x31db64u: goto label_31db64;
        case 0x31db70u: goto label_31db70;
        case 0x31db88u: goto label_31db88;
        case 0x31dbb0u: goto label_31dbb0;
        case 0x31dbccu: goto label_31dbcc;
        case 0x31dc10u: goto label_31dc10;
        case 0x31dc48u: goto label_31dc48;
        default: break;
    }

    ctx->pc = 0x31db00u;

    // 0x31db00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31db04: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31db08: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31db0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31db0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31db14: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x31db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x31db18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x31db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31db1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31db20: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x31DB20u;
    SET_GPR_U32(ctx, 31, 0x31DB28u);
    ctx->pc = 0x31DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB20u;
    // 0x31db24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x31DB20u, 0x31DB28u)) {
        return;
    }
    ctx->pc = 0x31DB28u;
label_31db28:
    // 0x31db28: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31db2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31db30: 0x245470c8  addiu       $s4, $v0, 0x70C8
    ctx->pc = 0x31db30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31db34: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31db34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31db38: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x31db38u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6870D0u));
    // 0x31db3c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x31db3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31db40: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x31db40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x31db44: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x31db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x31db48: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31db4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31db50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31db54: 0x2883e  dsrl32      $s1, $v0, 0
    ctx->pc = 0x31db54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31db58: 0x230802f  dsubu       $s0, $s1, $s0
    ctx->pc = 0x31db58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x31db5c: 0xc07db0a  jal         func_1F6C28
    ctx->pc = 0x31DB5Cu;
    SET_GPR_U32(ctx, 31, 0x31DB64u);
    ctx->pc = 0x31DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB5Cu;
    // 0x31db60: 0x66040fef  daddiu      $a0, $s0, 0xFEF (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x31DB5Cu, 0x31DB64u)) {
        return;
    }
    ctx->pc = 0x31DB64u;
label_31db64:
    // 0x31db64: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x31db64u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x31db68: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x31DB68u;
    SET_GPR_U32(ctx, 31, 0x31DB70u);
    ctx->pc = 0x31DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB68u;
    // 0x31db6c: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x31DB68u, 0x31DB70u)) {
        return;
    }
    ctx->pc = 0x31DB70u;
label_31db70:
    // 0x31db70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31db70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31db74: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x31db74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x31db78: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x31DB78u;
    {
        const bool branch_taken_0x31db78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB78u;
        // 0x31db7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db78) {
            ctx->pc = 0x31DC08u;
            goto label_31dc08;
        }
    }
    ctx->pc = 0x31DB80u;
    // 0x31db80: 0xc0c7db6  jal         func_31F6D8
    ctx->pc = 0x31DB80u;
    SET_GPR_U32(ctx, 31, 0x31DB88u);
    ctx->pc = 0x31DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB80u;
    // 0x31db84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F6D8u, 0x31DB80u, 0x31DB88u)) {
        return;
    }
    ctx->pc = 0x31DB88u;
label_31db88:
    // 0x31db88: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x31db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31db8c: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x31db8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x31db90: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x31db90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x31db94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31db98: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x31DB98u;
    {
        const bool branch_taken_0x31db98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB98u;
        // 0x31db9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db98) {
            ctx->pc = 0x31DC08u;
            goto label_31dc08;
        }
    }
    ctx->pc = 0x31DBA0u;
    // 0x31dba0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x31dba0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31dba4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x31dba4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x31dba8: 0xc0c7db6  jal         func_31F6D8
    ctx->pc = 0x31DBA8u;
    SET_GPR_U32(ctx, 31, 0x31DBB0u);
    ctx->pc = 0x31DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBA8u;
    // 0x31dbac: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F6D8u, 0x31DBA8u, 0x31DBB0u)) {
        return;
    }
    ctx->pc = 0x31DBB0u;
label_31dbb0:
    // 0x31dbb0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31dbb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31dbb8: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x31DBB8u;
    {
        const bool branch_taken_0x31dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBB8u;
        // 0x31dbbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbb8) {
            ctx->pc = 0x31DC18u;
            goto label_31dc18;
        }
    }
    ctx->pc = 0x31DBC0u;
    // 0x31dbc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31dbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbc4: 0xc0c7db6  jal         func_31F6D8
    ctx->pc = 0x31DBC4u;
    SET_GPR_U32(ctx, 31, 0x31DBCCu);
    ctx->pc = 0x31DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBC4u;
    // 0x31dbc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F6D8u, 0x31DBC4u, 0x31DBCCu)) {
        return;
    }
    ctx->pc = 0x31DBCCu;
label_31dbcc:
    // 0x31dbcc: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x31dbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31dbd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31dbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dbd4: 0xa68823  subu        $s1, $a1, $a2
    ctx->pc = 0x31dbd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31dbd8: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x31dbd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31dbdc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31DBDCu;
    {
        const bool branch_taken_0x31dbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBDCu;
        // 0x31dbe0: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dbdc) {
            ctx->pc = 0x31DC08u;
            goto label_31dc08;
        }
    }
    ctx->pc = 0x31DBE4u;
    // 0x31dbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dbe8: 0x8c8374e0  lw          $v1, 0x74E0($a0)
    ctx->pc = 0x31dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29920)));
    // 0x31dbec: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x31dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x31dbf0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31dbf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31dbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dbf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31dbf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31dbfc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x31dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31dc00: 0xac8374f8  sw          $v1, 0x74F8($a0)
    ctx->pc = 0x31dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29944), GPR_U32(ctx, 3));
    // 0x31dc04: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_31dc08:
    // 0x31dc08: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31DC08u;
    SET_GPR_U32(ctx, 31, 0x31DC10u);
    ctx->pc = 0x31DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC08u;
    // 0x31dc0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31DC08u, 0x31DC10u)) {
        return;
    }
    ctx->pc = 0x31DC10u;
label_31dc10:
    // 0x31dc10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31DC10u;
    {
        const bool branch_taken_0x31dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC10u;
        // 0x31dc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc10) {
            ctx->pc = 0x31DC4Cu;
            goto label_31dc4c;
        }
    }
    ctx->pc = 0x31DC18u;
label_31dc18:
    // 0x31dc18: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x31dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x31dc1c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x31dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x31dc20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31dc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31dc24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31dc28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31dc28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31dc2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31dc30: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x31dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x31dc34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc38: 0x8c6274f8  lw          $v0, 0x74F8($v1)
    ctx->pc = 0x31dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6874F8u));
    // 0x31dc3c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x31dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x31dc40: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31DC40u;
    SET_GPR_U32(ctx, 31, 0x31DC48u);
    ctx->pc = 0x31DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC40u;
    // 0x31dc44: 0xac6274f8  sw          $v0, 0x74F8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 29944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31DC40u, 0x31DC48u)) {
        return;
    }
    ctx->pc = 0x31DC48u;
label_31dc48:
    // 0x31dc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31dc4c:
    // 0x31dc4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31dc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31dc50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31dc50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31dc54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31dc54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31dc58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x31dc58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31dc5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31dc5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dc64: 0x3e00008  jr          $ra
    ctx->pc = 0x31DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC64u;
        // 0x31dc68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DC6Cu;
    // 0x31dc6c: 0x0  nop
    ctx->pc = 0x31dc6cu;
    // NOP
    ctx->pc = 0x31dc70u;
}
