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

// Function: sub_001D9A00
// Address: 0x1d9a00 - 0x1d9c18
void sub_001D9A00_0x1d9a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9A00_0x1d9a00");
#endif

    switch (ctx->pc) {
        case 0x1d9a50u: goto label_1d9a50;
        case 0x1d9a68u: goto label_1d9a68;
        case 0x1d9ad8u: goto label_1d9ad8;
        case 0x1d9af8u: goto label_1d9af8;
        case 0x1d9b10u: goto label_1d9b10;
        case 0x1d9b50u: goto label_1d9b50;
        case 0x1d9b78u: goto label_1d9b78;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9ba8u: goto label_1d9ba8;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bccu: goto label_1d9bcc;
        case 0x1d9becu: goto label_1d9bec;
        default: break;
    }

    ctx->pc = 0x1d9a00u;

    // 0x1d9a00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d9a04: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9a08: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1d9a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1d9a0c: 0x8c438cb0  lw          $v1, -0x7350($v0)
    ctx->pc = 0x1d9a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8CB0u));
    // 0x1d9a10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d9a10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a14: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1d9a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1d9a18: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1d9a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1d9a1c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1d9a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1d9a20: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1d9a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1d9a24: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d9a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d9a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d9a2c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d9a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d9a30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9a34: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1d9a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1d9a38: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D9A38u;
    {
        const bool branch_taken_0x1d9a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A38u;
        // 0x1d9a3c: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a38) {
            ctx->pc = 0x1D9AB4u;
            goto label_1d9ab4;
        }
    }
    ctx->pc = 0x1D9A40u;
    // 0x1d9a40: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d9a44: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1d9a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9a48: 0x24508290  addiu       $s0, $v0, -0x7D70
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1d9a4c: 0x0  nop
    ctx->pc = 0x1d9a4cu;
    // NOP
label_1d9a50:
    // 0x1d9a50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d9a58: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9A58u;
    {
        const bool branch_taken_0x1d9a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1D9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A58u;
        // 0x1d9a5c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a58) {
            ctx->pc = 0x1D9A9Cu;
            goto label_1d9a9c;
        }
    }
    ctx->pc = 0x1D9A60u;
    // 0x1d9a60: 0xc076512  jal         func_1D9448
    ctx->pc = 0x1D9A60u;
    SET_GPR_U32(ctx, 31, 0x1D9A68u);
    ctx->pc = 0x1D9A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9A60u;
    // 0x1d9a64: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9448u, 0x1D9A60u, 0x1D9A68u)) {
        return;
    }
    ctx->pc = 0x1D9A68u;
label_1d9a68:
    // 0x1d9a68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9a6c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1d9a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1d9a70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d9a74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9a78: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d9a7c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1d9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1d9a80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d9a84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9a88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d9a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d9a8c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1d9a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1d9a90: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d9a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d9a94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9A94u;
    {
        const bool branch_taken_0x1d9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9A94u;
        // 0x1d9a98: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9a94) {
            ctx->pc = 0x1D9AA4u;
            goto label_1d9aa4;
        }
    }
    ctx->pc = 0x1D9A9Cu;
label_1d9a9c:
    // 0x1d9a9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9aa0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d9aa4:
    // 0x1d9aa4: 0x8e828cb0  lw          $v0, -0x7350($s4)
    ctx->pc = 0x1d9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937776)));
    // 0x1d9aa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9aac: 0x1462ffe8  bne         $v1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D9AACu;
    {
        const bool branch_taken_0x1d9aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AACu;
        // 0x1d9ab0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9aac) {
            ctx->pc = 0x1D9A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9a50;
        }
    }
    ctx->pc = 0x1D9AB4u;
label_1d9ab4:
    // 0x1d9ab4: 0x8e828cb0  lw          $v0, -0x7350($s4)
    ctx->pc = 0x1d9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937776)));
    // 0x1d9ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9abc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1d9abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1d9ac0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9AC0u;
    {
        const bool branch_taken_0x1d9ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AC0u;
        // 0x1d9ac4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ac0) {
            ctx->pc = 0x1D9B30u;
            goto label_1d9b30;
        }
    }
    ctx->pc = 0x1D9AC8u;
    // 0x1d9ac8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1d9ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9acc: 0x3c13006a  lui         $s3, 0x6A
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)106 << 16));
    // 0x1d9ad0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d9ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ad4: 0x0  nop
    ctx->pc = 0x1d9ad4u;
    // NOP
