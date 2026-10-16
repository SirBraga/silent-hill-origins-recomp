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

// Function: sub_001F58F0
// Address: 0x1f58f0 - 0x1f5bf0
void sub_001F58F0_0x1f58f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F58F0_0x1f58f0");
#endif

    switch (ctx->pc) {
        case 0x1f5944u: goto label_1f5944;
        case 0x1f594cu: goto label_1f594c;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5bb0u: goto label_1f5bb0;
        case 0x1f5bc0u: goto label_1f5bc0;
        default: break;
    }

    ctx->pc = 0x1f58f0u;

    // 0x1f58f0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x1f58f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x1f58f4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f58f8: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x1f58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x1f58fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f58fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5900: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x1f5900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x1f5904: 0x24a52a90  addiu       $a1, $a1, 0x2A90
    ctx->pc = 0x1f5904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10896));
    // 0x1f5908: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x1f5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x1f590c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f590cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5910: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x1f5910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x1f5914: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x1f5914u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x1f5918: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x1f5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x1f591c: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1f591cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1f5920: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x1f5920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x1f5924: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f5924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5928: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x1f5928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x1f592c: 0x3c14006a  lui         $s4, 0x6A
    ctx->pc = 0x1f592cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)106 << 16));
    // 0x1f5930: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x1f5930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x1f5934: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x1f5934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x1f5938: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x1f5938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x1f593c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F593Cu;
    SET_GPR_U32(ctx, 31, 0x1F5944u);
    ctx->pc = 0x1F5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F593Cu;
    // 0x1f5940: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F593Cu, 0x1F5944u)) {
        return;
    }
    ctx->pc = 0x1F5944u;
label_1f5944:
    // 0x1f5944: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x1F5944u;
    SET_GPR_U32(ctx, 31, 0x1F594Cu);
    ctx->pc = 0x1F5948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5944u;
    // 0x1f5948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x1F5944u, 0x1F594Cu)) {
        return;
    }
    ctx->pc = 0x1F594Cu;
label_1f594c:
    // 0x1f594c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f594cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f5950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5954: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f5954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5958: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1f595c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5960: 0x26262a20  addiu       $a2, $s1, 0x2A20
    ctx->pc = 0x1f5960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10784));
    // 0x1f5964: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x1f5964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
    // 0x1f5968: 0x24e72a98  addiu       $a3, $a3, 0x2A98
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10904));
    // 0x1f596c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F596Cu;
    SET_GPR_U32(ctx, 31, 0x1F5974u);
    ctx->pc = 0x1F5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F596Cu;
    // 0x1f5970: 0x24a52a38  addiu       $a1, $a1, 0x2A38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F596Cu, 0x1F5974u)) {
        return;
    }
    ctx->pc = 0x1F5974u;
label_1f5974:
    // 0x1f5974: 0x26052a40  addiu       $a1, $s0, 0x2A40
    ctx->pc = 0x1f5974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10816));
    // 0x1f5978: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5978u;
    SET_GPR_U32(ctx, 31, 0x1F5980u);
    ctx->pc = 0x1F597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5978u;
    // 0x1f597c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5978u, 0x1F5980u)) {
        return;
    }
    ctx->pc = 0x1F5980u;
label_1f5980:
    // 0x1f5980: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x1f5980u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x1f5984: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f5984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f5988: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f598c: 0x83a50020  lb          $a1, 0x20($sp)
    ctx->pc = 0x1f598cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5990: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1f5990u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5994: 0x24712a58  addiu       $s1, $v1, 0x2A58
    ctx->pc = 0x1f5994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10840));
    // 0x1f5998: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5998u;
    {
        const bool branch_taken_0x1f5998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5998u;
        // 0x1f599c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5998) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F59A0u;
    // 0x1f59a0: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f59a4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F59A4u;
    {
        const bool branch_taken_0x1f59a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F59A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59A4u;
        // 0x1f59a8: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59a4) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F59ACu;
    // 0x1f59ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f59b0:
    // 0x1f59b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f59b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f59b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F59B4u;
    {
        const bool branch_taken_0x1f59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f59b4) {
            ctx->pc = 0x1F59C8u;
            goto label_1f59c8;
        }
    }
    ctx->pc = 0x1F59BCu;
    // 0x1f59bc: 0x0  nop
    ctx->pc = 0x1f59bcu;
    // NOP
    // 0x1f59c0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F59C0u;
    {
        const bool branch_taken_0x1f59c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f59c0) {
            ctx->pc = 0x1F59C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F59C0u;
            // 0x1f59c4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F59B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f59b0;
        }
    }
    ctx->pc = 0x1F59C8u;
