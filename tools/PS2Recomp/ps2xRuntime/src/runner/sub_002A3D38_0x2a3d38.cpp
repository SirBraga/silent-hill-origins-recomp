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

// Function: sub_002A3D38
// Address: 0x2a3d38 - 0x2a3ed0
void sub_002A3D38_0x2a3d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3D38_0x2a3d38");
#endif

    switch (ctx->pc) {
        case 0x2a3e24u: goto label_2a3e24;
        case 0x2a3e6cu: goto label_2a3e6c;
        case 0x2a3e74u: goto label_2a3e74;
        default: break;
    }

    ctx->pc = 0x2a3d38u;

    // 0x2a3d38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a3d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a3d3c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a3d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d40: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a3d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a3d44: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2a3d44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a3d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a3d4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a3d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a3d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a3d54: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A3D54u;
    {
        const bool branch_taken_0x2a3d54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D54u;
        // 0x2a3d58: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d54) {
            ctx->pc = 0x2A3DA4u;
            goto label_2a3da4;
        }
    }
    ctx->pc = 0x2A3D5Cu;
    // 0x2a3d5c: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x2a3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2a3d60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3d64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a3d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2a3d68: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2a3d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2a3d6c: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x2a3d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3d70: 0x2484da40  addiu       $a0, $a0, -0x25C0
    ctx->pc = 0x2a3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957632));
    // 0x2a3d74: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x2a3d74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3d78: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2a3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3d7c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2a3d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a3d80: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3d84: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x2a3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x2a3d88: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x2a3d88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a3d8c: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x2a3d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x2a3d90: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2a3d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2a3d94: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2a3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2a3d98: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2a3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2a3d9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a3d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a3da0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2a3da4:
    // 0x2a3da4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2a3da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a3da8: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x2a3da8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x2a3dac: 0x2642d878  addiu       $v0, $s2, -0x2788
    ctx->pc = 0x2a3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957176));
    // 0x2a3db0: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x2a3db0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x2a3db4: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x2a3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x2a3db8: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x2a3db8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x6AD880u));
    // 0x2a3dbc: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2a3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a3dc0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x2a3dc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3dc4: 0xde46d878  ld          $a2, -0x2788($s2)
    ctx->pc = 0x2a3dc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 4294957176)));
    // 0x2a3dc8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2a3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a3dcc: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x2a3dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x2a3dd0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x2a3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x2a3dd4: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x2a3dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a3dd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2a3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2a3ddc: 0x2444e1c8  addiu       $a0, $v0, -0x1E38
    ctx->pc = 0x2a3ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959560));
    // 0x2a3de0: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A3DE0u;
    {
        const bool branch_taken_0x2a3de0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3DE0u;
        // 0x2a3de4: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3de0) {
            ctx->pc = 0x2A3E14u;
            goto label_2a3e14;
        }
    }
    ctx->pc = 0x2A3DE8u;
    // 0x2a3de8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x2a3de8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a3dec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3df0: 0xdc46e1c8  ld          $a2, -0x1E38($v0)
    ctx->pc = 0x2a3df0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294959560)));
    // 0x2a3df4: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2a3df4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a3df8: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x2a3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x2a3dfc: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2a3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a3e00: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x2a3e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x2a3e04: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x2a3e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x2a3e08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3e0c: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x2a3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x2a3e10: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x2a3e10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_2a3e14:
    // 0x2a3e14: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x2a3e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a3e18: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2a3e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e1c: 0xc0a8e56  jal         func_2A3958
    ctx->pc = 0x2A3E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E24u);
    ctx->pc = 0x2A3E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E1Cu;
    // 0x2a3e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A3958u, 0x2A3E1Cu, 0x2A3E24u)) {
        return;
    }
    ctx->pc = 0x2A3E24u;
label_2a3e24:
    // 0x2a3e24: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3E24u;
    {
        const bool branch_taken_0x2a3e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E24u;
        // 0x2a3e28: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e24) {
            ctx->pc = 0x2A3E38u;
            goto label_2a3e38;
        }
    }
    ctx->pc = 0x2A3E2Cu;
    // 0x2a3e2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3E30u;
    {
        const bool branch_taken_0x2a3e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E30u;
        // 0x2a3e34: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e30) {
            ctx->pc = 0x2A3E3Cu;
            goto label_2a3e3c;
        }
    }
    ctx->pc = 0x2A3E38u;
label_2a3e38:
    // 0x2a3e38: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x2a3e38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_2a3e3c:
    // 0x2a3e3c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2a3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3e40: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2a3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a3e44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2a3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a3e48: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x2a3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x2a3e4c: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x2a3e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a3e50: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2a3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2a3e54: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x2a3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x2a3e58: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2a3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2a3e5c: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x2a3e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3e60: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2a3e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3E64u;
    {
        const bool branch_taken_0x2a3e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E64u;
        // 0x2a3e68: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e64) {
            ctx->pc = 0x2A3E74u;
            goto label_2a3e74;
        }
    }
    ctx->pc = 0x2A3E6Cu;
label_2a3e6c:
    // 0x2a3e6c: 0xc07e3f2  jal         func_1F8FC8
    ctx->pc = 0x2A3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E74u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x2A3E6Cu, 0x2A3E74u)) {
        return;
    }
    ctx->pc = 0x2A3E74u;
label_2a3e74:
    // 0x2a3e74: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A3E74u;
    {
        const bool branch_taken_0x2a3e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E74u;
        // 0x2a3e78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e74) {
            ctx->pc = 0x2A3EB4u;
            goto label_2a3eb4;
        }
    }
    ctx->pc = 0x2A3E7Cu;
    // 0x2a3e7c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a3e80: 0x2643d878  addiu       $v1, $s2, -0x2788
    ctx->pc = 0x2a3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294957176));
    // 0x2a3e84: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x2a3e84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a3e88: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2a3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x2a3e8c: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x2a3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x2a3e90: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x2a3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a3e94: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2a3e94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a3e98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a3e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a3e9c: 0xde47d878  ld          $a3, -0x2788($s2)
    ctx->pc = 0x2a3e9cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 4294957176)));
    // 0x2a3ea0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x2a3ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x2a3ea4: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x2a3ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x2a3ea8: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x2a3ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a3eac: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2A3EACu;
    {
        const bool branch_taken_0x2a3eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EACu;
        // 0x2a3eb0: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3eac) {
            ctx->pc = 0x2A3E6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3e6c;
        }
    }
    ctx->pc = 0x2A3EB4u;
label_2a3eb4:
    // 0x2a3eb4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a3eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3eb8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a3eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3ebc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a3ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3ec0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EC4u;
        // 0x2a3ec8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3ECCu;
    // 0x2a3ecc: 0x0  nop
    ctx->pc = 0x2a3eccu;
    // NOP
    ctx->pc = 0x2a3ed0u;
}
