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

// Function: sub_002F88B0
// Address: 0x2f88b0 - 0x2f8c40
void sub_002F88B0_0x2f88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F88B0_0x2f88b0");
#endif

    switch (ctx->pc) {
        case 0x2f8918u: goto label_2f8918;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8b30u: goto label_2f8b30;
        case 0x2f8be4u: goto label_2f8be4;
        default: break;
    }

    ctx->pc = 0x2f88b0u;

    // 0x2f88b0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f88b4: 0x3c0d0072  lui         $t5, 0x72
    ctx->pc = 0x2f88b4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)114 << 16));
    // 0x2f88b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f88b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f88bc: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2f88bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2f88c0: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f88c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f88c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f88c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f88c8: 0x26027c00  addiu       $v0, $s0, 0x7C00
    ctx->pc = 0x2f88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 31744));
    // 0x2f88cc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f88ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f88d0: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x2f88d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    // 0x2f88d4: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x2f88d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88d8: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x2f88d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x2f88dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f88dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f88e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f88e4: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x2f88e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f88e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f88e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f88ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f88ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88f0: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x2f88f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x2f88f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f88f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f88f8: 0xffa800e0  sd          $t0, 0xE0($sp)
    ctx->pc = 0x2f88f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x2f88fc: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x2f88fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x2f8900: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x2f8900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x2f8904: 0xffab00f8  sd          $t3, 0xF8($sp)
    ctx->pc = 0x2f8904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x2f8908: 0xae027c00  sw          $v0, 0x7C00($s0)
    ctx->pc = 0x2f8908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x727C00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x727C00u, _value); } while (0);
    // 0x2f890c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f8910: 0x8c71fff8  lw          $s1, -0x8($v1)
    ctx->pc = 0x2f8910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2f8914: 0x0  nop
    ctx->pc = 0x2f8914u;
    // NOP
label_2f8918:
    // 0x2f8918: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2f8918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2f891c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f891cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f8920: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x2f8920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2f8924: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2f8924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2f8928: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2f8928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2f892c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F892Cu;
    {
        const bool branch_taken_0x2f892c = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x2f892c) {
            ctx->pc = 0x2F8918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F8934u;
    // 0x2f8934: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8934u;
    {
        const bool branch_taken_0x2f8934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8934u;
        // 0x2f8938: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8934) {
            ctx->pc = 0x2F8948u;
            goto label_2f8948;
        }
    }
    ctx->pc = 0x2F893Cu;
    // 0x2f893c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f8940: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2f8940u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8944: 0x8c526668  lw          $s2, 0x6668($v0)
    ctx->pc = 0x2f8944u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x686668u));
label_2f8948:
    // 0x2f8948: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x2f8948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x2f894c: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F894Cu;
    {
        const bool branch_taken_0x2f894c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F894Cu;
        // 0x2f8950: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f894c) {
            ctx->pc = 0x2F89B4u;
            goto label_2f89b4;
        }
    }
    ctx->pc = 0x2F8954u;
    // 0x2f8954: 0x25837c00  addiu       $v1, $t4, 0x7C00
    ctx->pc = 0x2f8954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8958: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f895c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F895Cu;
    {
        const bool branch_taken_0x2f895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F895Cu;
        // 0x2f8960: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f895c) {
            ctx->pc = 0x2F898Cu;
            goto label_2f898c;
        }
    }
    ctx->pc = 0x2F8964u;
    // 0x2f8964: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f8968: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f8968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f896c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2f896cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2f8970: 0x8c546680  lw          $s4, 0x6680($v0)
    ctx->pc = 0x2f8970u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x686680u));
    // 0x2f8974: 0xac436680  sw          $v1, 0x6680($v0)
    ctx->pc = 0x2f8974u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x686680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686680u, _value); } while (0);
    // 0x2f8978: 0xac85668c  sw          $a1, 0x668C($a0)
    ctx->pc = 0x2f8978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x68668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68668Cu, _value); } while (0);
    // 0x2f897c: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f897cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8980: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f8980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f8984: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2F8984u;
    {
        const bool branch_taken_0x2f8984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8984u;
        // 0x2f8988: 0xac436698  sw          $v1, 0x6698($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 26264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8984) {
            ctx->pc = 0x2F89ECu;
            goto label_2f89ec;
        }
    }
    ctx->pc = 0x2F898Cu;