label_1f59c8:
    // 0x1f59c8: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F59C8u;
    SET_GPR_U32(ctx, 31, 0x1F59D0u);
    ctx->pc = 0x1F59CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59C8u;
    // 0x1f59cc: 0x26fe2a58  addiu       $fp, $s7, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F59C8u, 0x1F59D0u)) {
        return;
    }
    ctx->pc = 0x1F59D0u;
label_1f59d0:
    // 0x1f59d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f59d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f59d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f59d8: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F59D8u;
    SET_GPR_U32(ctx, 31, 0x1F59E0u);
    ctx->pc = 0x1F59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59D8u;
    // 0x1f59dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F59D8u, 0x1F59E0u)) {
        return;
    }
    ctx->pc = 0x1F59E0u;
label_1f59e0:
    // 0x1f59e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f59e4: 0x26072aa8  addiu       $a3, $s0, 0x2AA8
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 10920));
    // 0x1f59e8: 0x26a52a38  addiu       $a1, $s5, 0x2A38
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 10808));
    // 0x1f59ec: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F59ECu;
    SET_GPR_U32(ctx, 31, 0x1F59F4u);
    ctx->pc = 0x1F59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59ECu;
    // 0x1f59f0: 0x26c62a20  addiu       $a2, $s6, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F59ECu, 0x1F59F4u)) {
        return;
    }
    ctx->pc = 0x1F59F4u;
label_1f59f4:
    // 0x1f59f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f59f8: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F59F8u;
    SET_GPR_U32(ctx, 31, 0x1F5A00u);
    ctx->pc = 0x1F59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59F8u;
    // 0x1f59fc: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F59F8u, 0x1F5A00u)) {
        return;
    }
    ctx->pc = 0x1F5A00u;
label_1f5a00:
    // 0x1f5a00: 0x83a30020  lb          $v1, 0x20($sp)
    ctx->pc = 0x1f5a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5a04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5A04u;
    {
        const bool branch_taken_0x1f5a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A04u;
        // 0x1f5a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a04) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F5A0Cu;
    // 0x1f5a0c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5a10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5A10u;
    {
        const bool branch_taken_0x1f5a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A10u;
        // 0x1f5a14: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a10) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F5A18u;
    // 0x1f5a18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5a1c: 0x0  nop
    ctx->pc = 0x1f5a1cu;
    // NOP
label_1f5a20:
    // 0x1f5a20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5a20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5A24u;
    {
        const bool branch_taken_0x1f5a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a24) {
            ctx->pc = 0x1F5A38u;
            goto label_1f5a38;
        }
    }
    ctx->pc = 0x1F5A2Cu;
    // 0x1f5a2c: 0x0  nop
    ctx->pc = 0x1f5a2cu;
    // NOP
    // 0x1f5a30: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5A30u;
    {
        const bool branch_taken_0x1f5a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5a30) {
            ctx->pc = 0x1F5A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5A30u;
            // 0x1f5a34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a20;
        }
    }
    ctx->pc = 0x1F5A38u;
label_1f5a38:
    // 0x1f5a38: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5A38u;
    SET_GPR_U32(ctx, 31, 0x1F5A40u);
    ctx->pc = 0x1F5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A38u;
    // 0x1f5a3c: 0x26f02a58  addiu       $s0, $s7, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5A38u, 0x1F5A40u)) {
        return;
    }
    ctx->pc = 0x1F5A40u;
