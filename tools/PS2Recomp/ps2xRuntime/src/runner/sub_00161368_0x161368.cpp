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

// Function: sub_00161368
// Address: 0x161368 - 0x161420
void sub_00161368_0x161368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161368_0x161368");
#endif

    switch (ctx->pc) {
        case 0x161390u: goto label_161390;
        case 0x1613b4u: goto label_1613b4;
        case 0x1613c4u: goto label_1613c4;
        case 0x1613e8u: goto label_1613e8;
        case 0x161400u: goto label_161400;
        case 0x161410u: goto label_161410;
        default: break;
    }

    ctx->pc = 0x161368u;

    // 0x161368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16136c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x161370: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161374: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x161374u;
    {
        const bool branch_taken_0x161374 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x161378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161374u;
        // 0x161378: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161374) {
            ctx->pc = 0x161410u;
            goto label_161410;
        }
    }
    ctx->pc = 0x16137Cu;
    // 0x16137c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16137Cu;
    {
        const bool branch_taken_0x16137c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16137Cu;
        // 0x161380: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16137c) {
            ctx->pc = 0x1613F0u;
            goto label_1613f0;
        }
    }
    ctx->pc = 0x161384u;
    // 0x161384: 0x26103730  addiu       $s0, $s0, 0x3730
    ctx->pc = 0x161384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14128));
    // 0x161388: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x161388u;
    SET_GPR_U32(ctx, 31, 0x161390u);
    ctx->pc = 0x16138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161388u;
    // 0x16138c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x161388u, 0x161390u)) {
        return;
    }
    ctx->pc = 0x161390u;
label_161390:
    // 0x161390: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x161390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x161394: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x161394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x161398: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x161398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x16139c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613a0: 0x24c61420  addiu       $a2, $a2, 0x1420
    ctx->pc = 0x1613a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5152));
    // 0x1613a4: 0xac62f590  sw          $v0, -0xA70($v1)
    ctx->pc = 0x1613a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF590u, _value); } while (0);
    // 0x1613a8: 0x240700b8  addiu       $a3, $zero, 0xB8
    ctx->pc = 0x1613a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1613ac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1613ACu;
    SET_GPR_U32(ctx, 31, 0x1613B4u);
    ctx->pc = 0x1613B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613ACu;
    // 0x1613b0: 0x2484f598  addiu       $a0, $a0, -0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1613ACu, 0x1613B4u)) {
        return;
    }
    ctx->pc = 0x1613B4u;
label_1613b4:
    // 0x1613b4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x1613b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x1613b8: 0x26103740  addiu       $s0, $s0, 0x3740
    ctx->pc = 0x1613b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    // 0x1613bc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1613BCu;
    SET_GPR_U32(ctx, 31, 0x1613C4u);
    ctx->pc = 0x1613C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613BCu;
    // 0x1613c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1613BCu, 0x1613C4u)) {
        return;
    }
    ctx->pc = 0x1613C4u;
label_1613c4:
    // 0x1613c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1613c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1613c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1613c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1613cc: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x1613ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x1613d0: 0xac62f59c  sw          $v0, -0xA64($v1)
    ctx->pc = 0x1613d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF59Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF59Cu, _value); } while (0);
    // 0x1613d4: 0x2484f5a0  addiu       $a0, $a0, -0xA60
    ctx->pc = 0x1613d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964640));
    // 0x1613d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1613d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1613dc: 0x24c61468  addiu       $a2, $a2, 0x1468
    ctx->pc = 0x1613dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5224));
    // 0x1613e0: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1613E0u;
    SET_GPR_U32(ctx, 31, 0x1613E8u);
    ctx->pc = 0x1613E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613E0u;
    // 0x1613e4: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1613E0u, 0x1613E8u)) {
        return;
    }
    ctx->pc = 0x1613E8u;
label_1613e8:
    // 0x1613e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1613E8u;
    {
        const bool branch_taken_0x1613e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1613ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1613E8u;
        // 0x1613ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1613e8) {
            ctx->pc = 0x161414u;
            goto label_161414;
        }
    }
    ctx->pc = 0x1613F0u;
label_1613f0:
    // 0x1613f0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1613f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1613f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1613f8: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1613F8u;
    SET_GPR_U32(ctx, 31, 0x161400u);
    ctx->pc = 0x1613FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1613F8u;
    // 0x1613fc: 0x2484f5a0  addiu       $a0, $a0, -0xA60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1613F8u, 0x161400u)) {
        return;
    }
    ctx->pc = 0x161400u;
label_161400:
    // 0x161400: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x161400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x161404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161408: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x161408u;
    SET_GPR_U32(ctx, 31, 0x161410u);
    ctx->pc = 0x16140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161408u;
    // 0x16140c: 0x2484f598  addiu       $a0, $a0, -0xA68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x161408u, 0x161410u)) {
        return;
    }
    ctx->pc = 0x161410u;
label_161410:
    // 0x161410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161414:
    // 0x161414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161418: 0x3e00008  jr          $ra
    ctx->pc = 0x161418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161418u;
        // 0x16141c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161420u;
}