label_2f898c:
    // 0x2f898c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f8990: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2f8990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f8994: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2f8994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2f8998: 0x8c546684  lw          $s4, 0x6684($v0)
    ctx->pc = 0x2f8998u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x686684u));
    // 0x2f899c: 0xac436684  sw          $v1, 0x6684($v0)
    ctx->pc = 0x2f899cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x686684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686684u, _value); } while (0);
    // 0x2f89a0: 0xac856690  sw          $a1, 0x6690($a0)
    ctx->pc = 0x2f89a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x686690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686690u, _value); } while (0);
    // 0x2f89a4: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f89a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f89a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f89ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F89ACu;
    {
        const bool branch_taken_0x2f89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89ACu;
        // 0x2f89b0: 0xac43669c  sw          $v1, 0x669C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 26268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89ac) {
            ctx->pc = 0x2F89ECu;
            goto label_2f89ec;
        }
    }
    ctx->pc = 0x2F89B4u;
label_2f89b4:
    // 0x2f89b4: 0x34028170  ori         $v0, $zero, 0x8170
    ctx->pc = 0x2f89b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
    // 0x2f89b8: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F89B8u;
    {
        const bool branch_taken_0x2f89b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89B8u;
        // 0x2f89bc: 0x34028130  ori         $v0, $zero, 0x8130 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89b8) {
            ctx->pc = 0x2F89F0u;
            goto label_2f89f0;
        }
    }
    ctx->pc = 0x2F89C0u;
    // 0x2f89c0: 0x25837c00  addiu       $v1, $t4, 0x7C00
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f89c4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x2f89c8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2f89c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f89cc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2f89ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2f89d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2f89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f89d4: 0x8c946688  lw          $s4, 0x6688($a0)
    ctx->pc = 0x2f89d4u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x686688u));
    // 0x2f89d8: 0xac826688  sw          $v0, 0x6688($a0)
    ctx->pc = 0x2f89d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x686688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686688u, _value); } while (0);
    // 0x2f89dc: 0xaca66694  sw          $a2, 0x6694($a1)
    ctx->pc = 0x2f89dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x686694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x686694u, _value); } while (0);
    // 0x2f89e0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x2f89e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89e4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f89e8: 0xac4366a0  sw          $v1, 0x66A0($v0)
    ctx->pc = 0x2f89e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6866A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6866A0u, _value); } while (0);
label_2f89ec:
    // 0x2f89ec: 0x34028130  ori         $v0, $zero, 0x8130
    ctx->pc = 0x2f89ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
label_2f89f0:
    // 0x2f89f0: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F89F0u;
    {
        const bool branch_taken_0x2f89f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F89F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89F0u;
        // 0x2f89f4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89f0) {
            ctx->pc = 0x2F8A0Cu;
            goto label_2f8a0c;
        }
    }
    ctx->pc = 0x2F89F8u;
    // 0x2f89f8: 0x340281a0  ori         $v0, $zero, 0x81A0
    ctx->pc = 0x2f89f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33184);
    // 0x2f89fc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F89FCu;
    {
        const bool branch_taken_0x2f89fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F89FCu;
        // 0x2f8a00: 0x340281b0  ori         $v0, $zero, 0x81B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f89fc) {
            ctx->pc = 0x2F8A0Cu;
            goto label_2f8a0c;
        }
    }
    ctx->pc = 0x2F8A04u;
    // 0x2f8a04: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F8A04u;
    {
        const bool branch_taken_0x2f8a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A04u;
        // 0x2f8a08: 0x34028140  ori         $v0, $zero, 0x8140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33088);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a04) {
            ctx->pc = 0x2F8A4Cu;
            goto label_2f8a4c;
        }
    }
    ctx->pc = 0x2F8A0Cu;
