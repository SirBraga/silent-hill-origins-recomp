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

// Function: sub_002FAE80
// Address: 0x2fae80 - 0x2fafc8
void sub_002FAE80_0x2fae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAE80_0x2fae80");
#endif

    ctx->pc = 0x2fae80u;

    // 0x2fae80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fae84: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2fae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fae88: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2fae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2fae8c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2fae8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fae90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fae90u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x2fae94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fae98: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x2fae98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x2fae9c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2fae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2faea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2faea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2faea4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x2faea4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x2faea8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2faea8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x2faeac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAEACu;
    {
        const bool branch_taken_0x2faeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEACu;
        // 0x2faeb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeac) {
            ctx->pc = 0x2FAECCu;
            goto label_2faecc;
        }
    }
    ctx->pc = 0x2FAEB4u;
    // 0x2faeb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2faeb8: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2faeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x2faebc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2faebcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x1000b000
    // 0x2faec0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2faec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2faec4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAEC4u;
    {
        const bool branch_taken_0x2faec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEC4u;
        // 0x2faec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faec4) {
            ctx->pc = 0x2FAEE0u;
            goto label_2faee0;
        }
    }
    ctx->pc = 0x2FAECCu;
label_2faecc:
    // 0x2faecc: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x2faeccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x2faed0: 0xf  sync
    ctx->pc = 0x2faed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2faed4: 0x42000038  ei
    ctx->pc = 0x2faed4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2faed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAED8u;
        // 0x2faedc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAEE0u;
label_2faee0:
    // 0x2faee0: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x2faee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2faee4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2faee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2faee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2faee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2faeec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2faeecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2faef0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FAEF0u;
    {
        const bool branch_taken_0x2faef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEF0u;
        // 0x2faef4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faef0) {
            ctx->pc = 0x2FAF54u;
            goto label_2faf54;
        }
    }
    ctx->pc = 0x2FAEF8u;
    // 0x2faef8: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x2faef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2faefc: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x2faefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x2faf00: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2faf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2faf04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2faf04u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000b010
    // 0x2faf08: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2faf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2faf0c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2faf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2faf10: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x2faf10u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x2faf14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2faf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2faf18: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2faf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2faf1c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2faf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2faf20: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x2faf20u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x2faf24: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2faf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2faf28: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x2faf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x2faf2c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2faf2cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x2faf30: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2faf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x2faf34: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x2faf34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x2faf38: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2faf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2faf3c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2faf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2faf40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2faf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2faf44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2faf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2faf48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2faf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2faf4c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2FAF4Cu;
    {
        const bool branch_taken_0x2faf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF4Cu;
        // 0x2faf50: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf4c) {
            ctx->pc = 0x2FAFB8u;
            goto label_2fafb8;
        }
    }
    ctx->pc = 0x2FAF54u;
label_2faf54:
    // 0x2faf54: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2faf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2faf58: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FAF58u;
    {
        const bool branch_taken_0x2faf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF58u;
        // 0x2faf5c: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf58) {
            ctx->pc = 0x2FAFB8u;
            goto label_2fafb8;
        }
    }
    ctx->pc = 0x2FAF60u;
    // 0x2faf60: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x2faf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2faf64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2faf64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2faf68: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2faf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2faf6c: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x2faf6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x2faf70: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x2faf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x2faf74: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x2faf74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2faf78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2faf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2faf7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2faf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2faf80: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2faf80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2faf84: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x2faf84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x2faf88: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x2faf88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x2faf8c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2faf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2faf90: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x2faf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x2faf94: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2faf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2faf98: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2faf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2faf9c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2faf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2fafa0: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x2fafa0u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x2fafa4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2fafa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2fafa8: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x2fafa8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x2fafac: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x2fafacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2fafb0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fafb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2fafb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2fafb8:
    // 0x2fafb8: 0xf  sync
    ctx->pc = 0x2fafb8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fafbc: 0x42000038  ei
    ctx->pc = 0x2fafbcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2fafc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFC0u;
        // 0x2fafc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAFC8u;
}
