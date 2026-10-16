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

// Function: sub_001F5DD0
// Address: 0x1f5dd0 - 0x1f5f18
void sub_001F5DD0_0x1f5dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5DD0_0x1f5dd0");
#endif

    switch (ctx->pc) {
        case 0x1f5decu: goto label_1f5dec;
        case 0x1f5e0cu: goto label_1f5e0c;
        case 0x1f5e28u: goto label_1f5e28;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5e84u: goto label_1f5e84;
        case 0x1f5e8cu: goto label_1f5e8c;
        case 0x1f5ec8u: goto label_1f5ec8;
        case 0x1f5ed8u: goto label_1f5ed8;
        case 0x1f5ee0u: goto label_1f5ee0;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5ef0u: goto label_1f5ef0;
        case 0x1f5ef8u: goto label_1f5ef8;
        default: break;
    }

    ctx->pc = 0x1f5dd0u;

    // 0x1f5dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5dd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f5dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f5dd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f5dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f5ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5de0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f5de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f5de4: 0xc07da58  jal         func_1F6960
    ctx->pc = 0x1F5DE4u;
    SET_GPR_U32(ctx, 31, 0x1F5DECu);
    ctx->pc = 0x1F5DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5DE4u;
    // 0x1f5de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6960u, 0x1F5DE4u, 0x1F5DECu)) {
        return;
    }
    ctx->pc = 0x1F5DECu;
label_1f5dec:
    // 0x1f5dec: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1f5decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1f5df0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1f5df4: 0xac500040  sw          $s0, 0x40($v0)
    ctx->pc = 0x1f5df4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x700040u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x700040u, _value); } while (0);
    // 0x1f5df8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5DF8u;
    {
        const bool branch_taken_0x1f5df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5DF8u;
        // 0x1f5dfc: 0xac710044  sw          $s1, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5df8) {
            ctx->pc = 0x1F5E14u;
            goto label_1f5e14;
        }
    }
    ctx->pc = 0x1F5E00u;
    // 0x1f5e00: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1f5e04: 0xc081738  jal         func_205CE0
    ctx->pc = 0x1F5E04u;
    SET_GPR_U32(ctx, 31, 0x1F5E0Cu);
    ctx->pc = 0x1F5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E04u;
    // 0x1f5e08: 0x24842b88  addiu       $a0, $a0, 0x2B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205CE0u, 0x1F5E04u, 0x1F5E0Cu)) {
        return;
    }
    ctx->pc = 0x1F5E0Cu;
label_1f5e0c:
    // 0x1f5e0c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F5E0Cu;
    {
        const bool branch_taken_0x1f5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e0c) {
            ctx->pc = 0x1F5E7Cu;
            goto label_1f5e7c;
        }
    }
    ctx->pc = 0x1F5E14u;
label_1f5e14:
    // 0x1f5e14: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f5e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f5e18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5e1c: 0x24a52b98  addiu       $a1, $a1, 0x2B98
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11160));
    // 0x1f5e20: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x1F5E20u;
    SET_GPR_U32(ctx, 31, 0x1F5E28u);
    ctx->pc = 0x1F5E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E20u;
    // 0x1f5e24: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x1F5E20u, 0x1F5E28u)) {
        return;
    }
    ctx->pc = 0x1F5E28u;
label_1f5e28:
    // 0x1f5e28: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F5E28u;
    {
        const bool branch_taken_0x1f5e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E28u;
        // 0x1f5e2c: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e28) {
            ctx->pc = 0x1F5E74u;
            goto label_1f5e74;
        }
    }
    ctx->pc = 0x1F5E30u;
    // 0x1f5e30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f5e34: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1f5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f5e38: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5e38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5e3c: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5E3Cu;
    {
        const bool branch_taken_0x1f5e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5e3c) {
            ctx->pc = 0x1F5E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E3Cu;
            // 0x1f5e40: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E64u;
            goto label_1f5e64;
        }
    }
    ctx->pc = 0x1F5E44u;
    // 0x1f5e44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f5e48:
    // 0x1f5e48: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5e48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5e4c: 0x0  nop
    ctx->pc = 0x1f5e4cu;
    // NOP
    // 0x1f5e50: 0x0  nop
    ctx->pc = 0x1f5e50u;
    // NOP
    // 0x1f5e54: 0x0  nop
    ctx->pc = 0x1f5e54u;
    // NOP
    // 0x1f5e58: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5E58u;
    {
        const bool branch_taken_0x1f5e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5e58) {
            ctx->pc = 0x1F5E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5E58u;
            // 0x1f5e5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5e48;
        }
    }
    ctx->pc = 0x1F5E60u;
    // 0x1f5e60: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x1f5e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_1f5e64:
    // 0x1f5e64: 0xc081738  jal         func_205CE0
    ctx->pc = 0x1F5E64u;
    SET_GPR_U32(ctx, 31, 0x1F5E6Cu);
    ctx->pc = 0x1F5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E64u;
    // 0x1f5e68: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205CE0u, 0x1F5E64u, 0x1F5E6Cu)) {
        return;
    }
    ctx->pc = 0x1F5E6Cu;