label_1d9ad8:
    // 0x1d9ad8: 0x8fb10010  lw          $s1, 0x10($sp)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9adc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d9ae0: 0x1455000d  bne         $v0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1D9AE0u;
    {
        const bool branch_taken_0x1d9ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x1D9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AE0u;
        // 0x1d9ae4: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ae0) {
            ctx->pc = 0x1D9B18u;
            goto label_1d9b18;
        }
    }
    ctx->pc = 0x1D9AE8u;
    // 0x1d9ae8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9aec: 0x26651a68  addiu       $a1, $s3, 0x1A68
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6760));
    // 0x1d9af0: 0xc0c5d1c  jal         func_317470
    ctx->pc = 0x1D9AF0u;
    SET_GPR_U32(ctx, 31, 0x1D9AF8u);
    ctx->pc = 0x1D9AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9AF0u;
    // 0x1d9af4: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317470u, 0x1D9AF0u, 0x1D9AF8u)) {
        return;
    }
    ctx->pc = 0x1D9AF8u;
label_1d9af8:
    // 0x1d9af8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d9afc: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d9b00: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9B00u;
    {
        const bool branch_taken_0x1d9b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B00u;
        // 0x1d9b04: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b00) {
            ctx->pc = 0x1D9B1Cu;
            goto label_1d9b1c;
        }
    }
    ctx->pc = 0x1D9B08u;
    // 0x1d9b08: 0xc076512  jal         func_1D9448
    ctx->pc = 0x1D9B08u;
    SET_GPR_U32(ctx, 31, 0x1D9B10u);
    ctx->pc = 0x1D9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B08u;
    // 0x1d9b0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9448u, 0x1D9B08u, 0x1D9B10u)) {
        return;
    }
    ctx->pc = 0x1D9B10u;
label_1d9b10:
    // 0x1d9b10: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x1d9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
    // 0x1d9b14: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d9b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1d9b18:
    // 0x1d9b18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d9b1c:
    // 0x1d9b1c: 0x8e848cb0  lw          $a0, -0x7350($s4)
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937776)));
    // 0x1d9b20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9b24: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1d9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1d9b28: 0x1464ffeb  bne         $v1, $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D9B28u;
    {
        const bool branch_taken_0x1d9b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B28u;
        // 0x1d9b2c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b28) {
            ctx->pc = 0x1D9AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ad8;
        }
    }
    ctx->pc = 0x1D9B30u;
label_1d9b30:
    // 0x1d9b30: 0x8e828cb0  lw          $v0, -0x7350($s4)
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937776)));
    // 0x1d9b34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9b38: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1d9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1d9b3c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D9B3Cu;
    {
        const bool branch_taken_0x1d9b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B3Cu;
        // 0x1d9b40: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b3c) {
            ctx->pc = 0x1D9BE4u;
            goto label_1d9be4;
        }
    }
    ctx->pc = 0x1D9B44u;
    // 0x1d9b44: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d9b44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9b48: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9b4c: 0x0  nop
    ctx->pc = 0x1d9b4cu;
    // NOP
label_1d9b50:
    // 0x1d9b50: 0x8fb30030  lw          $s3, 0x30($sp)
    ctx->pc = 0x1d9b50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9b54: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1d9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d9b58: 0x1456001c  bne         $v0, $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D9B58u;
    {
        const bool branch_taken_0x1d9b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1D9B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B58u;
        // 0x1d9b5c: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b58) {
            ctx->pc = 0x1D9BCCu;
            goto label_1d9bcc;
        }
    }
    ctx->pc = 0x1D9B60u;
    // 0x1d9b60: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9b64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D9B64u;
    {
        const bool branch_taken_0x1d9b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B64u;
        // 0x1d9b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b64) {
            ctx->pc = 0x1D9BCCu;
            goto label_1d9bcc;
        }
    }
    ctx->pc = 0x1D9B6Cu;
    // 0x1d9b6c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d9b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9b70: 0xc081444  jal         func_205110
    ctx->pc = 0x1D9B70u;
    SET_GPR_U32(ctx, 31, 0x1D9B78u);
    ctx->pc = 0x1D9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B70u;
    // 0x1d9b74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205110u, 0x1D9B70u, 0x1D9B78u)) {
        return;
    }
    ctx->pc = 0x1D9B78u;