label_1f5a40:
    // 0x1f5a40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5a44: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1f5a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5a48: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5A48u;
    SET_GPR_U32(ctx, 31, 0x1F5A50u);
    ctx->pc = 0x1F5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A48u;
    // 0x1f5a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5A48u, 0x1F5A50u)) {
        return;
    }
    ctx->pc = 0x1F5A50u;
label_1f5a50:
    // 0x1f5a50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5a54: 0x26872ab8  addiu       $a3, $s4, 0x2AB8
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 10936));
    // 0x1f5a58: 0x26a52a38  addiu       $a1, $s5, 0x2A38
    ctx->pc = 0x1f5a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 10808));
    // 0x1f5a5c: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A64u);
    ctx->pc = 0x1F5A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A5Cu;
    // 0x1f5a60: 0x26c62a20  addiu       $a2, $s6, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5A5Cu, 0x1F5A64u)) {
        return;
    }
    ctx->pc = 0x1F5A64u;
label_1f5a64:
    // 0x1f5a64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5a68: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5A68u;
    SET_GPR_U32(ctx, 31, 0x1F5A70u);
    ctx->pc = 0x1F5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A68u;
    // 0x1f5a6c: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5A68u, 0x1F5A70u)) {
        return;
    }
    ctx->pc = 0x1F5A70u;
label_1f5a70:
    // 0x1f5a70: 0x83a30020  lb          $v1, 0x20($sp)
    ctx->pc = 0x1f5a70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5a74: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5A74u;
    {
        const bool branch_taken_0x1f5a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A74u;
        // 0x1f5a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a74) {
            ctx->pc = 0x1F5AA8u;
            goto label_1f5aa8;
        }
    }
    ctx->pc = 0x1F5A7Cu;
    // 0x1f5a7c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5a80: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5A80u;
    {
        const bool branch_taken_0x1f5a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A80u;
        // 0x1f5a84: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5a80) {
            ctx->pc = 0x1F5AA8u;
            goto label_1f5aa8;
        }
    }
    ctx->pc = 0x1F5A88u;
    // 0x1f5a88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5a8c: 0x0  nop
    ctx->pc = 0x1f5a8cu;
    // NOP
label_1f5a90:
    // 0x1f5a90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5a94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5A94u;
    {
        const bool branch_taken_0x1f5a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5a94) {
            ctx->pc = 0x1F5AA8u;
            goto label_1f5aa8;
        }
    }
    ctx->pc = 0x1F5A9Cu;
    // 0x1f5a9c: 0x0  nop
    ctx->pc = 0x1f5a9cu;
    // NOP
    // 0x1f5aa0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5AA0u;
    {
        const bool branch_taken_0x1f5aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5aa0) {
            ctx->pc = 0x1F5AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5AA0u;
            // 0x1f5aa4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5a90;
        }
    }
    ctx->pc = 0x1F5AA8u;
label_1f5aa8:
    // 0x1f5aa8: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5AA8u;
    SET_GPR_U32(ctx, 31, 0x1F5AB0u);
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5AA8u, 0x1F5AB0u)) {
        return;
    }
    ctx->pc = 0x1F5AB0u;
label_1f5ab0:
    // 0x1f5ab0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5ab4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f5ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ab8: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5AB8u;
    SET_GPR_U32(ctx, 31, 0x1F5AC0u);
    ctx->pc = 0x1F5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AB8u;
    // 0x1f5abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5AB8u, 0x1F5AC0u)) {
        return;
    }
    ctx->pc = 0x1F5AC0u;
label_1f5ac0:
    // 0x1f5ac0: 0xc0be1fc  jal         func_2F87F0
    ctx->pc = 0x1F5AC0u;
    SET_GPR_U32(ctx, 31, 0x1F5AC8u);
    ctx->pc = 0x2F87F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87F0u, 0x1F5AC0u, 0x1F5AC8u)) {
        return;
    }
    ctx->pc = 0x1F5AC8u;
