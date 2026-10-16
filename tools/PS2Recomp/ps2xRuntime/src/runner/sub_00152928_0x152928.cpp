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

// Function: sub_00152928
// Address: 0x152928 - 0x1529f0
void sub_00152928_0x152928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152928_0x152928");
#endif

    switch (ctx->pc) {
        case 0x152950u: goto label_152950;
        case 0x152974u: goto label_152974;
        case 0x152980u: goto label_152980;
        case 0x15298cu: goto label_15298c;
        case 0x152998u: goto label_152998;
        case 0x1529b0u: goto label_1529b0;
        case 0x1529c0u: goto label_1529c0;
        case 0x1529d0u: goto label_1529d0;
        case 0x1529e0u: goto label_1529e0;
        default: break;
    }

    ctx->pc = 0x152928u;

    // 0x152928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15292c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152930: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x152934: 0x14a2002a  bne         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x152934u;
    {
        const bool branch_taken_0x152934 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x152938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152934u;
        // 0x152938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152934) {
            ctx->pc = 0x1529E0u;
            goto label_1529e0;
        }
    }
    ctx->pc = 0x15293Cu;
    // 0x15293c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x15293Cu;
    {
        const bool branch_taken_0x15293c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x152940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15293Cu;
        // 0x152940: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15293c) {
            ctx->pc = 0x1529A0u;
            goto label_1529a0;
        }
    }
    ctx->pc = 0x152944u;
    // 0x152944: 0x261025e8  addiu       $s0, $s0, 0x25E8
    ctx->pc = 0x152944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9704));
    // 0x152948: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x152948u;
    SET_GPR_U32(ctx, 31, 0x152950u);
    ctx->pc = 0x15294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152948u;
    // 0x15294c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x152948u, 0x152950u)) {
        return;
    }
    ctx->pc = 0x152950u;
label_152950:
    // 0x152950: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x152954: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x152954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x152958: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x152958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x15295c: 0x24070150  addiu       $a3, $zero, 0x150
    ctx->pc = 0x15295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x152960: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x152960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
    // 0x152964: 0xac62efd8  sw          $v0, -0x1028($v1)
    ctx->pc = 0x152964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEFD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEFD8u, _value); } while (0);
    // 0x152968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15296c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15296Cu;
    SET_GPR_U32(ctx, 31, 0x152974u);
    ctx->pc = 0x152970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15296Cu;
    // 0x152970: 0x2484efe0  addiu       $a0, $a0, -0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15296Cu, 0x152974u)) {
        return;
    }
    ctx->pc = 0x152974u;
label_152974:
    // 0x152974: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x152978: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x152978u;
    SET_GPR_U32(ctx, 31, 0x152980u);
    ctx->pc = 0x15297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152978u;
    // 0x15297c: 0x2484efe8  addiu       $a0, $a0, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x152978u, 0x152980u)) {
        return;
    }
    ctx->pc = 0x152980u;
label_152980:
    // 0x152980: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x152984: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x152984u;
    SET_GPR_U32(ctx, 31, 0x15298Cu);
    ctx->pc = 0x152988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152984u;
    // 0x152988: 0x2484eff0  addiu       $a0, $a0, -0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x152984u, 0x15298Cu)) {
        return;
    }
    ctx->pc = 0x15298Cu;
label_15298c:
    // 0x15298c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15298cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x152990: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x152990u;
    SET_GPR_U32(ctx, 31, 0x152998u);
    ctx->pc = 0x152994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152990u;
    // 0x152994: 0x2484eff8  addiu       $a0, $a0, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x152990u, 0x152998u)) {
        return;
    }
    ctx->pc = 0x152998u;
label_152998:
    // 0x152998: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x152998u;
    {
        const bool branch_taken_0x152998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152998u;
        // 0x15299c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152998) {
            ctx->pc = 0x1529E4u;
            goto label_1529e4;
        }
    }
    ctx->pc = 0x1529A0u;
label_1529a0:
    // 0x1529a0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1529a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1529a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1529a8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1529A8u;
    SET_GPR_U32(ctx, 31, 0x1529B0u);
    ctx->pc = 0x1529ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529A8u;
    // 0x1529ac: 0x2484eff8  addiu       $a0, $a0, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1529A8u, 0x1529B0u)) {
        return;
    }
    ctx->pc = 0x1529B0u;
label_1529b0:
    // 0x1529b0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1529b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1529b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1529b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1529b8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1529B8u;
    SET_GPR_U32(ctx, 31, 0x1529C0u);
    ctx->pc = 0x1529BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529B8u;
    // 0x1529bc: 0x2484eff0  addiu       $a0, $a0, -0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1529B8u, 0x1529C0u)) {
        return;
    }
    ctx->pc = 0x1529C0u;
label_1529c0:
    // 0x1529c0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1529c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1529c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1529c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1529c8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1529C8u;
    SET_GPR_U32(ctx, 31, 0x1529D0u);
    ctx->pc = 0x1529CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529C8u;
    // 0x1529cc: 0x2484efe8  addiu       $a0, $a0, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1529C8u, 0x1529D0u)) {
        return;
    }
    ctx->pc = 0x1529D0u;
label_1529d0:
    // 0x1529d0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1529d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1529d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1529d8: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1529D8u;
    SET_GPR_U32(ctx, 31, 0x1529E0u);
    ctx->pc = 0x1529DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1529D8u;
    // 0x1529dc: 0x2484efe0  addiu       $a0, $a0, -0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1529D8u, 0x1529E0u)) {
        return;
    }
    ctx->pc = 0x1529E0u;
label_1529e0:
    // 0x1529e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1529e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1529e4:
    // 0x1529e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1529e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1529e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1529E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1529ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529E8u;
        // 0x1529ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1529E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1529F0u;
}
