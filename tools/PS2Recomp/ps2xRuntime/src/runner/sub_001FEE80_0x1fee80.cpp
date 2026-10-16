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

// Function: sub_001FEE80
// Address: 0x1fee80 - 0x1fef98
void sub_001FEE80_0x1fee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE80_0x1fee80");
#endif

    switch (ctx->pc) {
        case 0x1fef10u: goto label_1fef10;
        case 0x1fef58u: goto label_1fef58;
        default: break;
    }

    ctx->pc = 0x1fee80u;

    // 0x1fee80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fee84: 0x14a2003a  bne         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FEE84u;
    {
        const bool branch_taken_0x1fee84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fee84) {
            ctx->pc = 0x1FEF70u;
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEE8Cu;
    // 0x1fee8c: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FEE8Cu;
    {
        const bool branch_taken_0x1fee8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEE8Cu;
        // 0x1fee90: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee8c) {
            ctx->pc = 0x1FEF70u;
            goto label_1fef70;
        }
    }
    ctx->pc = 0x1FEE94u;
    // 0x1fee94: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1fee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1fee98: 0xac601a70  sw          $zero, 0x1A70($v1)
    ctx->pc = 0x1fee98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6768), GPR_U32(ctx, 0));
    // 0x1fee9c: 0x24681a70  addiu       $t0, $v1, 0x1A70
    ctx->pc = 0x1fee9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 6768));
    // 0x1feea0: 0xa5000006  sh          $zero, 0x6($t0)
    ctx->pc = 0x1feea0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1feea4: 0x24891a78  addiu       $t1, $a0, 0x1A78
    ctx->pc = 0x1feea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 6776));
    // 0x1feea8: 0xac801a78  sw          $zero, 0x1A78($a0)
    ctx->pc = 0x1feea8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A78u, _value); } while (0);
    // 0x1feeac: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1feeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1feeb0: 0xa5200006  sh          $zero, 0x6($t1)
    ctx->pc = 0x1feeb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A7Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A7Eu, _value); } while (0);
    // 0x1feeb4: 0x24aa1a80  addiu       $t2, $a1, 0x1A80
    ctx->pc = 0x1feeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
    // 0x1feeb8: 0xaca01a80  sw          $zero, 0x1A80($a1)
    ctx->pc = 0x1feeb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A80u, _value); } while (0);
    // 0x1feebc: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x1feebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x1feec0: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x1feec0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A86u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A86u, _value); } while (0);
    // 0x1feec4: 0x24cb1a88  addiu       $t3, $a2, 0x1A88
    ctx->pc = 0x1feec4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 6792));
    // 0x1feec8: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x1feec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A88u, _value); } while (0);
    // 0x1feecc: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x1feeccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x1feed0: 0xa5600006  sh          $zero, 0x6($t3)
    ctx->pc = 0x1feed0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A8Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A8Eu, _value); } while (0);
    // 0x1feed4: 0x24ec1a90  addiu       $t4, $a3, 0x1A90
    ctx->pc = 0x1feed4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 6800));
    // 0x1feed8: 0xace01a90  sw          $zero, 0x1A90($a3)
    ctx->pc = 0x1feed8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x701A90u, _value); } while (0);
    // 0x1feedc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1feedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1feee0: 0xa5800006  sh          $zero, 0x6($t4)
    ctx->pc = 0x1feee0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A96u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A96u, _value); } while (0);
    // 0x1feee4: 0x24421a98  addiu       $v0, $v0, 0x1A98
    ctx->pc = 0x1feee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6808));
    // 0x1feee8: 0xa5000004  sh          $zero, 0x4($t0)
    ctx->pc = 0x1feee8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1feeec: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1feeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1feef0: 0xa5200004  sh          $zero, 0x4($t1)
    ctx->pc = 0x1feef0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A7Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A7Cu, _value); } while (0);
    // 0x1feef4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1feef4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feef8: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x1feef8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A84u, _value); } while (0);
    // 0x1feefc: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1feefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fef00: 0xa5600004  sh          $zero, 0x4($t3)
    ctx->pc = 0x1fef00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A8Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A8Cu, _value); } while (0);
    // 0x1fef04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fef08: 0xa5800004  sh          $zero, 0x4($t4)
    ctx->pc = 0x1fef08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x701A94u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x701A94u, _value); } while (0);
    // 0x1fef0c: 0x0  nop
    ctx->pc = 0x1fef0cu;
    // NOP
label_1fef10:
    // 0x1fef10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fef10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fef14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fef14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fef18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fef18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fef1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1fef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1fef20: 0xac4d000c  sw          $t5, 0xC($v0)
    ctx->pc = 0x1fef20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 13));
    // 0x1fef24: 0xa4450010  sh          $a1, 0x10($v0)
    ctx->pc = 0x1fef24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fef28: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1fef28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1fef2c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1fef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1fef30: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1fef30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1fef34: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1fef34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1fef38: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1fef38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1fef3c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1fef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1fef40: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1fef40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1fef44: 0x1464fff2  bne         $v1, $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1FEF44u;
    {
        const bool branch_taken_0x1fef44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FEF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF44u;
        // 0x1fef48: 0x24420038  addiu       $v0, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef44) {
            ctx->pc = 0x1FEF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fef10;
        }
    }
    ctx->pc = 0x1FEF4Cu;
    // 0x1fef4c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1fef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1fef50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fef54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1fef58:
    // 0x1fef58: 0x0  nop
    ctx->pc = 0x1fef58u;
    // NOP
    // 0x1fef5c: 0x0  nop
    ctx->pc = 0x1fef5cu;
    // NOP
    // 0x1fef60: 0x0  nop
    ctx->pc = 0x1fef60u;
    // NOP
    // 0x1fef64: 0x0  nop
    ctx->pc = 0x1fef64u;
    // NOP
    // 0x1fef68: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FEF68u;
    {
        const bool branch_taken_0x1fef68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEF68u;
        // 0x1fef6c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fef68) {
            ctx->pc = 0x1FEF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fef58;
        }
    }
    ctx->pc = 0x1FEF70u;
label_1fef70:
    // 0x1fef70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEF78u;
    // 0x1fef78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fef78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fef7c: 0x0  nop
    ctx->pc = 0x1fef7cu;
    // NOP
    // 0x1fef80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fef80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fef84: 0x0  nop
    ctx->pc = 0x1fef84u;
    // NOP
    // 0x1fef88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fef8c: 0x0  nop
    ctx->pc = 0x1fef8cu;
    // NOP
    // 0x1fef90: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x1fef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1fef94: 0x0  nop
    ctx->pc = 0x1fef94u;
    // NOP
    ctx->pc = 0x1fef98u;
}
