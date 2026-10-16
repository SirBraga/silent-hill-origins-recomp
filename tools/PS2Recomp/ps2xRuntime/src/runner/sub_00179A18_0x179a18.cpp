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

// Function: sub_00179A18
// Address: 0x179a18 - 0x179b20
void sub_00179A18_0x179a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179A18_0x179a18");
#endif

    switch (ctx->pc) {
        case 0x179a5cu: goto label_179a5c;
        case 0x179a6cu: goto label_179a6c;
        case 0x179a7cu: goto label_179a7c;
        case 0x179a84u: goto label_179a84;
        case 0x179ac0u: goto label_179ac0;
        case 0x179adcu: goto label_179adc;
        case 0x179b08u: goto label_179b08;
        default: break;
    }

    ctx->pc = 0x179a18u;

    // 0x179a18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179a1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x179a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x179a20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x179a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x179a24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x179a2c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x179a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x179a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a38: 0x8ca38910  lw          $v1, -0x76F0($a1)
    ctx->pc = 0x179a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8910u));
    // 0x179a3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x179a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179a40: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x179A40u;
    {
        const bool branch_taken_0x179a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x179A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A40u;
        // 0x179a44: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a40) {
            ctx->pc = 0x179AA0u;
            goto label_179aa0;
        }
    }
    ctx->pc = 0x179A48u;
    // 0x179a48: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x179a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x179a4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179A4Cu;
    {
        const bool branch_taken_0x179a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a4c) {
            ctx->pc = 0x179A64u;
            goto label_179a64;
        }
    }
    ctx->pc = 0x179A54u;
    // 0x179a54: 0xc05e720  jal         func_179C80
    ctx->pc = 0x179A54u;
    SET_GPR_U32(ctx, 31, 0x179A5Cu);
    ctx->pc = 0x179A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A54u;
    // 0x179a58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179C80u, 0x179A54u, 0x179A5Cu)) {
        return;
    }
    ctx->pc = 0x179A5Cu;
label_179a5c:
    // 0x179a5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179A5Cu;
    {
        const bool branch_taken_0x179a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A5Cu;
        // 0x179a60: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a5c) {
            ctx->pc = 0x179A88u;
            goto label_179a88;
        }
    }
    ctx->pc = 0x179A64u;
label_179a64:
    // 0x179a64: 0xc0893a2  jal         func_224E88
    ctx->pc = 0x179A64u;
    SET_GPR_U32(ctx, 31, 0x179A6Cu);
    ctx->pc = 0x179A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A64u;
    // 0x179a68: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x179A64u, 0x179A6Cu)) {
        return;
    }
    ctx->pc = 0x179A6Cu;
label_179a6c:
    // 0x179a6c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x179A6Cu;
    {
        const bool branch_taken_0x179a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a6c) {
            ctx->pc = 0x179A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A6Cu;
            // 0x179a70: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A88u;
            goto label_179a88;
        }
    }
    ctx->pc = 0x179A74u;
    // 0x179a74: 0xc0760d0  jal         func_1D8340
    ctx->pc = 0x179A74u;
    SET_GPR_U32(ctx, 31, 0x179A7Cu);
    ctx->pc = 0x1D8340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8340u, 0x179A74u, 0x179A7Cu)) {
        return;
    }
    ctx->pc = 0x179A7Cu;
label_179a7c:
    // 0x179a7c: 0xc08939a  jal         func_224E68
    ctx->pc = 0x179A7Cu;
    SET_GPR_U32(ctx, 31, 0x179A84u);
    ctx->pc = 0x179A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A7Cu;
    // 0x179a80: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x179A7Cu, 0x179A84u)) {
        return;
    }
    ctx->pc = 0x179A84u;
label_179a84:
    // 0x179a84: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x179a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_179a88:
    // 0x179a88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179A88u;
    {
        const bool branch_taken_0x179a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A88u;
        // 0x179a8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a88) {
            ctx->pc = 0x179A9Cu;
            goto label_179a9c;
        }
    }
    ctx->pc = 0x179A90u;
    // 0x179a90: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x179a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x179a94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179A94u;
    {
        const bool branch_taken_0x179a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A94u;
        // 0x179a98: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a94) {
            ctx->pc = 0x179AA0u;
            goto label_179aa0;
        }
    }
    ctx->pc = 0x179A9Cu;
label_179a9c:
    // 0x179a9c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x179a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_179aa0:
    // 0x179aa0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x179aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x179aa4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179aa8: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x179aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x179aac: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x179AACu;
    {
        const bool branch_taken_0x179aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x179AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AACu;
        // 0x179ab0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179aac) {
            ctx->pc = 0x179AC8u;
            goto label_179ac8;
        }
    }
    ctx->pc = 0x179AB4u;
    // 0x179ab4: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x179ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179ab8: 0xc05ec14  jal         func_17B050
    ctx->pc = 0x179AB8u;
    SET_GPR_U32(ctx, 31, 0x179AC0u);
    ctx->pc = 0x179ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AB8u;
    // 0x179abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B050u, 0x179AB8u, 0x179AC0u)) {
        return;
    }
    ctx->pc = 0x179AC0u;
label_179ac0:
    // 0x179ac0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x179ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x179ac4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x179ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_179ac8:
    // 0x179ac8: 0x8c438908  lw          $v1, -0x76F8($v0)
    ctx->pc = 0x179ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936840)));
    // 0x179acc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179ACCu;
    {
        const bool branch_taken_0x179acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x179AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ACCu;
        // 0x179ad0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179acc) {
            ctx->pc = 0x179AE0u;
            goto label_179ae0;
        }
    }
    ctx->pc = 0x179AD4u;
    // 0x179ad4: 0xc05e768  jal         func_179DA0
    ctx->pc = 0x179AD4u;
    SET_GPR_U32(ctx, 31, 0x179ADCu);
    ctx->pc = 0x179AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179AD4u;
    // 0x179ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179DA0u, 0x179AD4u, 0x179ADCu)) {
        return;
    }
    ctx->pc = 0x179ADCu;
label_179adc:
    // 0x179adc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x179adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_179ae0:
    // 0x179ae0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x179ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x179ae4: 0x8c431a90  lw          $v1, 0x1A90($v0)
    ctx->pc = 0x179ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6800)));
    // 0x179ae8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x179AE8u;
    {
        const bool branch_taken_0x179ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x179AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AE8u;
        // 0x179aec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ae8) {
            ctx->pc = 0x179B0Cu;
            goto label_179b0c;
        }
    }
    ctx->pc = 0x179AF0u;
    // 0x179af0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x179af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x179af4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x179af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x179af8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179AF8u;
    {
        const bool branch_taken_0x179af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF8u;
        // 0x179afc: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af8) {
            ctx->pc = 0x179B10u;
            goto label_179b10;
        }
    }
    ctx->pc = 0x179B00u;
    // 0x179b00: 0xc05e366  jal         func_178D98
    ctx->pc = 0x179B00u;
    SET_GPR_U32(ctx, 31, 0x179B08u);
    ctx->pc = 0x179B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B00u;
    // 0x179b04: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178D98u, 0x179B00u, 0x179B08u)) {
        return;
    }
    ctx->pc = 0x179B08u;
label_179b08:
    // 0x179b08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179b0c:
    // 0x179b0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179b10:
    // 0x179b10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x179b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179b18: 0x3e00008  jr          $ra
    ctx->pc = 0x179B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B18u;
        // 0x179b1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179B20u;
}