label_1f5ac8:
    // 0x1f5ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5acc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1f5accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f5ad0: 0xc0be22c  jal         func_2F88B0
    ctx->pc = 0x1F5AD0u;
    SET_GPR_U32(ctx, 31, 0x1F5AD8u);
    ctx->pc = 0x1F5AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AD0u;
    // 0x1f5ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F88B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F88B0u, 0x1F5AD0u, 0x1F5AD8u)) {
        return;
    }
    ctx->pc = 0x1F5AD8u;
label_1f5ad8:
    // 0x1f5ad8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f5adc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5ae0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1f5ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ae4: 0x24472ac8  addiu       $a3, $v0, 0x2AC8
    ctx->pc = 0x1f5ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10952));
    // 0x1f5ae8: 0x26a52a38  addiu       $a1, $s5, 0x2A38
    ctx->pc = 0x1f5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 10808));
    // 0x1f5aec: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5AECu;
    SET_GPR_U32(ctx, 31, 0x1F5AF4u);
    ctx->pc = 0x1F5AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AECu;
    // 0x1f5af0: 0x26c62a20  addiu       $a2, $s6, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5AECu, 0x1F5AF4u)) {
        return;
    }
    ctx->pc = 0x1F5AF4u;
label_1f5af4:
    // 0x1f5af4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5af8: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5AF8u;
    SET_GPR_U32(ctx, 31, 0x1F5B00u);
    ctx->pc = 0x1F5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5AF8u;
    // 0x1f5afc: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5AF8u, 0x1F5B00u)) {
        return;
    }
    ctx->pc = 0x1F5B00u;
label_1f5b00:
    // 0x1f5b00: 0x83a30020  lb          $v1, 0x20($sp)
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b04: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5B04u;
    {
        const bool branch_taken_0x1f5b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B04u;
        // 0x1f5b08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b04) {
            ctx->pc = 0x1F5B38u;
            goto label_1f5b38;
        }
    }
    ctx->pc = 0x1F5B0Cu;
    // 0x1f5b0c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5b10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5B10u;
    {
        const bool branch_taken_0x1f5b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B10u;
        // 0x1f5b14: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b10) {
            ctx->pc = 0x1F5B38u;
            goto label_1f5b38;
        }
    }
    ctx->pc = 0x1F5B18u;
    // 0x1f5b18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5b1c: 0x0  nop
    ctx->pc = 0x1f5b1cu;
    // NOP
label_1f5b20:
    // 0x1f5b20: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5b24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5B24u;
    {
        const bool branch_taken_0x1f5b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b24) {
            ctx->pc = 0x1F5B38u;
            goto label_1f5b38;
        }
    }
    ctx->pc = 0x1F5B2Cu;
    // 0x1f5b2c: 0x0  nop
    ctx->pc = 0x1f5b2cu;
    // NOP
    // 0x1f5b30: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5B30u;
    {
        const bool branch_taken_0x1f5b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5b30) {
            ctx->pc = 0x1F5B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B30u;
            // 0x1f5b34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5b20;
        }
    }
    ctx->pc = 0x1F5B38u;
label_1f5b38:
    // 0x1f5b38: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5B38u;
    SET_GPR_U32(ctx, 31, 0x1F5B40u);
    ctx->pc = 0x1F5B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B38u;
    // 0x1f5b3c: 0x26f12a58  addiu       $s1, $s7, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5B38u, 0x1F5B40u)) {
        return;
    }
    ctx->pc = 0x1F5B40u;
label_1f5b40:
    // 0x1f5b40: 0x8fa50420  lw          $a1, 0x420($sp)
    ctx->pc = 0x1f5b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x1f5b44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5b48: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5B48u;
    SET_GPR_U32(ctx, 31, 0x1F5B50u);
    ctx->pc = 0x1F5B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B48u;
    // 0x1f5b4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5B48u, 0x1F5B50u)) {
        return;
    }
    ctx->pc = 0x1F5B50u;
