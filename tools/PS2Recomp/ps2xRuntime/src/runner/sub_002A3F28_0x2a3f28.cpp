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

// Function: sub_002A3F28
// Address: 0x2a3f28 - 0x2a4010
void sub_002A3F28_0x2a3f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3F28_0x2a3f28");
#endif

    switch (ctx->pc) {
        case 0x2a3f8cu: goto label_2a3f8c;
        case 0x2a3fe8u: goto label_2a3fe8;
        case 0x2a3ffcu: goto label_2a3ffc;
        default: break;
    }

    ctx->pc = 0x2a3f28u;

    // 0x2a3f28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a3f2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a3f30: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a3f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a3f34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a3f38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a3f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a3f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a3f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f44: 0x2444e1c8  addiu       $a0, $v0, -0x1E38
    ctx->pc = 0x2a3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x2a3f48: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2a3f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3f4c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A3F4Cu;
    {
        const bool branch_taken_0x2a3f4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F4Cu;
        // 0x2a3f50: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3f4c) {
            ctx->pc = 0x2A3F80u;
            goto label_2a3f80;
        }
    }
    ctx->pc = 0x2A3F54u;
    // 0x2a3f54: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2a3f54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a3f58: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3f5c: 0xdc46e1c8  ld          $a2, -0x1E38($v0)
    ctx->pc = 0x2a3f5cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294959560)));
    // 0x2a3f60: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2a3f60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a3f64: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x2a3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x2a3f68: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3f6c: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2a3f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2a3f70: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2a3f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x2a3f74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3f78: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x2a3f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x2a3f7c: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x2a3f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_2a3f80:
    // 0x2a3f80: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a3f84: 0xc0a8e7a  jal         func_2A39E8
    ctx->pc = 0x2A3F84u;
    SET_GPR_U32(ctx, 31, 0x2A3F8Cu);
    ctx->pc = 0x2A3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F84u;
    // 0x2a3f88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A39E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A39E8u, 0x2A3F84u, 0x2A3F8Cu)) {
        return;
    }
    ctx->pc = 0x2A3F8Cu;
label_2a3f8c:
    // 0x2a3f8c: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x2a3f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3f90: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2a3f90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2a3f94: 0x24e3d878  addiu       $v1, $a3, -0x2788
    ctx->pc = 0x2a3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957176));
    // 0x2a3f98: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x2a3f98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x2a3f9c: 0xad230028  sw          $v1, 0x28($t1)
    ctx->pc = 0x2a3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 3));
    // 0x2a3fa0: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2a3fa4: 0x94640008  lhu         $a0, 0x8($v1)
    ctx->pc = 0x2a3fa4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6AD880u));
    // 0x2a3fa8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a3fac: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x2a3facu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a3fb0: 0xdce5d878  ld          $a1, -0x2788($a3)
    ctx->pc = 0x2a3fb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294957176)));
    // 0x2a3fb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a3fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a3fb8: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x2a3fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x2a3fbc: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2a3fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2a3fc0: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x2a3fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a3fc4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3FC4u;
    {
        const bool branch_taken_0x2a3fc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FC4u;
        // 0x2a3fc8: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fc4) {
            ctx->pc = 0x2A3FE8u;
            goto label_2a3fe8;
        }
    }
    ctx->pc = 0x2A3FCCu;
    // 0x2a3fcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a3fd0: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x2a3fd4: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x2a3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x2a3fd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3FD8u;
    {
        const bool branch_taken_0x2a3fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FD8u;
        // 0x2a3fdc: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fd8) {
            ctx->pc = 0x2A3FE8u;
            goto label_2a3fe8;
        }
    }
    ctx->pc = 0x2A3FE0u;
    // 0x2a3fe0: 0xc0808d4  jal         func_202350
    ctx->pc = 0x2A3FE0u;
    SET_GPR_U32(ctx, 31, 0x2A3FE8u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x2A3FE0u, 0x2A3FE8u)) {
        return;
    }
    ctx->pc = 0x2A3FE8u;
label_2a3fe8:
    // 0x2a3fe8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2a3fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2a3fec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3FECu;
    {
        const bool branch_taken_0x2a3fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FECu;
        // 0x2a3ff0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fec) {
            ctx->pc = 0x2A4000u;
            goto label_2a4000;
        }
    }
    ctx->pc = 0x2A3FF4u;
    // 0x2a3ff4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2A3FF4u;
    SET_GPR_U32(ctx, 31, 0x2A3FFCu);
    ctx->pc = 0x2A3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FF4u;
    // 0x2a3ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2A3FF4u, 0x2A3FFCu)) {
        return;
    }
    ctx->pc = 0x2A3FFCu;
label_2a3ffc:
    // 0x2a3ffc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a3ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4000:
    // 0x2a4000: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4004: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a4004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4008: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4008u;
        // 0x2a400c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4010u;
}
