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

// Function: sub_00181530
// Address: 0x181530 - 0x181618
void sub_00181530_0x181530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181530_0x181530");
#endif

    switch (ctx->pc) {
        case 0x181558u: goto label_181558;
        case 0x181578u: goto label_181578;
        case 0x1815b0u: goto label_1815b0;
        case 0x1815c0u: goto label_1815c0;
        case 0x1815c8u: goto label_1815c8;
        case 0x1815d4u: goto label_1815d4;
        default: break;
    }

    ctx->pc = 0x181530u;

    // 0x181530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x181534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x181538: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x181538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18153c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18153cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x181540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x181544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18154c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18154cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x181550: 0xc060698  jal         func_181A60
    ctx->pc = 0x181550u;
    SET_GPR_U32(ctx, 31, 0x181558u);
    ctx->pc = 0x181554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181550u;
    // 0x181554: 0x3c1100ff  lui         $s1, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181A60u, 0x181550u, 0x181558u)) {
        return;
    }
    ctx->pc = 0x181558u;
label_181558:
    // 0x181558: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x181558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x18155c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181560: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x181560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x181564: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181568: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18156c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18156cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181570: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x181570u;
    SET_GPR_U32(ctx, 31, 0x181578u);
    ctx->pc = 0x181574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181570u;
    // 0x181574: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x181570u, 0x181578u)) {
        return;
    }
    ctx->pc = 0x181578u;
label_181578:
    // 0x181578: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x18157c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x181580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x181580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x181584: 0x8e0a0064  lw          $t2, 0x64($s0)
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x181588: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x181588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x18158c: 0x8e080060  lw          $t0, 0x60($s0)
    ctx->pc = 0x18158cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x181590: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181594: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x181594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x181598: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18159c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18159cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815a0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1815a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x1815a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1815a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815a8: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1815A8u;
    SET_GPR_U32(ctx, 31, 0x1815B0u);
    ctx->pc = 0x1815ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815A8u;
    // 0x1815ac: 0x24094000  addiu       $t1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1815A8u, 0x1815B0u)) {
        return;
    }
    ctx->pc = 0x1815B0u;
label_1815b0:
    // 0x1815b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815b4: 0x34058180  ori         $a1, $zero, 0x8180
    ctx->pc = 0x1815b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33152);
    // 0x1815b8: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1815B8u;
    SET_GPR_U32(ctx, 31, 0x1815C0u);
    ctx->pc = 0x1815BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815B8u;
    // 0x1815bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1815B8u, 0x1815C0u)) {
        return;
    }
    ctx->pc = 0x1815C0u;
label_1815c0:
    // 0x1815c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1815c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815c4: 0x0  nop
    ctx->pc = 0x1815c4u;
    // NOP
label_1815c8:
    // 0x1815c8: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x1815c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x1815cc: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1815CCu;
    SET_GPR_U32(ctx, 31, 0x1815D4u);
    ctx->pc = 0x1815D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1815CCu;
    // 0x1815d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1815CCu, 0x1815D4u)) {
        return;
    }
    ctx->pc = 0x1815D4u;
label_1815d4:
    // 0x1815d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1815d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1815D8u;
    {
        const bool branch_taken_0x1815d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815D8u;
        // 0x1815dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1815d8) {
            ctx->pc = 0x1815C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1815c8;
        }
    }
    ctx->pc = 0x1815E0u;
    // 0x1815e0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1815e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1815e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1815e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1815e8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1815e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1815ec: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1815ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1815f0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1815f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1815f4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1815f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1815f8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1815f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1815fc: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1815fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x181600: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x181600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18160c: 0x3e00008  jr          $ra
    ctx->pc = 0x18160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18160Cu;
        // 0x181610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18160Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181614u;
    // 0x181614: 0x0  nop
    ctx->pc = 0x181614u;
    // NOP
    ctx->pc = 0x181618u;
}
