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

// Function: sub_002839A8
// Address: 0x2839a8 - 0x283a78
void sub_002839A8_0x2839a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002839A8_0x2839a8");
#endif

    switch (ctx->pc) {
        case 0x2839d8u: goto label_2839d8;
        case 0x283a54u: goto label_283a54;
        default: break;
    }

    ctx->pc = 0x2839a8u;

    // 0x2839a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2839a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2839ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2839acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2839b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2839b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2839b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2839b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2839b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2839bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2839bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2839c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2839c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839c4: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2839c8: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2839c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2839cc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2839ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2839d0: 0xc0957e4  jal         func_255F90
    ctx->pc = 0x2839D0u;
    SET_GPR_U32(ctx, 31, 0x2839D8u);
    ctx->pc = 0x2839D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2839D0u;
    // 0x2839d4: 0x389c3  sra         $s1, $v1, 7 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255F90u, 0x2839D0u, 0x2839D8u)) {
        return;
    }
    ctx->pc = 0x2839D8u;
label_2839d8:
    // 0x2839d8: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x2839d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2839dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2839dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2839e0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2839E0u;
    {
        const bool branch_taken_0x2839e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2839E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839E0u;
        // 0x2839e4: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839e0) {
            ctx->pc = 0x283A0Cu;
            goto label_283a0c;
        }
    }
    ctx->pc = 0x2839E8u;
    // 0x2839e8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2839e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2839ec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2839ECu;
    {
        const bool branch_taken_0x2839ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839ECu;
        // 0x2839f0: 0x34841002  ori         $a0, $a0, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839ec) {
            ctx->pc = 0x283A4Cu;
            goto label_283a4c;
        }
    }
    ctx->pc = 0x2839F4u;
    // 0x2839f4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2839f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2839f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2839fc: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x2839fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x283a00: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x283a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x283a04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x283A04u;
    {
        const bool branch_taken_0x283a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A04u;
        // 0x283a08: 0x51200b  movn        $a0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a04) {
            ctx->pc = 0x283A4Cu;
            goto label_283a4c;
        }
    }
    ctx->pc = 0x283A0Cu;
label_283a0c:
    // 0x283a0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x283a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283a10: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x283A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A10u;
        // 0x283a14: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283A28u;
            goto label_283a28;
        }
    }
    ctx->pc = 0x283A18u;
    // 0x283a18: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x283A18u;
    {
        const bool branch_taken_0x283a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A18u;
        // 0x283a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a18) {
            ctx->pc = 0x283A44u;
            goto label_283a44;
        }
    }
    ctx->pc = 0x283A20u;
    // 0x283a20: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283A20u;
    {
        const bool branch_taken_0x283a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A20u;
        // 0x283a24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a20) {
            ctx->pc = 0x283A44u;
            goto label_283a44;
        }
    }
    ctx->pc = 0x283A28u;
label_283a28:
    // 0x283a28: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x283a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x283a2c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x283a30: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x283a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x283a34: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x283a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x283a38: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x283a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x283a3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283A3Cu;
    {
        const bool branch_taken_0x283a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A3Cu;
        // 0x283a40: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a3c) {
            ctx->pc = 0x283A4Cu;
            goto label_283a4c;
        }
    }
    ctx->pc = 0x283A44u;
label_283a44:
    // 0x283a44: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x283a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x283a48: 0x34841002  ori         $a0, $a0, 0x1002
    ctx->pc = 0x283a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
label_283a4c:
    // 0x283a4c: 0xc09945a  jal         func_265168
    ctx->pc = 0x283A4Cu;
    SET_GPR_U32(ctx, 31, 0x283A54u);
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x283A4Cu, 0x283A54u)) {
        return;
    }
    ctx->pc = 0x283A54u;
label_283a54:
    // 0x283a54: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x283a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x283a58: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x283a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x283a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283a60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283a64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x283a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x283A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A6Cu;
        // 0x283a70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A74u;
    // 0x283a74: 0x0  nop
    ctx->pc = 0x283a74u;
    // NOP
    ctx->pc = 0x283a78u;
}
