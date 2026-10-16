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

// Function: sub_001EF948
// Address: 0x1ef948 - 0x1efa28
void sub_001EF948_0x1ef948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF948_0x1ef948");
#endif

    switch (ctx->pc) {
        case 0x1ef978u: goto label_1ef978;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9f4u: goto label_1ef9f4;
        case 0x1efa0cu: goto label_1efa0c;
        default: break;
    }

    ctx->pc = 0x1ef948u;

    // 0x1ef948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef94c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ef950: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ef950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ef954: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x1ef954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x1ef958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef964: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ef964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef968: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1ef968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1ef96c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1ef96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1ef970: 0xc07924a  jal         func_1E4928
    ctx->pc = 0x1EF970u;
    SET_GPR_U32(ctx, 31, 0x1EF978u);
    ctx->pc = 0x1EF974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF970u;
    // 0x1ef974: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4928u, 0x1EF970u, 0x1EF978u)) {
        return;
    }
    ctx->pc = 0x1EF978u;
label_1ef978:
    // 0x1ef978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef97c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef980: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ef980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1ef984: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ef988: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
    // 0x1ef98c: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1ef990: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1ef990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ef994: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ef994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1ef998: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1ef99c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1ef99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1ef9a0: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1ef9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    // 0x1ef9a4: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1ef9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1ef9a8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ef9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ef9ac: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x1ef9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1ef9b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9b4: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x1ef9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x1ef9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ef9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ef9c0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ef9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ef9c4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ef9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ef9c8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1ef9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1ef9cc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ef9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ef9d0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1ef9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1ef9d4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1EF9D4u;
    SET_GPR_U32(ctx, 31, 0x1EF9DCu);
    ctx->pc = 0x1EF9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9D4u;
    // 0x1ef9d8: 0x9467e834  lhu         $a3, -0x17CC($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1EF9D4u, 0x1EF9DCu)) {
        return;
    }
    ctx->pc = 0x1EF9DCu;
label_1ef9dc:
    // 0x1ef9dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1ef9e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ef9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ef9e4: 0x2484f8b8  addiu       $a0, $a0, -0x748
    ctx->pc = 0x1ef9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965432));
    // 0x1ef9e8: 0x24a51f40  addiu       $a1, $a1, 0x1F40
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    // 0x1ef9ec: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1EF9ECu;
    SET_GPR_U32(ctx, 31, 0x1EF9F4u);
    ctx->pc = 0x1EF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF9ECu;
    // 0x1ef9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1EF9ECu, 0x1EF9F4u)) {
        return;
    }
    ctx->pc = 0x1EF9F4u;
label_1ef9f4:
    // 0x1ef9f4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1ef9f8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1ef9fc: 0x2484f8c0  addiu       $a0, $a0, -0x740
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965440));
    // 0x1efa00: 0x24a51f58  addiu       $a1, $a1, 0x1F58
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8024));
    // 0x1efa04: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1EFA04u;
    SET_GPR_U32(ctx, 31, 0x1EFA0Cu);
    ctx->pc = 0x1EFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA04u;
    // 0x1efa08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1EFA04u, 0x1EFA0Cu)) {
        return;
    }
    ctx->pc = 0x1EFA0Cu;
label_1efa0c:
    // 0x1efa0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1efa0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1efa10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efa14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1efa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1efa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFA1Cu;
        // 0x1efa20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFA24u;
    // 0x1efa24: 0x0  nop
    ctx->pc = 0x1efa24u;
    // NOP
    ctx->pc = 0x1efa28u;
}
