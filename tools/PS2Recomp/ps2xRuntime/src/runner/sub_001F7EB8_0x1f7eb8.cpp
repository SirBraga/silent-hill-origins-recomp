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

// Function: sub_001F7EB8
// Address: 0x1f7eb8 - 0x1f7fc8
void sub_001F7EB8_0x1f7eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EB8_0x1f7eb8");
#endif

    ctx->pc = 0x1f7eb8u;

    // 0x1f7eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ec0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1f7ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f7ec4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f7ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7ec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7EC8u;
    {
        const bool branch_taken_0x1f7ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EC8u;
        // 0x1f7ecc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ec8) {
            ctx->pc = 0x1F7EE0u;
            goto label_1f7ee0;
        }
    }
    ctx->pc = 0x1F7ED0u;
    // 0x1f7ed0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1f7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1f7ed4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1f7ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f7ed8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7ED8u;
    {
        const bool branch_taken_0x1f7ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ED8u;
        // 0x1f7edc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ed8) {
            ctx->pc = 0x1F7F74u;
            goto label_1f7f74;
        }
    }
    ctx->pc = 0x1F7EE0u;
label_1f7ee0:
    // 0x1f7ee0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1f7ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1f7ee4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7EE4u;
    {
        const bool branch_taken_0x1f7ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EE4u;
        // 0x1f7ee8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ee4) {
            ctx->pc = 0x1F7F38u;
            goto label_1f7f38;
        }
    }
    ctx->pc = 0x1F7EECu;
    // 0x1f7eec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7EECu;
    {
        const bool branch_taken_0x1f7eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7eec) {
            ctx->pc = 0x1F7EFCu;
            goto label_1f7efc;
        }
    }
    ctx->pc = 0x1F7EF4u;
    // 0x1f7ef4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F7EF4u;
    {
        const bool branch_taken_0x1f7ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EF4u;
        // 0x1f7ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ef4) {
            ctx->pc = 0x1F7F74u;
            goto label_1f7f74;
        }
    }
    ctx->pc = 0x1F7EFCu;
label_1f7efc:
    // 0x1f7efc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F7EFCu;
    {
        const bool branch_taken_0x1f7efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EFCu;
        // 0x1f7f00: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7efc) {
            ctx->pc = 0x1F7F78u;
            goto label_1f7f78;
        }
    }
    ctx->pc = 0x1F7F04u;
    // 0x1f7f04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f7f08: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x1f7f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x1f7f0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7F0Cu;
    {
        const bool branch_taken_0x1f7f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F0Cu;
        // 0x1f7f10: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f0c) {
            ctx->pc = 0x1F7F2Cu;
            goto label_1f7f2c;
        }
    }
    ctx->pc = 0x1F7F14u;
    // 0x1f7f14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7f18: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x1f7f18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1f7f1c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F7F1Cu;
    {
        const bool branch_taken_0x1f7f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F1Cu;
        // 0x1f7f20: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f1c) {
            ctx->pc = 0x1F7F70u;
            goto label_1f7f70;
        }
    }
    ctx->pc = 0x1F7F24u;
    // 0x1f7f24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7F24u;
    {
        const bool branch_taken_0x1f7f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F24u;
        // 0x1f7f28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f24) {
            ctx->pc = 0x1F7F70u;
            goto label_1f7f70;
        }
    }
    ctx->pc = 0x1F7F2Cu;
label_1f7f2c:
    // 0x1f7f2c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1f7f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f7f30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F30u;
    {
        const bool branch_taken_0x1f7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F30u;
        // 0x1f7f34: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f30) {
            ctx->pc = 0x1F7F44u;
            goto label_1f7f44;
        }
    }
    ctx->pc = 0x1F7F38u;
label_1f7f38:
    // 0x1f7f38: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1f7f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f7f3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F7F3Cu;
    {
        const bool branch_taken_0x1f7f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F3Cu;
        // 0x1f7f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f3c) {
            ctx->pc = 0x1F7F74u;
            goto label_1f7f74;
        }
    }
    ctx->pc = 0x1F7F44u;
label_1f7f44:
    // 0x1f7f44: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1f7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f7f48: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x1f7f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x1f7f4c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F4Cu;
    {
        const bool branch_taken_0x1f7f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7f4c) {
            ctx->pc = 0x1F7F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F4Cu;
            // 0x1f7f50: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F60u;
            goto label_1f7f60;
        }
    }
    ctx->pc = 0x1F7F54u;
    // 0x1f7f54: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x1f7f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1f7f58: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x1f7f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1f7f5c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1f7f5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_1f7f60:
    // 0x1f7f60: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F60u;
    {
        const bool branch_taken_0x1f7f60 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x1f7f60) {
            ctx->pc = 0x1F7F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7F60u;
            // 0x1f7f64: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7F74u;
            goto label_1f7f74;
        }
    }
    ctx->pc = 0x1F7F68u;
    // 0x1f7f68: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x1f7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1f7f6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f7f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f7f70:
    // 0x1f7f70: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1f7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_1f7f74:
    // 0x1f7f74: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1f7f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_1f7f78:
    // 0x1f7f78: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1f7f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1f7f7c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f7f7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f7f80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f7f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f7f84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1f7f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f7f88: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x1f7f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x1f7f8c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f7f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f7f90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f7f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f7f94: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x1f7f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1f7f98: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f7f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f7f9c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x1f7fa0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f7fa4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1f7fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1f7fa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f7fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f7fac: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x1f7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x1f7fb0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f7fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f7fb4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f7fb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f7fb8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1f7fb8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FC4u;
    // 0x1f7fc4: 0x0  nop
    ctx->pc = 0x1f7fc4u;
    // NOP
    ctx->pc = 0x1f7fc8u;
}