label_1f5e6c:
    // 0x1f5e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5E6Cu;
    {
        const bool branch_taken_0x1f5e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e6c) {
            ctx->pc = 0x1F5E7Cu;
            goto label_1f5e7c;
        }
    }
    ctx->pc = 0x1F5E74u;
label_1f5e74:
    // 0x1f5e74: 0xc081738  jal         func_205CE0
    ctx->pc = 0x1F5E74u;
    SET_GPR_U32(ctx, 31, 0x1F5E7Cu);
    ctx->pc = 0x1F5E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E74u;
    // 0x1f5e78: 0x24842b88  addiu       $a0, $a0, 0x2B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205CE0u, 0x1F5E74u, 0x1F5E7Cu)) {
        return;
    }
    ctx->pc = 0x1F5E7Cu;
label_1f5e7c:
    // 0x1f5e7c: 0xc07d6fc  jal         func_1F5BF0
    ctx->pc = 0x1F5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5E84u);
    ctx->pc = 0x1F5BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5BF0u, 0x1F5E7Cu, 0x1F5E84u)) {
        return;
    }
    ctx->pc = 0x1F5E84u;
label_1f5e84:
    // 0x1f5e84: 0xc07cd58  jal         func_1F3560
    ctx->pc = 0x1F5E84u;
    SET_GPR_U32(ctx, 31, 0x1F5E8Cu);
    ctx->pc = 0x1F5E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5E84u;
    // 0x1f5e88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3560u, 0x1F5E84u, 0x1F5E8Cu)) {
        return;
    }
    ctx->pc = 0x1F5E8Cu;
label_1f5e8c:
    // 0x1f5e8c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f5e90: 0x24070203  addiu       $a3, $zero, 0x203
    ctx->pc = 0x1f5e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x1f5e94: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1f5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1f5e98: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1f5e9c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1f5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1f5ea0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ea4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x1f5ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x1f5ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5eac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f5eb0: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x1f5eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
    // 0x1f5eb4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1f5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1f5eb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f5eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ebc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f5ec0: 0xc076284  jal         func_1D8A10
    ctx->pc = 0x1F5EC0u;
    SET_GPR_U32(ctx, 31, 0x1F5EC8u);
    ctx->pc = 0x1F5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5EC0u;
    // 0x1f5ec4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8A10u, 0x1F5EC0u, 0x1F5EC8u)) {
        return;
    }
    ctx->pc = 0x1F5EC8u;
label_1f5ec8:
    // 0x1f5ec8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5EC8u;
    {
        const bool branch_taken_0x1f5ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5EC8u;
        // 0x1f5ecc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ec8) {
            ctx->pc = 0x1F5F00u;
            goto label_1f5f00;
        }
    }
    ctx->pc = 0x1F5ED0u;
    // 0x1f5ed0: 0xc08c572  jal         func_2315C8
    ctx->pc = 0x1F5ED0u;
    SET_GPR_U32(ctx, 31, 0x1F5ED8u);
    ctx->pc = 0x1F5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED0u;
    // 0x1f5ed4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315C8u, 0x1F5ED0u, 0x1F5ED8u)) {
        return;
    }
    ctx->pc = 0x1F5ED8u;
label_1f5ed8:
    // 0x1f5ed8: 0xc08c576  jal         func_2315D8
    ctx->pc = 0x1F5ED8u;
    SET_GPR_U32(ctx, 31, 0x1F5EE0u);
    ctx->pc = 0x1F5EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5ED8u;
    // 0x1f5edc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2315D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2315D8u, 0x1F5ED8u, 0x1F5EE0u)) {
        return;
    }
    ctx->pc = 0x1F5EE0u;
label_1f5ee0:
    // 0x1f5ee0: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x1F5EE0u;
    SET_GPR_U32(ctx, 31, 0x1F5EE8u);
    ctx->pc = 0x1522A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1522A0u, 0x1F5EE0u, 0x1F5EE8u)) {
        return;
    }
    ctx->pc = 0x1F5EE8u;
label_1f5ee8:
    // 0x1f5ee8: 0xc07d740  jal         func_1F5D00
    ctx->pc = 0x1F5EE8u;
    SET_GPR_U32(ctx, 31, 0x1F5EF0u);
    ctx->pc = 0x1F5D00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5D00u, 0x1F5EE8u, 0x1F5EF0u)) {
        return;
    }
    ctx->pc = 0x1F5EF0u;
label_1f5ef0:
    // 0x1f5ef0: 0xc075f76  jal         func_1D7DD8
    ctx->pc = 0x1F5EF0u;
    SET_GPR_U32(ctx, 31, 0x1F5EF8u);
    ctx->pc = 0x1D7DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7DD8u, 0x1F5EF0u, 0x1F5EF8u)) {
        return;
    }
    ctx->pc = 0x1F5EF8u;
label_1f5ef8:
    // 0x1f5ef8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5EF8u;
    {
        const bool branch_taken_0x1f5ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5ef8) {
            ctx->pc = 0x1F5EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5ee8;
        }
    }
    ctx->pc = 0x1F5F00u;
label_1f5f00:
    // 0x1f5f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f5f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f5f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5f08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f5f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F0Cu;
        // 0x1f5f10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5F14u;
    // 0x1f5f14: 0x0  nop
    ctx->pc = 0x1f5f14u;
    // NOP
    ctx->pc = 0x1f5f18u;
}
