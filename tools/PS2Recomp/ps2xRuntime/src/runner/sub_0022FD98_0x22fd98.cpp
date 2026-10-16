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

// Function: sub_0022FD98
// Address: 0x22fd98 - 0x22ff38
void sub_0022FD98_0x22fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FD98_0x22fd98");
#endif

    switch (ctx->pc) {
        case 0x22fda8u: goto label_22fda8;
        case 0x22fde0u: goto label_22fde0;
        case 0x22feb0u: goto label_22feb0;
        case 0x22fee4u: goto label_22fee4;
        case 0x22fee8u: goto label_22fee8;
        case 0x22ff28u: goto label_22ff28;
        default: break;
    }

    ctx->pc = 0x22fd98u;

    // 0x22fd98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fd9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22fda0: 0xc08b73a  jal         func_22DCE8
    ctx->pc = 0x22FDA0u;
    SET_GPR_U32(ctx, 31, 0x22FDA8u);
    ctx->pc = 0x22DCE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22DCE8u, 0x22FDA0u, 0x22FDA8u)) {
        return;
    }
    ctx->pc = 0x22FDA8u;
label_22fda8:
    // 0x22fda8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fdac: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22fdacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB8u));
    // 0x22fdb0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x22FDB0u;
    {
        const bool branch_taken_0x22fdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDB0u;
        // 0x22fdb4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdb0) {
            ctx->pc = 0x22FEA8u;
            goto label_22fea8;
        }
    }
    ctx->pc = 0x22FDB8u;
    // 0x22fdb8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x22fdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x22fdbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
    // 0x22fdc0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x22fdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x22fdc4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22FDC4u;
    {
        const bool branch_taken_0x22fdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FDC4u;
        // 0x22fdc8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fdc4) {
            ctx->pc = 0x22FE00u;
            goto label_22fe00;
        }
    }
    ctx->pc = 0x22FDCCu;
    // 0x22fdcc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x22fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22fdd0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x22fdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x22fdd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22fdd4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x22fdd8: 0xf  sync
    ctx->pc = 0x22fdd8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x22fddc: 0x40f  sync.p
    ctx->pc = 0x22fddcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_22fde0:
    // 0x22fde0: 0x0  nop
    ctx->pc = 0x22fde0u;
    // NOP
    // 0x22fde4: 0x0  nop
    ctx->pc = 0x22fde4u;
    // NOP
    // 0x22fde8: 0x0  nop
    ctx->pc = 0x22fde8u;
    // NOP
    // 0x22fdec: 0x0  nop
    ctx->pc = 0x22fdecu;
    // NOP
    // 0x22fdf0: 0x0  nop
    ctx->pc = 0x22fdf0u;
    // NOP
    // 0x22fdf4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x22FDF4u;
    {
        const bool branch_taken_0x22fdf4 = (false);
        if (branch_taken_0x22fdf4) {
            ctx->pc = 0x22FDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fde0;
        }
    }
    ctx->pc = 0x22FDFCu;
    // 0x22fdfc: 0x0  nop
    ctx->pc = 0x22fdfcu;
    // NOP
label_22fe00:
    // 0x22fe00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fe04: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB4u));
    // 0x22fe08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22FE08u;
    {
        const bool branch_taken_0x22fe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE08u;
        // 0x22fe0c: 0x8f848e4c  lw          $a0, -0x71B4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe08) {
            ctx->pc = 0x22FE60u;
            goto label_22fe60;
        }
    }
    ctx->pc = 0x22FE10u;
    // 0x22fe10: 0x24021121  addiu       $v0, $zero, 0x1121
    ctx->pc = 0x22fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x22fe14: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x22fe14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x22fe18: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22fe18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x22fe1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22fe20: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22fe24: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fe28: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
    // 0x22fe2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22fe30: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22fe34: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22fe38: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x22fe3c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fe40: 0xac223ebc  sw          $v0, 0x3EBC($at)
    ctx->pc = 0x22fe40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
    // 0x22fe44: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x22fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x22fe48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22fe4c: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22fe50: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fe54: 0x8c423eb4  lw          $v0, 0x3EB4($v0)
    ctx->pc = 0x22fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB4u));
    // 0x22fe58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22FE58u;
    {
        const bool branch_taken_0x22fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FE58u;
        // 0x22fe5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe58) {
            ctx->pc = 0x22FE88u;
            goto label_22fe88;
        }
    }
    ctx->pc = 0x22FE60u;