label_1f5b50:
    // 0x1f5b50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f5b54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5b58: 0x26a52a38  addiu       $a1, $s5, 0x2A38
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 10808));
    // 0x1f5b5c: 0x26c62a20  addiu       $a2, $s6, 0x2A20
    ctx->pc = 0x1f5b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10784));
    // 0x1f5b60: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5B60u;
    SET_GPR_U32(ctx, 31, 0x1F5B68u);
    ctx->pc = 0x1F5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B60u;
    // 0x1f5b64: 0x24472ad8  addiu       $a3, $v0, 0x2AD8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5B60u, 0x1F5B68u)) {
        return;
    }
    ctx->pc = 0x1F5B68u;
label_1f5b68:
    // 0x1f5b68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5b6c: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B74u);
    ctx->pc = 0x1F5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B6Cu;
    // 0x1f5b70: 0x26652a40  addiu       $a1, $s3, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5B6Cu, 0x1F5B74u)) {
        return;
    }
    ctx->pc = 0x1F5B74u;
label_1f5b74:
    // 0x1f5b74: 0x83a30020  lb          $v1, 0x20($sp)
    ctx->pc = 0x1f5b74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5b78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5B78u;
    {
        const bool branch_taken_0x1f5b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B78u;
        // 0x1f5b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b78) {
            ctx->pc = 0x1F5BA8u;
            goto label_1f5ba8;
        }
    }
    ctx->pc = 0x1F5B80u;
    // 0x1f5b80: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5b84: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5B84u;
    {
        const bool branch_taken_0x1f5b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B84u;
        // 0x1f5b88: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b84) {
            ctx->pc = 0x1F5BA8u;
            goto label_1f5ba8;
        }
    }
    ctx->pc = 0x1F5B8Cu;
    // 0x1f5b8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f5b90:
    // 0x1f5b90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5b90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5b94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5B94u;
    {
        const bool branch_taken_0x1f5b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b94) {
            ctx->pc = 0x1F5BA8u;
            goto label_1f5ba8;
        }
    }
    ctx->pc = 0x1F5B9Cu;
    // 0x1f5b9c: 0x0  nop
    ctx->pc = 0x1f5b9cu;
    // NOP
    // 0x1f5ba0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5BA0u;
    {
        const bool branch_taken_0x1f5ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5ba0) {
            ctx->pc = 0x1F5BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5BA0u;
            // 0x1f5ba4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5b90;
        }
    }
    ctx->pc = 0x1F5BA8u;
label_1f5ba8:
    // 0x1f5ba8: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5BA8u;
    SET_GPR_U32(ctx, 31, 0x1F5BB0u);
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5BA8u, 0x1F5BB0u)) {
        return;
    }
    ctx->pc = 0x1F5BB0u;
label_1f5bb0:
    // 0x1f5bb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f5bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5bb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f5bb8: 0xc0c9ae4  jal         func_326B90
    ctx->pc = 0x1F5BB8u;
    SET_GPR_U32(ctx, 31, 0x1F5BC0u);
    ctx->pc = 0x1F5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BB8u;
    // 0x1f5bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326B90u, 0x1F5BB8u, 0x1F5BC0u)) {
        return;
    }
    ctx->pc = 0x1F5BC0u;
label_1f5bc0:
    // 0x1f5bc0: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x1f5bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1f5bc4: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x1f5bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1f5bc8: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x1f5bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1f5bcc: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x1f5bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1f5bd0: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x1f5bd4: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x1f5bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x1f5bd8: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x1f5bd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x1f5bdc: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x1f5bdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x1f5be0: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x1f5be0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x1f5be4: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x1f5be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x1f5be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BE8u;
        // 0x1f5bec: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5BF0u;
}
