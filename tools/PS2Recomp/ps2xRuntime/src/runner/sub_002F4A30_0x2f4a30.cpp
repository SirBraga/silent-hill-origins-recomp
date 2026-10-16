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

// Function: sub_002F4A30
// Address: 0x2f4a30 - 0x2f4b20
void sub_002F4A30_0x2f4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4A30_0x2f4a30");
#endif

    switch (ctx->pc) {
        case 0x2f4a5cu: goto label_2f4a5c;
        case 0x2f4a7cu: goto label_2f4a7c;
        case 0x2f4aa4u: goto label_2f4aa4;
        case 0x2f4accu: goto label_2f4acc;
        default: break;
    }

    ctx->pc = 0x2f4a30u;

    // 0x2f4a30: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x2f4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x2f4a34: 0xffb102b0  sd          $s1, 0x2B0($sp)
    ctx->pc = 0x2f4a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 17));
    // 0x2f4a38: 0xffb402e0  sd          $s4, 0x2E0($sp)
    ctx->pc = 0x2f4a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 20));
    // 0x2f4a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a40: 0xffb202c0  sd          $s2, 0x2C0($sp)
    ctx->pc = 0x2f4a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x2f4a44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f4a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a48: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x2f4a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
    // 0x2f4a4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f4a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a50: 0xffbf02f0  sd          $ra, 0x2F0($sp)
    ctx->pc = 0x2f4a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 31));
    // 0x2f4a54: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F4A54u;
    SET_GPR_U32(ctx, 31, 0x2F4A5Cu);
    ctx->pc = 0x2F4A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A54u;
    // 0x2f4a58: 0xffb302d0  sd          $s3, 0x2D0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F4A54u, 0x2F4A5Cu)) {
        return;
    }
    ctx->pc = 0x2F4A5Cu;
label_2f4a5c:
    // 0x2f4a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a60: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F4A60u;
    {
        const bool branch_taken_0x2f4a60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A60u;
        // 0x2f4a64: 0xdfbf02f0  ld          $ra, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a60) {
            ctx->pc = 0x2F4B04u;
            goto label_2f4b04;
        }
    }
    ctx->pc = 0x2F4A68u;
    // 0x2f4a68: 0x27b30220  addiu       $s3, $sp, 0x220
    ctx->pc = 0x2f4a68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2f4a6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f4a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a74: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F4A74u;
    SET_GPR_U32(ctx, 31, 0x2F4A7Cu);
    ctx->pc = 0x2F4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A74u;
    // 0x2f4a78: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F4A74u, 0x2F4A7Cu)) {
        return;
    }
    ctx->pc = 0x2F4A7Cu;
label_2f4a7c:
    // 0x2f4a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a80: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F4A80u;
    {
        const bool branch_taken_0x2f4a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A80u;
        // 0x2f4a84: 0xdfbf02f0  ld          $ra, 0x2F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a80) {
            ctx->pc = 0x2F4B04u;
            goto label_2f4b04;
        }
    }
    ctx->pc = 0x2F4A88u;
    // 0x2f4a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f4a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f4a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4a9c: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F4A9Cu;
    SET_GPR_U32(ctx, 31, 0x2F4AA4u);
    ctx->pc = 0x2F4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4A9Cu;
    // 0x2f4aa0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F4A9Cu, 0x2F4AA4u)) {
        return;
    }
    ctx->pc = 0x2F4AA4u;
label_2f4aa4:
    // 0x2f4aa4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4aa8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f4aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f4aac: 0x432026  xor         $a0, $v0, $v1
    ctx->pc = 0x2f4aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2f4ab0: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F4AB0u;
    {
        const bool branch_taken_0x2f4ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AB0u;
        // 0x2f4ab4: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ab0) {
            ctx->pc = 0x2F4AFCu;
            goto label_2f4afc;
        }
    }
    ctx->pc = 0x2F4AB8u;
    // 0x2f4ab8: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F4AB8u;
    {
        const bool branch_taken_0x2f4ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AB8u;
        // 0x2f4abc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ab8) {
            ctx->pc = 0x2F4B00u;
            goto label_2f4b00;
        }
    }
    ctx->pc = 0x2F4AC0u;
    // 0x2f4ac0: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2f4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2f4ac4: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2F4AC4u;
    SET_GPR_U32(ctx, 31, 0x2F4ACCu);
    ctx->pc = 0x2F4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4AC4u;
    // 0x2f4ac8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2F4AC4u, 0x2F4ACCu)) {
        return;
    }
    ctx->pc = 0x2F4ACCu;
label_2f4acc:
    // 0x2f4acc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f4ad0: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2f4ad0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4ad4: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x2f4ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f4ad8: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x2f4ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f4adc: 0xb2440007  sdl         $a0, 0x7($s2)
    ctx->pc = 0x2f4adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4ae0: 0xb6440000  sdr         $a0, 0x0($s2)
    ctx->pc = 0x2f4ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4ae4: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x2f4ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f4ae8: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x2f4ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f4aec: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x2f4aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4af0: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x2f4af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4af4: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x2f4af4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4af8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x2f4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_2f4afc:
    // 0x2f4afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f4afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4b00:
    // 0x2f4b00: 0xdfbf02f0  ld          $ra, 0x2F0($sp)
    ctx->pc = 0x2f4b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 752)));
label_2f4b04:
    // 0x2f4b04: 0xdfb402e0  ld          $s4, 0x2E0($sp)
    ctx->pc = 0x2f4b04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2f4b08: 0xdfb302d0  ld          $s3, 0x2D0($sp)
    ctx->pc = 0x2f4b08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2f4b0c: 0xdfb202c0  ld          $s2, 0x2C0($sp)
    ctx->pc = 0x2f4b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f4b10: 0xdfb102b0  ld          $s1, 0x2B0($sp)
    ctx->pc = 0x2f4b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f4b14: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x2f4b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f4b18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B18u;
        // 0x2f4b1c: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B20u;
}