label_2f8a0c:
    // 0x2f8a0c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8A0Cu;
    {
        const bool branch_taken_0x2f8a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A0Cu;
        // 0x2f8a10: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a0c) {
            ctx->pc = 0x2F8A20u;
            goto label_2f8a20;
        }
    }
    ctx->pc = 0x2F8A14u;
    // 0x2f8a14: 0x8c43666c  lw          $v1, 0x666C($v0)
    ctx->pc = 0x2f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26220)));
    // 0x2f8a18: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2f8a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a1c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8a1cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a20:
    // 0x2f8a20: 0x25897c00  addiu       $t1, $t4, 0x7C00
    ctx->pc = 0x2f8a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8a24: 0x8d827c00  lw          $v0, 0x7C00($t4)
    ctx->pc = 0x2f8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 31744)));
    // 0x2f8a28: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x2f8a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2f8a2c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f8a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a30: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x2f8a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2f8a34: 0x25a47c40  addiu       $a0, $t5, 0x7C40
    ctx->pc = 0x2f8a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 31808));
    // 0x2f8a38: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f8a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f8a3c: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x2f8a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x2f8a40: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2f8a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f8a44: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2F8A44u;
    {
        const bool branch_taken_0x2f8a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A44u;
        // 0x2f8a48: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a44) {
            ctx->pc = 0x2F8BDCu;
            goto label_2f8bdc;
        }
    }
    ctx->pc = 0x2F8A4Cu;
label_2f8a4c:
    // 0x2f8a4c: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F8A4Cu;
    {
        const bool branch_taken_0x2f8a4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A4Cu;
        // 0x2f8a50: 0x340281c0  ori         $v0, $zero, 0x81C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a4c) {
            ctx->pc = 0x2F8AB0u;
            goto label_2f8ab0;
        }
    }
    ctx->pc = 0x2F8A54u;
    // 0x2f8a54: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8A54u;
    {
        const bool branch_taken_0x2f8a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A54u;
        // 0x2f8a58: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a54) {
            ctx->pc = 0x2F8A68u;
            goto label_2f8a68;
        }
    }
    ctx->pc = 0x2F8A5Cu;
    // 0x2f8a5c: 0x8c43666c  lw          $v1, 0x666C($v0)
    ctx->pc = 0x2f8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26220)));
    // 0x2f8a60: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2f8a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a64: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8a64u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a68:
    // 0x2f8a68: 0x25877c00  addiu       $a3, $t4, 0x7C00
    ctx->pc = 0x2f8a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8a6c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f8a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a70: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2f8a74: 0x25a47c40  addiu       $a0, $t5, 0x7C40
    ctx->pc = 0x2f8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 31808));
    // 0x2f8a78: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x2f8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2f8a7c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2f8a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f8a80: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f8a80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8a84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f8a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f8a88: 0x34a58140  ori         $a1, $a1, 0x8140
    ctx->pc = 0x2f8a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33088);
    // 0x2f8a8c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x2f8a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f8a90: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8A90u;
    SET_GPR_U32(ctx, 31, 0x2F8A98u);
    ctx->pc = 0x2F8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8A90u;
    // 0x2f8a94: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8A90u, 0x2F8A98u)) {
        return;
    }
    ctx->pc = 0x2F8A98u;
label_2f8a98:
    // 0x2f8a98: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x2F8A98u;
    {
        const bool branch_taken_0x2f8a98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8A98u;
        // 0x2f8a9c: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a98) {
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8AA0u;
    // 0x2f8aa0: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f8aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8aa4: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x2f8aa4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8aa8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2F8AA8u;
    {
        const bool branch_taken_0x2f8aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AA8u;
        // 0x2f8aac: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8aa8) {
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8AB0u;
label_2f8ab0:
    // 0x2f8ab0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8AB0u;
    {
        const bool branch_taken_0x2f8ab0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AB0u;
        // 0x2f8ab4: 0x340281d0  ori         $v0, $zero, 0x81D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ab0) {
            ctx->pc = 0x2F8AC0u;
            goto label_2f8ac0;
        }
    }
    ctx->pc = 0x2F8AB8u;
    // 0x2f8ab8: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F8AB8u;
    {
        const bool branch_taken_0x2f8ab8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8ab8) {
            ctx->pc = 0x2F8B54u;
            goto label_2f8b54;
        }
    }
    ctx->pc = 0x2F8AC0u;
