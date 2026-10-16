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

// Function: sub_00194330
// Address: 0x194330 - 0x1943a8
void sub_00194330_0x194330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194330_0x194330");
#endif

    switch (ctx->pc) {
        case 0x194358u: goto label_194358;
        case 0x19437cu: goto label_19437c;
        case 0x194394u: goto label_194394;
        default: break;
    }

    ctx->pc = 0x194330u;

    // 0x194330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194334: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x194334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19433c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19433Cu;
    {
        const bool branch_taken_0x19433c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x194340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19433Cu;
        // 0x194340: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19433c) {
            ctx->pc = 0x194394u;
            goto label_194394;
        }
    }
    ctx->pc = 0x194344u;
    // 0x194344: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x194344u;
    {
        const bool branch_taken_0x194344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194344u;
        // 0x194348: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194344) {
            ctx->pc = 0x194384u;
            goto label_194384;
        }
    }
    ctx->pc = 0x19434Cu;
    // 0x19434c: 0x26109948  addiu       $s0, $s0, -0x66B8
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941000));
    // 0x194350: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x194350u;
    SET_GPR_U32(ctx, 31, 0x194358u);
    ctx->pc = 0x194354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194350u;
    // 0x194354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x194350u, 0x194358u)) {
        return;
    }
    ctx->pc = 0x194358u;
label_194358:
    // 0x194358: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x19435c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x19435cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x194360: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x194360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x194364: 0xac62be00  sw          $v0, -0x4200($v1)
    ctx->pc = 0x194364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBE00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBE00u, _value); } while (0);
    // 0x194368: 0x2484be08  addiu       $a0, $a0, -0x41F8
    ctx->pc = 0x194368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950408));
    // 0x19436c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194370: 0x24c643c8  addiu       $a2, $a2, 0x43C8
    ctx->pc = 0x194370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17352));
    // 0x194374: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x194374u;
    SET_GPR_U32(ctx, 31, 0x19437Cu);
    ctx->pc = 0x194378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194374u;
    // 0x194378: 0x24070174  addiu       $a3, $zero, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x194374u, 0x19437Cu)) {
        return;
    }
    ctx->pc = 0x19437Cu;
label_19437c:
    // 0x19437c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19437Cu;
    {
        const bool branch_taken_0x19437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19437Cu;
        // 0x194380: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19437c) {
            ctx->pc = 0x194398u;
            goto label_194398;
        }
    }
    ctx->pc = 0x194384u;
label_194384:
    // 0x194384: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x194384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x194388: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x194388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19438c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x19438Cu;
    SET_GPR_U32(ctx, 31, 0x194394u);
    ctx->pc = 0x194390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19438Cu;
    // 0x194390: 0x2484be08  addiu       $a0, $a0, -0x41F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x19438Cu, 0x194394u)) {
        return;
    }
    ctx->pc = 0x194394u;
label_194394:
    // 0x194394: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194398:
    // 0x194398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19439c: 0x3e00008  jr          $ra
    ctx->pc = 0x19439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19439Cu;
        // 0x1943a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1943A4u;
    // 0x1943a4: 0x0  nop
    ctx->pc = 0x1943a4u;
    // NOP
    ctx->pc = 0x1943a8u;
}
