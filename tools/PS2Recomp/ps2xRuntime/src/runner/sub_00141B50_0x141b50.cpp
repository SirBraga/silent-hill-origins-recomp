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

// Function: sub_00141B50
// Address: 0x141b50 - 0x141c40
void sub_00141B50_0x141b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141B50_0x141b50");
#endif

    switch (ctx->pc) {
        case 0x141b6cu: goto label_141b6c;
        case 0x141b80u: goto label_141b80;
        case 0x141b98u: goto label_141b98;
        case 0x141bc4u: goto label_141bc4;
        case 0x141c18u: goto label_141c18;
        default: break;
    }

    ctx->pc = 0x141b50u;

    // 0x141b50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x141b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x141b54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x141b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x141b58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x141b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x141b5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x141b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x141b64: 0xc0500c6  jal         func_140318
    ctx->pc = 0x141B64u;
    SET_GPR_U32(ctx, 31, 0x141B6Cu);
    ctx->pc = 0x141B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B64u;
    // 0x141b68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140318u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140318u, 0x141B64u, 0x141B6Cu)) {
        return;
    }
    ctx->pc = 0x141B6Cu;
label_141b6c:
    // 0x141b6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x141b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x141b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x141b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141b74: 0x8c464860  lw          $a2, 0x4860($v0)
    ctx->pc = 0x141b74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4860u));
    // 0x141b78: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x141B78u;
    SET_GPR_U32(ctx, 31, 0x141B80u);
    ctx->pc = 0x141B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141B78u;
    // 0x141b7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x141B78u, 0x141B80u)) {
        return;
    }
    ctx->pc = 0x141B80u;
label_141b80:
    // 0x141b80: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x141b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141b88: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x141B88u;
    {
        const bool branch_taken_0x141b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141B88u;
        // 0x141b8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141b88) {
            ctx->pc = 0x141C28u;
            goto label_141c28;
        }
    }
    ctx->pc = 0x141B90u;
    // 0x141b90: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x141b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b94: 0x0  nop
    ctx->pc = 0x141b94u;
    // NOP
label_141b98:
    // 0x141b98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x141b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x141b9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x141B9Cu;
    {
        const bool branch_taken_0x141b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141b9c) {
            ctx->pc = 0x141BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141B9Cu;
            // 0x141ba0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141BB4u;
            goto label_141bb4;
        }
    }
    ctx->pc = 0x141BA4u;
    // 0x141ba4: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x141BA4u;
    {
        const bool branch_taken_0x141ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x141BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BA4u;
        // 0x141ba8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ba4) {
            ctx->pc = 0x141BCCu;
            goto label_141bcc;
        }
    }
    ctx->pc = 0x141BACu;
    // 0x141bac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x141BACu;
    {
        const bool branch_taken_0x141bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BACu;
        // 0x141bb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bac) {
            ctx->pc = 0x141C04u;
            goto label_141c04;
        }
    }
    ctx->pc = 0x141BB4u;
label_141bb4:
    // 0x141bb4: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x141bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x141bb8: 0x2625006c  addiu       $a1, $s1, 0x6C
    ctx->pc = 0x141bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x141bbc: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x141BBCu;
    SET_GPR_U32(ctx, 31, 0x141BC4u);
    ctx->pc = 0x141BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141BBCu;
    // 0x141bc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x141BBCu, 0x141BC4u)) {
        return;
    }
    ctx->pc = 0x141BC4u;
label_141bc4:
    // 0x141bc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x141BC4u;
    {
        const bool branch_taken_0x141bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141BC4u;
        // 0x141bc8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141bc4) {
            ctx->pc = 0x141C00u;
            goto label_141c00;
        }
    }
    ctx->pc = 0x141BCCu;
label_141bcc:
    // 0x141bcc: 0x68c2000f  ldl         $v0, 0xF($a2)
    ctx->pc = 0x141bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x141bd0: 0x6cc20008  ldr         $v0, 0x8($a2)
    ctx->pc = 0x141bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x141bd4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x141bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x141bd8: 0xb222007b  sdl         $v0, 0x7B($s1)
    ctx->pc = 0x141bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141bdc: 0xb6220074  sdr         $v0, 0x74($s1)
    ctx->pc = 0x141bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141be0: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x141be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x141be4: 0x6a22007b  ldl         $v0, 0x7B($s1)
    ctx->pc = 0x141be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x141be8: 0x6e220074  ldr         $v0, 0x74($s1)
    ctx->pc = 0x141be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x141bec: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x141bf0: 0xb2220093  sdl         $v0, 0x93($s1)
    ctx->pc = 0x141bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 147); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141bf4: 0xb622008c  sdr         $v0, 0x8C($s1)
    ctx->pc = 0x141bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 140); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x141bf8: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x141bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x141bfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x141bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_141c00:
    // 0x141c00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x141c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_141c04:
    // 0x141c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x141c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141c08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x141c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141c0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x141c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x141c10: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x141C10u;
    SET_GPR_U32(ctx, 31, 0x141C18u);
    ctx->pc = 0x141C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141C10u;
    // 0x141c14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x141C10u, 0x141C18u)) {
        return;
    }
    ctx->pc = 0x141C18u;
label_141c18:
    // 0x141c18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x141c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141c1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141c20: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x141C20u;
    {
        const bool branch_taken_0x141c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x141C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C20u;
        // 0x141c24: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141c20) {
            ctx->pc = 0x141B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141b98;
        }
    }
    ctx->pc = 0x141C28u;
label_141c28:
    // 0x141c28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x141c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141c2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x141c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141c30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x141c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141c34: 0x3e00008  jr          $ra
    ctx->pc = 0x141C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141C34u;
        // 0x141c38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141C3Cu;
    // 0x141c3c: 0x0  nop
    ctx->pc = 0x141c3cu;
    // NOP
    ctx->pc = 0x141c40u;
}