label_2f8ac0:
    // 0x2f8ac0: 0x25907c00  addiu       $s0, $t4, 0x7C00
    ctx->pc = 0x2f8ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8ac4: 0x340381d0  ori         $v1, $zero, 0x81D0
    ctx->pc = 0x2f8ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
    // 0x2f8ac8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8acc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2f8accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8ad0: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8AD0u;
    {
        const bool branch_taken_0x2f8ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AD0u;
        // 0x2f8ad4: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ad0) {
            ctx->pc = 0x2F8AE0u;
            goto label_2f8ae0;
        }
    }
    ctx->pc = 0x2F8AD8u;
    // 0x2f8ad8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2f8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2f8adc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2f8adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2f8ae0:
    // 0x2f8ae0: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x2f8ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f8ae4: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8AE4u;
    {
        const bool branch_taken_0x2f8ae4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AE4u;
        // 0x2f8ae8: 0x8e0a0010  lw          $t2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ae4) {
            ctx->pc = 0x2F8AF4u;
            goto label_2f8af4;
        }
    }
    ctx->pc = 0x2F8AECu;
    // 0x2f8aec: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2f8aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f8af0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f8af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f8af4:
    // 0x2f8af4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8AF4u;
    {
        const bool branch_taken_0x2f8af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8AF4u;
        // 0x2f8af8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8af4) {
            ctx->pc = 0x2F8B08u;
            goto label_2f8b08;
        }
    }
    ctx->pc = 0x2F8AFCu;
    // 0x2f8afc: 0x8c43666c  lw          $v1, 0x666C($v0)
    ctx->pc = 0x2f8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26220)));
    // 0x2f8b00: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2f8b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b04: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8b04u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b08:
    // 0x2f8b08: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2f8b08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f8b0c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f8b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2f8b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f8b14: 0x25a47c40  addiu       $a0, $t5, 0x7C40
    ctx->pc = 0x2f8b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 31808));
    // 0x2f8b18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2f8b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f8b1c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2f8b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2f8b20: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2f8b20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2f8b24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f8b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b28: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8B28u;
    SET_GPR_U32(ctx, 31, 0x2F8B30u);
    ctx->pc = 0x2F8B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8B28u;
    // 0x2f8b2c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8B28u, 0x2F8B30u)) {
        return;
    }
    ctx->pc = 0x2F8B30u;
label_2f8b30:
    // 0x2f8b30: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8B30u;
    {
        const bool branch_taken_0x2f8b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b30) {
            ctx->pc = 0x2F8B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8B30u;
            // 0x2f8b34: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8B44u;
            goto label_2f8b44;
        }
    }
    ctx->pc = 0x2F8B38u;
    // 0x2f8b38: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f8b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b3c: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x2f8b3cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f8b44:
    // 0x2f8b44: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F8B44u;
    {
        const bool branch_taken_0x2f8b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b44) {
            ctx->pc = 0x2F8B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8B44u;
            // 0x2f8b48: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8C00u;
            goto label_2f8c00;
        }
    }
    ctx->pc = 0x2F8B4Cu;
    // 0x2f8b4c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2F8B4Cu;
    {
        const bool branch_taken_0x2f8b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B4Cu;
        // 0x2f8b50: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b4c) {
            ctx->pc = 0x2F8BF8u;
            goto label_2f8bf8;
        }
    }
    ctx->pc = 0x2F8B54u;
label_2f8b54:
    // 0x2f8b54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f8b58: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x2f8b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x2f8b5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f8b60: 0x2c4200f1  sltiu       $v0, $v0, 0xF1
    ctx->pc = 0x2f8b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x2f8b64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F8B64u;
    {
        const bool branch_taken_0x2f8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8b64) {
            ctx->pc = 0x2F8BA4u;
            goto label_2f8ba4;
        }
    }
    ctx->pc = 0x2F8B6Cu;
    // 0x2f8b6c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8B6Cu;
    {
        const bool branch_taken_0x2f8b6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B6Cu;
        // 0x2f8b70: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b6c) {
            ctx->pc = 0x2F8B80u;
            goto label_2f8b80;
        }
    }
    ctx->pc = 0x2F8B74u;
    // 0x2f8b74: 0x8c43666c  lw          $v1, 0x666C($v0)
    ctx->pc = 0x2f8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26220)));
    // 0x2f8b78: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2f8b78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b7c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8b7cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8b80:
    // 0x2f8b80: 0x25827c00  addiu       $v0, $t4, 0x7C00
    ctx->pc = 0x2f8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8b84: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f8b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b88: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2f8b88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f8b8c: 0x25a47c40  addiu       $a0, $t5, 0x7C40
    ctx->pc = 0x2f8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 31808));
    // 0x2f8b90: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2f8b90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f8b94: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f8b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8b98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f8b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f8b9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2F8B9Cu;
    {
        const bool branch_taken_0x2f8b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8B9Cu;
        // 0x2f8ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8b9c) {
            ctx->pc = 0x2F8BD8u;
            goto label_2f8bd8;
        }
    }
    ctx->pc = 0x2F8BA4u;
