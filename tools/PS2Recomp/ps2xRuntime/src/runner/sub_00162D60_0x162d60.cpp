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

// Function: sub_00162D60
// Address: 0x162d60 - 0x162e78
void sub_00162D60_0x162d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162D60_0x162d60");
#endif

    switch (ctx->pc) {
        case 0x162d88u: goto label_162d88;
        case 0x162dc4u: goto label_162dc4;
        case 0x162ddcu: goto label_162ddc;
        case 0x162df4u: goto label_162df4;
        case 0x162e0cu: goto label_162e0c;
        case 0x162e28u: goto label_162e28;
        case 0x162e30u: goto label_162e30;
        default: break;
    }

    ctx->pc = 0x162d60u;

    // 0x162d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162d64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x162d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162d68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x162d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x162d6c: 0x24046b24  addiu       $a0, $zero, 0x6B24
    ctx->pc = 0x162d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27428));
    // 0x162d70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x162d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x162d74: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x162d74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x162d78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x162d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x162d7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162d80: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x162D80u;
    SET_GPR_U32(ctx, 31, 0x162D88u);
    ctx->pc = 0x162D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162D80u;
    // 0x162d84: 0x26128668  addiu       $s2, $s0, -0x7998 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x162D80u, 0x162D88u)) {
        return;
    }
    ctx->pc = 0x162D88u;
label_162d88:
    // 0x162d88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x162d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162d90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x162d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x162d94: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x162d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x162d98: 0x24423eb0  addiu       $v0, $v0, 0x3EB0
    ctx->pc = 0x162d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16048));
    // 0x162d9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x162d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x162da0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x162da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x162da4: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x162da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x162da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162db4: 0xa2201008  sb          $zero, 0x1008($s1)
    ctx->pc = 0x162db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4104), (uint8_t)GPR_U32(ctx, 0));
    // 0x162db8: 0xae20648c  sw          $zero, 0x648C($s1)
    ctx->pc = 0x162db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 25740), GPR_U32(ctx, 0));
    // 0x162dbc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x162DBCu;
    SET_GPR_U32(ctx, 31, 0x162DC4u);
    ctx->pc = 0x162DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DBCu;
    // 0x162dc0: 0xae206490  sw          $zero, 0x6490($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 25744), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x162DBCu, 0x162DC4u)) {
        return;
    }
    ctx->pc = 0x162DC4u;
label_162dc4:
    // 0x162dc4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x162dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x162dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dcc: 0x24a5f888  addiu       $a1, $a1, -0x778
    ctx->pc = 0x162dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    // 0x162dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dd4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x162DD4u;
    SET_GPR_U32(ctx, 31, 0x162DDCu);
    ctx->pc = 0x162DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DD4u;
    // 0x162dd8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x162DD4u, 0x162DDCu)) {
        return;
    }
    ctx->pc = 0x162DDCu;
label_162ddc:
    // 0x162ddc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x162ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x162de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162de4: 0x24a5f890  addiu       $a1, $a1, -0x770
    ctx->pc = 0x162de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965392));
    // 0x162de8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dec: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x162DECu;
    SET_GPR_U32(ctx, 31, 0x162DF4u);
    ctx->pc = 0x162DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162DECu;
    // 0x162df0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x162DECu, 0x162DF4u)) {
        return;
    }
    ctx->pc = 0x162DF4u;
label_162df4:
    // 0x162df4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x162df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x162df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162dfc: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x162dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x162e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e04: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x162E04u;
    SET_GPR_U32(ctx, 31, 0x162E0Cu);
    ctx->pc = 0x162E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E04u;
    // 0x162e08: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x162E04u, 0x162E0Cu)) {
        return;
    }
    ctx->pc = 0x162E0Cu;
label_162e0c:
    // 0x162e0c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x162e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x162e10: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x162e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x162e14: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x162e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x162e18: 0x2484f5e0  addiu       $a0, $a0, -0xA20
    ctx->pc = 0x162e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
    // 0x162e1c: 0x24a53e18  addiu       $a1, $a1, 0x3E18
    ctx->pc = 0x162e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15896));
    // 0x162e20: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x162E20u;
    SET_GPR_U32(ctx, 31, 0x162E28u);
    ctx->pc = 0x162E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162E20u;
    // 0x162e24: 0x24c63e38  addiu       $a2, $a2, 0x3E38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x162E20u, 0x162E28u)) {
        return;
    }
    ctx->pc = 0x162E28u;
label_162e28:
    // 0x162e28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162e2c: 0x26233c0c  addiu       $v1, $s1, 0x3C0C
    ctx->pc = 0x162e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15372));
label_162e30:
    // 0x162e30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x162e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x162e34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162e38: 0x2c820060  sltiu       $v0, $a0, 0x60
    ctx->pc = 0x162e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x162e3c: 0x0  nop
    ctx->pc = 0x162e3cu;
    // NOP
    // 0x162e40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x162E40u;
    {
        const bool branch_taken_0x162e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E40u;
        // 0x162e44: 0x2463006c  addiu       $v1, $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162e40) {
            ctx->pc = 0x162E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162e30;
        }
    }
    ctx->pc = 0x162E48u;
    // 0x162e48: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x162e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x162e4c: 0xae206b20  sw          $zero, 0x6B20($s1)
    ctx->pc = 0x162e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27424), GPR_U32(ctx, 0));
    // 0x162e50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x162e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e54: 0x8e028668  lw          $v0, -0x7998($s0)
    ctx->pc = 0x162e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
    // 0x162e58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x162e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e5c: 0xac40648c  sw          $zero, 0x648C($v0)
    ctx->pc = 0x162e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25740), GPR_U32(ctx, 0));
    // 0x162e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e64: 0x8e038668  lw          $v1, -0x7998($s0)
    ctx->pc = 0x162e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
    // 0x162e68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x162e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e6c: 0xa0601008  sb          $zero, 0x1008($v1)
    ctx->pc = 0x162e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4104), (uint8_t)GPR_U32(ctx, 0));
    // 0x162e70: 0x3e00008  jr          $ra
    ctx->pc = 0x162E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162E70u;
        // 0x162e74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E78u;
}