label_1d9b78:
    // 0x1d9b78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b7c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9B7Cu;
    {
        const bool branch_taken_0x1d9b7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B7Cu;
        // 0x1d9b80: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b7c) {
            ctx->pc = 0x1D9BD0u;
            goto label_1d9bd0;
        }
    }
    ctx->pc = 0x1D9B84u;
    // 0x1d9b84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9b88: 0xdc450048  ld          $a1, 0x48($v0)
    ctx->pc = 0x1d9b88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d9b8c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1d9b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d9b90: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d9b90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d9b94: 0xc093620  jal         func_24D880
    ctx->pc = 0x1D9B94u;
    SET_GPR_U32(ctx, 31, 0x1D9B9Cu);
    ctx->pc = 0x1D9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B94u;
    // 0x1d9b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x1D9B94u, 0x1D9B9Cu)) {
        return;
    }
    ctx->pc = 0x1D9B9Cu;
label_1d9b9c:
    // 0x1d9b9c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9ba0: 0xc07689e  jal         func_1DA278
    ctx->pc = 0x1D9BA0u;
    SET_GPR_U32(ctx, 31, 0x1D9BA8u);
    ctx->pc = 0x1D9BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BA0u;
    // 0x1d9ba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA278u, 0x1D9BA0u, 0x1D9BA8u)) {
        return;
    }
    ctx->pc = 0x1D9BA8u;
label_1d9ba8:
    // 0x1d9ba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9BACu;
    {
        const bool branch_taken_0x1d9bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9bac) {
            ctx->pc = 0x1D9BC4u;
            goto label_1d9bc4;
        }
    }
    ctx->pc = 0x1D9BB4u;
    // 0x1d9bb4: 0xc076534  jal         func_1D94D0
    ctx->pc = 0x1D9BB4u;
    SET_GPR_U32(ctx, 31, 0x1D9BBCu);
    ctx->pc = 0x1D9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BB4u;
    // 0x1d9bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D94D0u, 0x1D9BB4u, 0x1D9BBCu)) {
        return;
    }
    ctx->pc = 0x1D9BBCu;
label_1d9bbc:
    // 0x1d9bbc: 0xae750008  sw          $s5, 0x8($s3)
    ctx->pc = 0x1d9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 21));
    // 0x1d9bc0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1d9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_1d9bc4:
    // 0x1d9bc4: 0xc0817e6  jal         func_205F98
    ctx->pc = 0x1D9BC4u;
    SET_GPR_U32(ctx, 31, 0x1D9BCCu);
    ctx->pc = 0x1D9BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9BC4u;
    // 0x1d9bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205F98u, 0x1D9BC4u, 0x1D9BCCu)) {
        return;
    }
    ctx->pc = 0x1D9BCCu;
label_1d9bcc:
    // 0x1d9bcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d9bd0:
    // 0x1d9bd0: 0x8e848cb0  lw          $a0, -0x7350($s4)
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937776)));
    // 0x1d9bd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9bd8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1d9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1d9bdc: 0x1464ffdc  bne         $v1, $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D9BDCu;
    {
        const bool branch_taken_0x1d9bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9BDCu;
        // 0x1d9be0: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9bdc) {
            ctx->pc = 0x1D9B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9b50;
        }
    }
    ctx->pc = 0x1D9BE4u;
label_1d9be4:
    // 0x1d9be4: 0xc0b7182  jal         func_2DC608
    ctx->pc = 0x1D9BE4u;
    SET_GPR_U32(ctx, 31, 0x1D9BECu);
    ctx->pc = 0x2DC608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC608u, 0x1D9BE4u, 0x1D9BECu)) {
        return;
    }
    ctx->pc = 0x1D9BECu;
label_1d9bec:
    // 0x1d9bec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1d9becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d9bf0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1d9bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d9bf4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1d9bf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d9bf8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1d9bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d9bfc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1d9bfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d9c00: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d9c00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d9c04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d9c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d9c08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d9c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9C0Cu;
        // 0x1d9c10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9C14u;
    // 0x1d9c14: 0x0  nop
    ctx->pc = 0x1d9c14u;
    // NOP
    ctx->pc = 0x1d9c18u;
}
