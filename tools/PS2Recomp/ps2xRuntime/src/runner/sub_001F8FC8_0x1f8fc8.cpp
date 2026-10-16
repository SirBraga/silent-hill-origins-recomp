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

// Function: sub_001F8FC8
// Address: 0x1f8fc8 - 0x1f906c
void sub_001F8FC8_0x1f8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8FC8_0x1f8fc8");
#endif

    switch (ctx->pc) {
        case 0x1f8fc8u: goto label_1f8fc8;
        case 0x1f8fccu: goto label_1f8fcc;
        case 0x1f8fd0u: goto label_1f8fd0;
        case 0x1f8fd4u: goto label_1f8fd4;
        case 0x1f8fd8u: goto label_1f8fd8;
        case 0x1f8fdcu: goto label_1f8fdc;
        case 0x1f8fe0u: goto label_1f8fe0;
        case 0x1f8fe4u: goto label_1f8fe4;
        case 0x1f8fe8u: goto label_1f8fe8;
        case 0x1f8fecu: goto label_1f8fec;
        case 0x1f8ff0u: goto label_1f8ff0;
        case 0x1f8ff4u: goto label_1f8ff4;
        case 0x1f8ff8u: goto label_1f8ff8;
        case 0x1f8ffcu: goto label_1f8ffc;
        case 0x1f9000u: goto label_1f9000;
        case 0x1f9004u: goto label_1f9004;
        case 0x1f9008u: goto label_1f9008;
        case 0x1f900cu: goto label_1f900c;
        case 0x1f9010u: goto label_1f9010;
        case 0x1f9014u: goto label_1f9014;
        case 0x1f9018u: goto label_1f9018;
        case 0x1f901cu: goto label_1f901c;
        case 0x1f9020u: goto label_1f9020;
        case 0x1f9024u: goto label_1f9024;
        case 0x1f9028u: goto label_1f9028;
        case 0x1f902cu: goto label_1f902c;
        case 0x1f9030u: goto label_1f9030;
        case 0x1f9034u: goto label_1f9034;
        case 0x1f9038u: goto label_1f9038;
        case 0x1f903cu: goto label_1f903c;
        case 0x1f9040u: goto label_1f9040;
        case 0x1f9044u: goto label_1f9044;
        case 0x1f9048u: goto label_1f9048;
        case 0x1f904cu: goto label_1f904c;
        case 0x1f9050u: goto label_1f9050;
        case 0x1f9054u: goto label_1f9054;
        case 0x1f9058u: goto label_1f9058;
        case 0x1f905cu: goto label_1f905c;
        case 0x1f9060u: goto label_1f9060;
        case 0x1f9064u: goto label_1f9064;
        case 0x1f9068u: goto label_1f9068;
        default: break;
    }

    ctx->pc = 0x1f8fc8u;

label_1f8fc8:
    // 0x1f8fc8: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x1f8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_1f8fcc:
    // 0x1f8fcc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f8fd0:
    // 0x1f8fd0: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x1f8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_1f8fd4:
    // 0x1f8fd4: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x1f8fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_1f8fd8:
    // 0x1f8fd8: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x1f8fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_1f8fdc:
    // 0x1f8fdc: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x1f8fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_1f8fe0:
    // 0x1f8fe0: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x1f8fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_1f8fe4:
    // 0x1f8fe4: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x1f8fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_1f8fe8:
    // 0x1f8fe8: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x1f8fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_1f8fec:
    // 0x1f8fec: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x1f8fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_1f8ff0:
    // 0x1f8ff0: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x1f8ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_1f8ff4:
    // 0x1f8ff4: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x1f8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_1f8ff8:
    // 0x1f8ff8: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x1f8ff8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_1f8ffc:
    // 0x1f8ffc: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x1f8ffcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_1f9000:
    // 0x1f9000: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x1f9000u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_1f9004:
    // 0x1f9004: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x1f9004u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_1f9008:
    // 0x1f9008: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x1f9008u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_1f900c:
    // 0x1f900c: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x1f900cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_1f9010:
    // 0x1f9010: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x1f9010u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_1f9014:
    // 0x1f9014: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x1f9014u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_1f9018:
    // 0x1f9018: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x1f9018u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_1f901c:
    // 0x1f901c: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x1f901cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_1f9020:
    // 0x1f9020: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x1f9020u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_1f9024:
    // 0x1f9024: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x1f9024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_1f9028:
    // 0x1f9028: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f9028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f902c:
    // 0x1f902c: 0x40f809  jalr        $v0
label_1f9030:
    if (ctx->pc == 0x1F9030u) {
        ctx->pc = 0x1F9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F902Cu;
        // 0x1f9030: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9034u;
        goto label_1f9034;
    }
    ctx->pc = 0x1F902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9034u);
        ctx->pc = 0x1F9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F902Cu;
        // 0x1f9030: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F902Cu, 0x1F9034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F9034u;
label_1f9034:
    // 0x1f9034: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x1f9034u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_1f9038:
    // 0x1f9038: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x1f9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_1f903c:
    // 0x1f903c: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x1f903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_1f9040:
    // 0x1f9040: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x1f9040u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_1f9044:
    // 0x1f9044: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f9044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f9048:
    // 0x1f9048: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1f904c:
    if (ctx->pc == 0x1F904Cu) {
        ctx->pc = 0x1F904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9048u;
        // 0x1f904c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9050u;
        goto label_1f9050;
    }
    ctx->pc = 0x1F9048u;
    {
        const bool branch_taken_0x1f9048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9048u;
        // 0x1f904c: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9048) {
            ctx->pc = 0x1F9064u;
            goto label_1f9064;
        }
    }
    ctx->pc = 0x1F9050u;
label_1f9050:
    // 0x1f9050: 0xc07e10c  jal         func_1F8430
label_1f9054:
    if (ctx->pc == 0x1F9054u) {
        ctx->pc = 0x1F9058u;
        goto label_1f9058;
    }
    ctx->pc = 0x1F9050u;
    SET_GPR_U32(ctx, 31, 0x1F9058u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F9050u, 0x1F9058u)) {
        return;
    }
    ctx->pc = 0x1F9058u;
label_1f9058:
    // 0x1f9058: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x1f9058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_1f905c:
    // 0x1f905c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f9060:
    if (ctx->pc == 0x1F9060u) {
        ctx->pc = 0x1F9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F905Cu;
        // 0x1f9060: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9064u;
        goto label_1f9064;
    }
    ctx->pc = 0x1F905Cu;
    {
        const bool branch_taken_0x1f905c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F905Cu;
        // 0x1f9060: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f905c) {
            ctx->pc = 0x1F906Cu;
            return;
        }
    }
    ctx->pc = 0x1F9064u;
label_1f9064:
    // 0x1f9064: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x1f9064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_1f9068:
    // 0x1f9068: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x1f9068u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
    ctx->pc = 0x1f906cu;
}
