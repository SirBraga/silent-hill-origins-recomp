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

// Function: sub_00172ED8
// Address: 0x172ed8 - 0x173048
void sub_00172ED8_0x172ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172ED8_0x172ed8");
#endif

    switch (ctx->pc) {
        case 0x172f34u: goto label_172f34;
        case 0x172f40u: goto label_172f40;
        case 0x172f4cu: goto label_172f4c;
        case 0x172f58u: goto label_172f58;
        case 0x172f78u: goto label_172f78;
        case 0x172f8cu: goto label_172f8c;
        case 0x172fa8u: goto label_172fa8;
        case 0x172fc0u: goto label_172fc0;
        case 0x172fccu: goto label_172fcc;
        case 0x172ff0u: goto label_172ff0;
        case 0x172ffcu: goto label_172ffc;
        case 0x173014u: goto label_173014;
        case 0x173020u: goto label_173020;
        default: break;
    }

    ctx->pc = 0x172ed8u;

    // 0x172ed8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x172edc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x172ee0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x172ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x172ee4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x172ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x172ee8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x172ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172eec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x172eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x172ef0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x172ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x172ef4: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x172ef8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x172ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x172efc: 0x24635b20  addiu       $v1, $v1, 0x5B20
    ctx->pc = 0x172efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
    // 0x172f00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x172f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x172f04: 0x26700068  addiu       $s0, $s3, 0x68
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x172f08: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x172f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x172f0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f10: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x172f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x172f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172f1c: 0x26640038  addiu       $a0, $s3, 0x38
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x172f20: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x172f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x172f24: 0x267100a0  addiu       $s1, $s3, 0xA0
    ctx->pc = 0x172f24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x172f28: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x172f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x172f2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x172F2Cu;
    SET_GPR_U32(ctx, 31, 0x172F34u);
    ctx->pc = 0x172F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F2Cu;
    // 0x172f30: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x172F2Cu, 0x172F34u)) {
        return;
    }
    ctx->pc = 0x172F34u;
label_172f34:
    // 0x172f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f38: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x172F38u;
    SET_GPR_U32(ctx, 31, 0x172F40u);
    ctx->pc = 0x172F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F38u;
    // 0x172f3c: 0x26700070  addiu       $s0, $s3, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x172F38u, 0x172F40u)) {
        return;
    }
    ctx->pc = 0x172F40u;
label_172f40:
    // 0x172f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f44: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x172F44u;
    SET_GPR_U32(ctx, 31, 0x172F4Cu);
    ctx->pc = 0x172F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F44u;
    // 0x172f48: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x172F44u, 0x172F4Cu)) {
        return;
    }
    ctx->pc = 0x172F4Cu;
label_172f4c:
    // 0x172f4c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x172f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x172f50: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x172F50u;
    SET_GPR_U32(ctx, 31, 0x172F58u);
    ctx->pc = 0x172F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F50u;
    // 0x172f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x172F50u, 0x172F58u)) {
        return;
    }
    ctx->pc = 0x172F58u;
label_172f58:
    // 0x172f58: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172F58u;
    {
        const bool branch_taken_0x172f58 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x172F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F58u;
        // 0x172f5c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f58) {
            ctx->pc = 0x172F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172f40;
        }
    }
    ctx->pc = 0x172F60u;
    // 0x172f60: 0x26750068  addiu       $s5, $s3, 0x68
    ctx->pc = 0x172f60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 104));
    // 0x172f64: 0x267200a0  addiu       $s2, $s3, 0xA0
    ctx->pc = 0x172f64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x172f68: 0x26740070  addiu       $s4, $s3, 0x70
    ctx->pc = 0x172f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x172f6c: 0x2670005c  addiu       $s0, $s3, 0x5C
    ctx->pc = 0x172f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x172f70: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x172f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172f74: 0x0  nop
    ctx->pc = 0x172f74u;
    // NOP
label_172f78:
    // 0x172f78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172f7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172F7Cu;
    {
        const bool branch_taken_0x172f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F7Cu;
        // 0x172f80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f7c) {
            ctx->pc = 0x172F90u;
            goto label_172f90;
        }
    }
    ctx->pc = 0x172F84u;
    // 0x172f84: 0xc0808d4  jal         func_202350
    ctx->pc = 0x172F84u;
    SET_GPR_U32(ctx, 31, 0x172F8Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x172F84u, 0x172F8Cu)) {
        return;
    }
    ctx->pc = 0x172F8Cu;