label_2f8ba4:
    // 0x2f8ba4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8BA4u;
    {
        const bool branch_taken_0x2f8ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BA4u;
        // 0x2f8ba8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8ba4) {
            ctx->pc = 0x2F8BB8u;
            goto label_2f8bb8;
        }
    }
    ctx->pc = 0x2F8BACu;
    // 0x2f8bac: 0x8c43666c  lw          $v1, 0x666C($v0)
    ctx->pc = 0x2f8bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26220)));
    // 0x2f8bb0: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x2f8bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bb4: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f8bb4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bb8:
    // 0x2f8bb8: 0x25827c00  addiu       $v0, $t4, 0x7C00
    ctx->pc = 0x2f8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 31744));
    // 0x2f8bbc: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2f8bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bc0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f8bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bc4: 0x25a47c40  addiu       $a0, $t5, 0x7C40
    ctx->pc = 0x2f8bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 31808));
    // 0x2f8bc8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f8bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f8bcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f8bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bd0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2f8bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f8bd4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8bd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f8bd8:
    // 0x2f8bd8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x2f8bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f8bdc:
    // 0x2f8bdc: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8BDCu;
    SET_GPR_U32(ctx, 31, 0x2F8BE4u);
    ctx->pc = 0x2F8BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8BDCu;
    // 0x2f8be0: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8BDCu, 0x2F8BE4u)) {
        return;
    }
    ctx->pc = 0x2F8BE4u;
label_2f8be4:
    // 0x2f8be4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8BE4u;
    {
        const bool branch_taken_0x2f8be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8BE4u;
        // 0x2f8be8: 0x8e027c00  lw          $v0, 0x7C00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8be4) {
            ctx->pc = 0x2F8BF8u;
            goto label_2f8bf8;
        }
    }
    ctx->pc = 0x2F8BECu;
    // 0x2f8bec: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f8becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bf0: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x2f8bf0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8bf4: 0x8e027c00  lw          $v0, 0x7C00($s0)
    ctx->pc = 0x2f8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31744)));
label_2f8bf8:
    // 0x2f8bf8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2f8bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2f8bfc: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x2f8bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
label_2f8c00:
    // 0x2f8c00: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8C00u;
    {
        const bool branch_taken_0x2f8c00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C00u;
        // 0x2f8c04: 0x34028170  ori         $v0, $zero, 0x8170 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c00) {
            ctx->pc = 0x2F8C10u;
            goto label_2f8c10;
        }
    }
    ctx->pc = 0x2F8C08u;
    // 0x2f8c08: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8C08u;
    {
        const bool branch_taken_0x2f8c08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C08u;
        // 0x2f8c0c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8c08) {
            ctx->pc = 0x2F8C18u;
            goto label_2f8c18;
        }
    }
    ctx->pc = 0x2F8C10u;
label_2f8c10:
    // 0x2f8c10: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x2f8c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x2f8c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2f8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8c18:
    // 0x2f8c18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f8c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8c1c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f8c1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8c20: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f8c20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8c24: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f8c24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8c28: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f8c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8c2c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f8c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8C30u;
        // 0x2f8c34: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8C38u;
    // 0x2f8c38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f8c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f8c3c: 0x0  nop
    ctx->pc = 0x2f8c3cu;
    // NOP
    ctx->pc = 0x2f8c40u;
}
