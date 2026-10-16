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

// Function: sub_001718E8
// Address: 0x1718e8 - 0x171978
void sub_001718E8_0x1718e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001718E8_0x1718e8");
#endif

    switch (ctx->pc) {
        case 0x171910u: goto label_171910;
        case 0x171934u: goto label_171934;
        case 0x171940u: goto label_171940;
        case 0x17195cu: goto label_17195c;
        default: break;
    }

    ctx->pc = 0x1718e8u;

    // 0x1718e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1718e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1718ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1718ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1718f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1718f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1718f4: 0x14a20019  bne         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1718F4u;
    {
        const bool branch_taken_0x1718f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1718F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718F4u;
        // 0x1718f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718f4) {
            ctx->pc = 0x17195Cu;
            goto label_17195c;
        }
    }
    ctx->pc = 0x1718FCu;
    // 0x1718fc: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1718FCu;
    {
        const bool branch_taken_0x1718fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x171900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1718FCu;
        // 0x171900: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1718fc) {
            ctx->pc = 0x17194Cu;
            goto label_17194c;
        }
    }
    ctx->pc = 0x171904u;
    // 0x171904: 0x26105770  addiu       $s0, $s0, 0x5770
    ctx->pc = 0x171904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22384));
    // 0x171908: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x171908u;
    SET_GPR_U32(ctx, 31, 0x171910u);
    ctx->pc = 0x17190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171908u;
    // 0x17190c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x171908u, 0x171910u)) {
        return;
    }
    ctx->pc = 0x171910u;
label_171910:
    // 0x171910: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x171910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x171914: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x171914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x171918: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x171918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x17191c: 0xac62f770  sw          $v0, -0x890($v1)
    ctx->pc = 0x17191cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF770u, _value); } while (0);
    // 0x171920: 0x2484f778  addiu       $a0, $a0, -0x888
    ctx->pc = 0x171920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965112));
    // 0x171924: 0x24070120  addiu       $a3, $zero, 0x120
    ctx->pc = 0x171924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x171928: 0x24c61978  addiu       $a2, $a2, 0x1978
    ctx->pc = 0x171928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6520));
    // 0x17192c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x17192Cu;
    SET_GPR_U32(ctx, 31, 0x171934u);
    ctx->pc = 0x171930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17192Cu;
    // 0x171930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x17192Cu, 0x171934u)) {
        return;
    }
    ctx->pc = 0x171934u;
label_171934:
    // 0x171934: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x171934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x171938: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x171938u;
    SET_GPR_U32(ctx, 31, 0x171940u);
    ctx->pc = 0x17193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171938u;
    // 0x17193c: 0x24845780  addiu       $a0, $a0, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x171938u, 0x171940u)) {
        return;
    }
    ctx->pc = 0x171940u;
label_171940:
    // 0x171940: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x171940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x171944: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x171944u;
    {
        const bool branch_taken_0x171944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171944u;
        // 0x171948: 0xac62f77c  sw          $v0, -0x884($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171944) {
            ctx->pc = 0x17195Cu;
            goto label_17195c;
        }
    }
    ctx->pc = 0x17194Cu;
label_17194c:
    // 0x17194c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17194cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x171950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x171950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x171954: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x171954u;
    SET_GPR_U32(ctx, 31, 0x17195Cu);
    ctx->pc = 0x171958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171954u;
    // 0x171958: 0x2484f778  addiu       $a0, $a0, -0x888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x171954u, 0x17195Cu)) {
        return;
    }
    ctx->pc = 0x17195Cu;
label_17195c:
    // 0x17195c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17195cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171964: 0x3e00008  jr          $ra
    ctx->pc = 0x171964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171964u;
        // 0x171968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17196Cu;
    // 0x17196c: 0x0  nop
    ctx->pc = 0x17196cu;
    // NOP
    // 0x171970: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x171970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x171974: 0x0  nop
    ctx->pc = 0x171974u;
    // NOP
    ctx->pc = 0x171978u;
}