label_172f8c:
    // 0x172f8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x172f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_172f90:
    // 0x172f90: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172F90u;
    {
        const bool branch_taken_0x172f90 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x172F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F90u;
        // 0x172f94: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f90) {
            ctx->pc = 0x172F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172f78;
        }
    }
    ctx->pc = 0x172F98u;
    // 0x172f98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x172f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x172f9c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x172f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x172fa0: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x172FA0u;
    SET_GPR_U32(ctx, 31, 0x172FA8u);
    ctx->pc = 0x172FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FA0u;
    // 0x172fa4: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x172FA0u, 0x172FA8u)) {
        return;
    }
    ctx->pc = 0x172FA8u;
label_172fa8:
    // 0x172fa8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x172FA8u;
    {
        const bool branch_taken_0x172fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FA8u;
        // 0x172fac: 0x267000d0  addiu       $s0, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fa8) {
            ctx->pc = 0x172FD8u;
            goto label_172fd8;
        }
    }
    ctx->pc = 0x172FB0u;
    // 0x172fb0: 0x12500009  beq         $s2, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172FB0u;
    {
        const bool branch_taken_0x172fb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x172fb0) {
            ctx->pc = 0x172FD8u;
            goto label_172fd8;
        }
    }
    ctx->pc = 0x172FB8u;
    // 0x172fb8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x172fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x172fbc: 0x0  nop
    ctx->pc = 0x172fbcu;
    // NOP
label_172fc0:
    // 0x172fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fc4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x172FC4u;
    SET_GPR_U32(ctx, 31, 0x172FCCu);
    ctx->pc = 0x172FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FC4u;
    // 0x172fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x172FC4u, 0x172FCCu)) {
        return;
    }
    ctx->pc = 0x172FCCu;
label_172fcc:
    // 0x172fcc: 0x0  nop
    ctx->pc = 0x172fccu;
    // NOP
    // 0x172fd0: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x172FD0u;
    {
        const bool branch_taken_0x172fd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x172FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD0u;
        // 0x172fd4: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd0) {
            ctx->pc = 0x172FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172fc0;
        }
    }
    ctx->pc = 0x172FD8u;
label_172fd8:
    // 0x172fd8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x172FD8u;
    {
        const bool branch_taken_0x172fd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x172FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FD8u;
        // 0x172fdc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fd8) {
            ctx->pc = 0x173008u;
            goto label_173008;
        }
    }
    ctx->pc = 0x172FE0u;
    // 0x172fe0: 0x1290000a  beq         $s4, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x172FE0u;
    {
        const bool branch_taken_0x172fe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        ctx->pc = 0x172FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172FE0u;
        // 0x172fe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172fe0) {
            ctx->pc = 0x17300Cu;
            goto label_17300c;
        }
    }
    ctx->pc = 0x172FE8u;
    // 0x172fe8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x172fec: 0x0  nop
    ctx->pc = 0x172fecu;
    // NOP
label_172ff0:
    // 0x172ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ff4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x172FF4u;
    SET_GPR_U32(ctx, 31, 0x172FFCu);
    ctx->pc = 0x172FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FF4u;
    // 0x172ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x172FF4u, 0x172FFCu)) {
        return;
    }
    ctx->pc = 0x172FFCu;
label_172ffc:
    // 0x172ffc: 0x0  nop
    ctx->pc = 0x172ffcu;
    // NOP
    // 0x173000: 0x1690fffb  bne         $s4, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x173000u;
    {
        const bool branch_taken_0x173000 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x173004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173000u;
        // 0x173004: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173000) {
            ctx->pc = 0x172FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172ff0;
        }
    }
    ctx->pc = 0x173008u;
label_173008:
    // 0x173008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x173008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17300c:
    // 0x17300c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17300Cu;
    SET_GPR_U32(ctx, 31, 0x173014u);
    ctx->pc = 0x173010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17300Cu;
    // 0x173010: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17300Cu, 0x173014u)) {
        return;
    }
    ctx->pc = 0x173014u;
label_173014:
    // 0x173014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x173014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173018: 0xc05d822  jal         func_176088
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 31, 0x173020u);
    ctx->pc = 0x17301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173018u;
    // 0x17301c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x173018u, 0x173020u)) {
        return;
    }
    ctx->pc = 0x173020u;
label_173020:
    // 0x173020: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x173020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173024: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x173024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173028: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x173028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17302c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17302cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173030: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x173030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173034: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x173034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173038: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x173038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17303c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17303cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173040: 0x3e00008  jr          $ra
    ctx->pc = 0x173040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173040u;
        // 0x173044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173048u;
}