label_22fe60:
    // 0x22fe60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fe64: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x22fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB8u));
    // 0x22fe68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x22fe6c: 0x8c633ebc  lw          $v1, 0x3EBC($v1)
    ctx->pc = 0x22fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22fe70: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22fe70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22fe74: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22fe78: 0x8c843ebc  lw          $a0, 0x3EBC($a0)
    ctx->pc = 0x22fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B3EBCu));
    // 0x22fe7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22fe80: 0x8c423eb0  lw          $v0, 0x3EB0($v0)
    ctx->pc = 0x22fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3EB0u));
    // 0x22fe84: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22fe88:
    // 0x22fe88: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fe88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fe8c: 0xac203eb0  sw          $zero, 0x3EB0($at)
    ctx->pc = 0x22fe8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB0u, _value); } while (0);
    // 0x22fe90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fe94: 0xac203eb4  sw          $zero, 0x3EB4($at)
    ctx->pc = 0x22fe94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB4u, _value); } while (0);
    // 0x22fe98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fe9c: 0xac203eb8  sw          $zero, 0x3EB8($at)
    ctx->pc = 0x22fe9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EB8u, _value); } while (0);
    // 0x22fea0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x22fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x22fea4: 0xac203ebc  sw          $zero, 0x3EBC($at)
    ctx->pc = 0x22fea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B3EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3EBCu, _value); } while (0);
label_22fea8:
    // 0x22fea8: 0xc08b4e0  jal         func_22D380
    ctx->pc = 0x22FEA8u;
    SET_GPR_U32(ctx, 31, 0x22FEB0u);
    ctx->pc = 0x22D380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D380u, 0x22FEA8u, 0x22FEB0u)) {
        return;
    }
    ctx->pc = 0x22FEB0u;
label_22feb0:
    // 0x22feb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22feb4: 0x90423ecc  lbu         $v0, 0x3ECC($v0)
    ctx->pc = 0x22feb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3ECCu));
    // 0x22feb8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x22feb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x22febc: 0x24843ec0  addiu       $a0, $a0, 0x3EC0
    ctx->pc = 0x22febcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    // 0x22fec0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x22fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x22fec4: 0x8ca53ee4  lw          $a1, 0x3EE4($a1)
    ctx->pc = 0x22fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3EE4u));
    // 0x22fec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22fecc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22fed0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fed4: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FED4u;
    {
        const bool branch_taken_0x22fed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x22fed4) {
            ctx->pc = 0x22FEE8u;
            goto label_22fee8;
        }
    }
    ctx->pc = 0x22FEDCu;
    // 0x22fedc: 0xc08b848  jal         func_22E120
    ctx->pc = 0x22FEDCu;
    SET_GPR_U32(ctx, 31, 0x22FEE4u);
    ctx->pc = 0x22E120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E120u, 0x22FEDCu, 0x22FEE4u)) {
        return;
    }
    ctx->pc = 0x22FEE4u;
label_22fee4:
    // 0x22fee4: 0x0  nop
    ctx->pc = 0x22fee4u;
    // NOP
label_22fee8:
    // 0x22fee8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22feec: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22feecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22fef0: 0x0  nop
    ctx->pc = 0x22fef0u;
    // NOP
    // 0x22fef4: 0x0  nop
    ctx->pc = 0x22fef4u;
    // NOP
    // 0x22fef8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22FEF8u;
    {
        const bool branch_taken_0x22fef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fef8) {
            ctx->pc = 0x22FEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fee8;
        }
    }
    ctx->pc = 0x22FF00u;
    // 0x22ff00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ff04: 0x9042415c  lbu         $v0, 0x415C($v0)
    ctx->pc = 0x22ff04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B415Cu));
    // 0x22ff08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22FF08u;
    {
        const bool branch_taken_0x22ff08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff08) {
            ctx->pc = 0x22FEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fee8;
        }
    }
    ctx->pc = 0x22FF10u;
    // 0x22ff10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x22ff14: 0x90423ef8  lbu         $v0, 0x3EF8($v0)
    ctx->pc = 0x22ff14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3EF8u));
    // 0x22ff18: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22FF18u;
    {
        const bool branch_taken_0x22ff18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff18) {
            ctx->pc = 0x22FEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22fee8;
        }
    }
    ctx->pc = 0x22FF20u;
    // 0x22ff20: 0xc08bfce  jal         func_22FF38
    ctx->pc = 0x22FF20u;
    SET_GPR_U32(ctx, 31, 0x22FF28u);
    ctx->pc = 0x22FF38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22FF38u, 0x22FF20u, 0x22FF28u)) {
        return;
    }
    ctx->pc = 0x22FF28u;
label_22ff28:
    // 0x22ff28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FF2Cu;
        // 0x22ff30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FF34u;
    // 0x22ff34: 0x0  nop
    ctx->pc = 0x22ff34u;
    // NOP
    ctx->pc = 0x22ff38u;
}
